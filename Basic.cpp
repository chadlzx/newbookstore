#include<bits/stdc++.h>

using namespace std;
/*
author: chad 柳志�?
student id: 518030910426 
class type: class A
class id: F1803017
*/

/*
整体设计思路�?
首先，两种模式如何处理：
	先进行load，若存在command.txt,直接读取命令�?
	若不存在，设置程序员界面和普通界面（用户友好）�?
第一次启动，创建 user 文件，创建书目订单日志管理等文件，初始条数赋�?
	user 新创�?root 用户友好）�?
对于合法性上，每次输出Invalid\n

用户权限上，老板，员工，顾客，未登录 7310

load [file] #7 加载
exit #0 退�?
su [user] [passwd] #0 登录
logout #1  变为未登�?
useradd [user‐id] [passwd] [7/3/1] [name] #3：增加一个指定权限的用户，不能创建不小于自己权限的账�?
register [user‐id] [passwd] [name] #0：注册一个带有这些信息的权限1用户
delete [user‐id] #7：删除某用户
passwd [user‐id] [old‐passwd(if not root)] [new‐passwd] #1：root不需要填写旧密码，其余账户需�?

[user-id] �?[passwd] 包含连续无空格的数字字母下划线，不超�?0个字�?
[name] 中不含空格，不超�?0个汉�?30个字�?

select [ISBN]
#3：选定ISBN为指定值的图书，若不存在则创建该ISBN的书并将其余信息留空等待modify进行填写
modify ‐ISBN=[ISBN] ‐name=[name] ‐author=[author] ‐keyword=[keyword] ‐price=[price]
#3：参数可省略，也不要求输入顺序，会更新（替换而非添加）上次选中的书至新的信�?
import [quantity] [cost_price(in total)]
#3：将上次选中的书以总共[cost_price]的价格进[quantity]�?
show ‐ISBN=[ISBN] ‐name=[name] ‐author=[author] ‐keyword=[keyword]
#1：参数可省略，也不要求输入顺序，将匹配的图书以ISBN号排序输出，需要注意该命令关键字项只支持单关键�?
show finance [time]
#7：time项省略时，输出总的收入与支出；否则输出近[time]次进货、卖出操作（分别算一次）的收入支出�?
buy [ISBN] [quantity] #1：购买该ISBN号的图书[quantity]�?

[ISBN] 为不超过20位的连续字符�?
[name] �?[author] 被双引号包起来（不含双引号），保�?
本身内容没有双引�?
内容不超�?0个汉�?
[keyword] 整体被双引号包起来（不含双引号），关键字之间 | (竖线)隔开，保�?
每个关键字本身内容无引号以及空格
内容总共不超�?0个汉�?
[quantity] 为整数（<100000�?
对于show操作，输出格式为：每行一本，所有信息项目间�?\t 隔开，价格保留两位，库存后加”本“字，如


report finance #7：会生成一张赏心悦目的财务报表，格式自�?
report employee #7：会生成一张赏心悦目的员工工作情况表，记录其操作，格式自定
log #7：会返回赏心悦目的日志记录，包括系统操作类的谁干了什么，以及财务上每一笔交易情况，格式自定
report myself #3：返回员工自己的操作记录，格式自�?
*/

using namespace std;

struct String{//一个新的定长string 
	char s[61];
	char& operator[](int b){return s[b];}
	friend int cmp(String a,String b){
		for(int i=1;;i++){
			if(a[i]==b[i]&&!a[i])break;
			if(a[i]!=b[i])return a[i]<b[i]?-1:1;
		}
		return 0;
	}
	friend ostream & operator<<(ostream & out,const String& b){
		printf("%s",b.s+1);
		return out;
	}
	String(string ss){
		int top=0;
		memset(s,0,sizeof(s));
		for(int i=0;i<ss.size();i++)
			s[++top]=ss[i];
		s[++top]='\0';
	}
	String(){}
	String(char* a){
		memset(s,0,sizeof(s));
		for(int i=1;;i++){
			s[i]=a[i];
			if(!a[i])break;
		}
	}
};

bool isempty(String& a){
	return cmp(a,(String)(string)(""))==0;
}
//读入及其检�?
//initialization
const int block=100;
enum node_type{Begin=1,End,normal};
enum TYPE{
	EXIT=1,SU,logout,USERADD,REGISTER,DELETE,PASSWD,SELECT,MODIFY,IMPORT,SHOW,SHOW_FINANCE,BUY,
	REPORT_FINANCE,REPORT_IMPLOYEE,REPORT_MYSELY,LOG,WRONG
};
string TYPE_NAME[]={
	"exit","su","logout","useradd","register","delete","passwd","select","modify","import","show","buy","report","log",
	"report finance","report imployee","log","report myself"
};
bool check_empty(string s,int b){//检查从b位置开�?s是否为空�?
	for(int i=b;i<s.size();i++)if(s[i]!=' ')return 0;
	return 1;
}
void StringToChar(string s,char* a){
	int top=0;
	for(int i=0;i<s.size();i++)
		a[++top]=s[i];
	a[++top]='\0';
}
int StringToInterger(string s){
	int ans=0;
	for(int i=0;i<s.size();i++)
		ans=ans*10+s[i]-'0';
	return ans;
}
class INPUT{
	public:
	char user_id[35];
	char passwd[35];
	char name[110];
	char old_passwd[35];
	string keyword[35];
	char ISBN[35];
	char author[35];
	int quantity,time;
	double price,cost_price;
	int permission;
	bool ISBN_flag,author_flag,name_flag,keyword_flag,price_flag;
	public:
	INPUT(){
		memset(user_id,0,sizeof(user_id));
		memset(passwd,0,sizeof(passwd));
		memset(name,0,sizeof(name));
		memset(old_passwd,0,sizeof(old_passwd));
		memset(author,0,sizeof(author));
		memset(ISBN,0,sizeof(ISBN));
		quantity=time=price=cost_price=permission=0;	
		ISBN_flag=author_flag=name_flag=keyword_flag=price_flag=0;
	}
	
	TYPE input(string s){
		string iden="";bool f=0;int i;
		for(i=0;i<s.size();i++){
			if(s[i]==' '&&f)break;
			if(s[i]!=' ')f=1;
			iden+=s[i];
		}
			if(iden=="exit"){
				if(!check_empty(s,i))return WRONG;
				return EXIT;
			}
			else if(iden=="su"){
				f=0;
				string tmp("");
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' '){f=1;}
					else continue;
					tmp+=s[i];
				}
				f=0;
				string tmp2("");
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' '){f=1;}
					else continue;
					tmp2+=s[i];
				}
				if(tmp.size()>30||tmp2.size()>30)return WRONG;
				if(!check_empty(s,i))return WRONG;
				StringToChar(tmp,user_id);
				StringToChar(tmp2,passwd);
				return SU;
			}
			else if(iden=="logout"){
				if(!check_empty(s,i))return WRONG;
				return logout;
			}
			else if(iden=="useradd"){
				string tmp("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp+=s[i];
				}
				string tmp2("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp2+=s[i];
				}
				string tmp3("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp3+=s[i];
				}
				string tmp4("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp4+=s[i];
				}
				if(tmp4=="")return WRONG;
				if(tmp.size()>30||tmp2.size()>30)return WRONG;
				if(!check_empty(s,i))return WRONG;
				StringToChar(tmp,user_id);
				StringToChar(tmp2,passwd);
				if(StringToInterger(tmp3)==0)return WRONG;
				permission=StringToInterger(tmp3);
				StringToChar(tmp4,name);
				return USERADD;
			}
			else if(iden=="register"){
				string tmp("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp+=s[i];
				}
				string tmp2("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp2+=s[i];
				}
				string tmp3("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp3+=s[i];
				}
				if(tmp3=="")return WRONG;
				if(tmp.size()>30||tmp2.size()>30)return WRONG;
				if(!check_empty(s,i))return WRONG;
				StringToChar(tmp,user_id);
				StringToChar(tmp2,passwd);
				StringToChar(tmp3,name);
				return REGISTER;
			}
			else if(iden=="delete"){
				string tmp("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp+=s[i];
				}
				if(tmp.size()==0||tmp.size()>30)return WRONG;
				if(!check_empty(s,i))return WRONG;
				StringToChar(tmp,user_id);
				return DELETE;
			}
			else if(iden=="passwd"){
				string tmp("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp+=s[i];
				}
				string tmp2("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp2+=s[i];
				}
				string tmp3("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp3+=s[i];
				}
				if(tmp.size()>30||tmp2.size()>30||tmp3.size()>30)return WRONG;
				if(!check_empty(s,i))return WRONG;
				StringToChar(tmp,user_id);
				StringToChar(tmp2,old_passwd);
				StringToChar(tmp3,passwd);
				return PASSWD;
			}
			else if(iden=="select"){
				string tmp("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp+=s[i];
				}
				if(!check_empty(s,i))return WRONG;
				if(tmp.size()>20)return WRONG;
				StringToChar(tmp,ISBN);
				return SELECT;
			}
			else if(iden=="modify"){
				while(true){
					string tmp("");f=0;
					for(;i<s.size();i++){
						if(s[i]==' '&&f)break;
						if(s[i]!=' ')f=1;
						else continue;
						tmp+=s[i];
					}
					if(tmp=="")break;
					if(tmp[0]!='-')return WRONG;
					if(tmp[1]=='I'){//ISBN
						string s(tmp,1,4);
						if(s!="ISBN")return WRONG;
						if(tmp[5]!='=')return WRONG;
						ISBN_flag=1;
						string s2(tmp,6,tmp.size()-6);
						if(s2.size()>20||s2.size()==0)return WRONG;
						StringToChar(s2,ISBN);
						continue;
					}
					else if(tmp[1]=='n'){
						string s(tmp,1,4);
						if(s!="name")return WRONG;
						if(tmp[5]!='=')return WRONG;
						name_flag=1;
						string s2(tmp,7,tmp.size()-8);
						if(tmp.size()<7||tmp[6]!='\"'||tmp[tmp.size()-1]!='\"')return WRONG;
						if(s2.size()>60||s2.size()==0)return WRONG;
						StringToChar(s2,name);
						continue;
					}
					else if(tmp[1]=='a'){
						string s(tmp,1,6);
						if(s!="author")return WRONG;
						if(tmp[7]!='=')return WRONG;
						author_flag=1;
						string s2(tmp,9,tmp.size()-10);
						if(tmp.size()<9||tmp[8]!='\"'||tmp[tmp.size()-1]!='\"')return WRONG;
						if(s2.size()>60||s2.size()==0)return WRONG;
						StringToChar(s2,author);
						continue;
					}
					else if(tmp[1]=='k'){
						string s(tmp,1,7);
						if(s!="keyword")return WRONG;
						if(tmp[8]!='=')return WRONG;
						keyword_flag=1;
						string s2(tmp,10,tmp.size()-11);
						if(tmp.size()<10||tmp[9]!='\"'||tmp[tmp.size()-1]!='\"')return WRONG;
						int top=0,last=0;
						for(int j=0;j<=s2.size();j++)if(s2[j]=='|'||j==s2.size()){
							string s3(s2,last,j-last);
							last=j+1;
							if(s3=="")return WRONG;
							keyword[++top]=s3;
						}
						continue;
					}
					else if(tmp[1]=='p'){
						string s(tmp,1,5);
						if(s!="price")return WRONG;
						if(tmp[6]!='=')return WRONG;
						price_flag=1;
						string s2(tmp,7,tmp.size()-7);
						char ss[20];
						StringToChar(s2,ss);
						price=atof(ss+1);
						continue;
					}
					
				}
				return MODIFY;
			}
			else if(iden=="import"){
				string tmp2("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp2+=s[i];
				}
				string tmp3("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp3+=s[i];
				}
				
				quantity=StringToInterger(tmp2);
				char q[30];
				memset(q,0,sizeof(q));
				StringToChar(tmp3,q);
				cost_price=atof(q+1);
				if(!check_empty(s,i))return WRONG;
				if(!quantity||fabs(cost_price)<1e-10)return WRONG;
				return IMPORT;
				
			}
			else if(iden=="show"){
				int y=0;
				while(++y){
					string tmp("");f=0;
					for(;i<s.size();i++){
						if(s[i]==' '&&f)break;
						if(s[i]!=' ')f=1;
						else continue;
						tmp+=s[i];
					}
					if(tmp=="")break;
					if(tmp[0]!='-'){// handle show_finance
						if(tmp=="finance"&&y==1){
							if(check_empty(s,i))return SHOW_FINANCE;
							string tmp2("");f=0;
							for(;i<s.size();i++){
								if(s[i]==' '&&f)break;
								if(s[i]!=' ')f=1;
								else continue;
								tmp2+=s[i];
							}
							time=StringToInterger(tmp2);
							if(!time)return WRONG;
							return SHOW_FINANCE;
						}
						else return WRONG;
					}
					if(tmp[1]=='I'){//ISBN
						string s(tmp,1,4);
						if(s!="ISBN")return WRONG;
						if(tmp[5]!='=')return WRONG;
						ISBN_flag=1;
						string s2(tmp,6,tmp.size()-6);
						if(s2.size()>20||s2.size()==0)return WRONG;
						StringToChar(s2,ISBN);
						continue;
					}
					else if(tmp[1]=='n'){
						string s(tmp,1,4);
						if(s!="name")return WRONG;
						if(tmp[5]!='=')return WRONG;
						name_flag=1;
						string s2(tmp,7,tmp.size()-8);
						if(tmp.size()<7||tmp[6]!='\"'||tmp[tmp.size()-1]!='\"')return WRONG;
						if(s2.size()>60||s2.size()==0)return WRONG;
						StringToChar(s2,name);
						continue;
					}
					else if(tmp[1]=='a'){
						string s(tmp,1,6);
						if(s!="author")return WRONG;
						if(tmp[7]!='=')return WRONG;
						author_flag=1;
						string s2(tmp,9,tmp.size()-10);
						if(tmp.size()<9||tmp[8]!='\"'||tmp[tmp.size()-1]!='\"')return WRONG;
						if(s2.size()>60||s2.size()==0)return WRONG;
						StringToChar(s2,author);
						continue;
					}
					else if(tmp[1]=='k'){
						string s(tmp,1,7);
						if(s!="keyword")return WRONG;
						if(tmp[8]!='=')return WRONG;
						keyword_flag=1;
						string s2(tmp,10,tmp.size()-11);
						if(tmp.size()<10||tmp[9]!='\"'||tmp[tmp.size()-1]!='\"')return WRONG;
						int top=0,last=0;
						for(int j=0;j<=s2.size();j++)if(s2[j]=='|'||j==s2.size()){
							string s3(s2,last,j-last);
							last=j+1;
							if(s3=="")return WRONG;
							keyword[++top]=s3;
						}
						continue;
					}
					else if(tmp[1]=='p'){
						string s(tmp,1,5);
						if(s!="price")return WRONG;
						if(tmp[6]!='=')return WRONG;
						string s2(tmp,7,tmp.size()-7);
						char ss[20];
						StringToChar(s2,ss);
						price=atof(ss+1);
						continue;
					}
					
				}
				return SHOW;
			}
			else if(iden=="buy"){
				string tmp("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp+=s[i];
				}
				string tmp2("");f=0;
				for(;i<s.size();i++){
					if(s[i]==' '&&f)break;
					if(s[i]!=' ')f=1;
					else continue;
					tmp2+=s[i];
				}
				if(!check_empty(s,i))return WRONG;
				quantity=StringToInterger(tmp2);
				StringToChar(tmp,ISBN);
				return BUY;
			}
			//暂时不需�?
			else if(iden=="report"){
				return REPORT_FINANCE;
			}
			else if(iden=="log"){
				return LOG;
			}
			else return WRONG;
	}
};





bool check(string s){//判断是否需初始�?若空，则返回1，否�?
	ifstream it(s.c_str());
	if(!it)return 1;
	it.seekg(0,ios::end);
	if(it.tellg()==0){
		it.close();return 1;
	}
	it.close();
	return 0;
}
class Bignode{
	public:
	node_type a;//类型
	int node_number;//list的node数目
	int next,prev;//前后块驱
	int location;//所处文件位�?
	int node_list_begin;//指向所属链表头
	Bignode(){
		a=normal;
		node_number=0;
		next=prev=location=node_list_begin=0;
	}
	void display(){
		printf("number:%d prev:%d next:%d location:%d node first:%d\n",node_number,prev,next,location,node_list_begin);
	}
};
class node{
	public:
	node_type a;//当前点的类型
	String key;int value;//权值键�?
	int next,prev;//前后驱的位置
	int location;//当前所处文件位�?
	int head;//所对应的bignode 的位�?
	node(){
		a=normal;
		key=(String)(string)("");
		value=0;
		next=prev=location=head=0;
	}
	void display(){
		printf("prev:%d next:%d location:%d\n",prev,next,location);
		printf("key:%s value:%d\n",key.s+1,value);
	}
};
class BlockLinkList{
	
	public:
	string F;//输出文件
	template<class T> 
	T get(int location){//直接得到location位置的变
		ifstream file(F.c_str());
		file.seekg(location);
		T a;
		file.read(reinterpret_cast<char *> (&a),sizeof(a));
		file.close();
		return a;
	}
	String get_begin_node(Bignode& h){//得到h的第一个key�?
		node begin=get<node>(h.node_list_begin);
		node first=get<node>(begin.next);
		return first.key;
	}
	void updata(Bignode& a){//更新文件
		fstream file(F.c_str());
		file.seekp(a.location);
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	void updata(node& a){//更新文件
		fstream file(F.c_str());
		file.seekp(a.location);
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	void foundinend(Bignode& a){
		fstream file(F.c_str());
		file.seekp(0,ios::end);
		a.location=file.tellp();
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	void foundinend(node& a){
		fstream file(F.c_str());
		file.seekp(0,ios::end);
		a.location=file.tellp();
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	node q[110];int top;
	node getend(node a){
		while(a.a!=End)
			a=get<node>(a.next);
		return a;
	}
	void getprev(node a,String key){
		if(a.a==Begin){
			Bignode c=get<Bignode>(a.head);
			c=get<Bignode>(c.prev);
			if(c.a==Begin)return ;
			a=getend(get<node>(c.node_list_begin));
		}
		if(a.a==End)a=get<node>(a.prev);
		if(a.a!=normal)return ;
		
		if(cmp(a.key,key)==0){
			q[++top]=a;
			getprev(get<node>(a.prev),key);
		}
		return ;
		
	}
	void getnext(node a,String key,int flag=0){
		if(a.a==End){
			Bignode c=get<Bignode>(a.head);
			c=get<Bignode>(c.next);
			if(c.a==End)return ;
			a=get<node>(c.node_list_begin);
		}
		if(a.a==Begin)a=get<node>(a.next);
		if(a.a!=normal)return ;
		if(cmp(a.key,key)==0||flag){
			q[++top]=a;
			getnext(get<node>(a.next),key,flag);
		}
		return ;
	}
	void bianli(){
		top=0;
		Bignode x=get<Bignode>(0);
		x=get<Bignode>(x.next);
		node a=get<node>(x.node_list_begin);
		getnext(a,a.key,1);
	}
	node find(String key){
		Bignode x=get<Bignode>(0);
		x=get<Bignode>(x.next);
		while(true){
			if(get<Bignode>(x.next).a==End)break;
			Bignode c=get<Bignode>(x.next);
			if(cmp(get_begin_node(c),key)==1)break;
			x=c;
		}
		node y=get<node>(x.node_list_begin);
		while(true){
			if(get<node>(y.next).a==End)break;
			node c=get<node>(y.next);
			if(cmp(c.key,key)>0)break;
			y=c;
		}
		
		if(cmp(y.key,key)==0){
			top=0;
			getprev(y,key);
			getnext(y,key);
			return y;
		}
		return y;
	}
	void initialization(string s){
		F=s;
		if(!check(s))return;
		ofstream file(F.c_str());
		file.close();
		
		Bignode x,y,z;
		x.a=Begin;y.a=normal,z.a=End;
		foundinend(x),foundinend(y),foundinend(z);
		x.next=y.location;z.prev=y.location;
		y.prev=x.location,y.next=z.location;
		
		
		node a,b;
		foundinend(a);foundinend(b);
		a.a=Begin,b.a=End;
		a.head=b.head=y.location;
		foundinend(a),foundinend(b);
		a.next=b.location;b.prev=a.location;
		
		y.node_list_begin=a.location;
		
		updata(a),updata(b),updata(x),updata(y),updata(z);
		return ;
	}
	void erase_a_node(node& now){
		node pre,nex;
		if(now.a!=normal)return ;
		pre=get<node>(now.prev),nex=get<node>(now.next);
		pre.next=nex.location,nex.prev=pre.location;
		Bignode h=get<Bignode>(pre.head);
		h.node_number--;
		updata(pre),updata(nex),updata(h);
	}
	void found_a_node(String key,int value){
		node y=find(key);
		
		
		node nex=get<node>(y.next);
		node now;
		now.head=nex.head;
		now.key=key,now.value=value;
		foundinend(now);
		nex.prev=now.location;y.next=now.location;
		now.prev=y.location;now.next=nex.location;
		now.a=normal;
		updata(now),updata(y),updata(nex);
		Bignode c=get<Bignode>(y.head);
		c.node_number++;
		updata(c);
	}
	
	void display(){
		Bignode x=get<Bignode>(0);
		x=get<Bignode>(x.next);
		node y=get<node>(x.node_list_begin);
		y=get<node>(y.next);
		printf("\n");
		printf("\n");
		while(true){
			if(y.a==End)break;
			y.display();
			y=get<node>(y.next);
		}
		printf("\n");
		printf("\n");
	}
};

//void found(String a,int value)
//node find (String key)
//块状链表




BlockLinkList USER_index;
class user_node{
	public:
	String name,user_id,passwd;
	int pri,location;
	user_node(){
		pri=location=0;
		name=user_id=passwd=(string)("");
	}
	void display(){
		printf("%s %s %s %d %d\n",user_id.s+1,name.s+1,passwd.s+1,pri,location);
	}
}unknown;//未登录用�?
class USER{//用户信息
	public:
	string F;
	user_node now;//当前用户
	template<class T>
	void updata(T& a){//更新文件
		fstream file(F.c_str());
		file.seekp(a.location);
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	template<class T>//在文件尾创建一个新类型，并返回其位�?
	void foundinend(T& a){
		fstream file(F.c_str());
		file.seekp(0,ios::end);
		a.location=file.tellp();
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	user_node get(int location){
		fstream file(F.c_str());
		file.seekg(location);
		user_node a;
		file.read(reinterpret_cast<char *> (&a),sizeof(a));
		file.close();
		return a;
	}
	
	void init(int x){
		F="user.txt";
		if(check(F)){
			ofstream file(F.c_str());
			file.close();
		}
		USER_index.initialization("USER_index.txt");
		now=unknown;
		if(x==0){
			user_node root;
			root.user_id=root.name=(String)(string)("root");
			root.passwd=(String)(string)("sjtu");
			root.pri=7;
			foundinend(root);
			USER_index.found_a_node(root.user_id,root.location);
			now=root;
		}
		now=get(0);
	}
	void logout(){
		now=unknown;
	}
	void Su(String user_id,String passwd){
		node c=USER_index.find(user_id);
		if(cmp(c.key,user_id))throw 1;
		user_node a=get(c.value);
		if(now.pri>a.pri){
			now=a;
			return ;
		}
		if(cmp(a.passwd,passwd))throw 1;
		now=a;
	}
	void Useradd(String user_id,String passwd,int pri,String name){
		if(now.pri<=pri||(pri!=7&&pri!=3&&pri!=1))throw 1;
		node b=USER_index.find(user_id);
		if(!cmp(b.key,user_id))throw 1;
		user_node a;a.user_id=user_id,a.passwd=passwd,a.pri=pri,a.name=name;
		foundinend(a);
		USER_index.found_a_node(user_id,a.location);
	}
	void Register(String user_id,String passwd,String name){
		node b=USER_index.find(user_id);
		if(!cmp(b.key,user_id))throw 1;
		user_node a;a.user_id=user_id,a.passwd=passwd,a.pri=1,a.name=name;
		foundinend(a);
		USER_index.found_a_node(user_id,a.location);
	}
	void Delete(String user_id){
		node b=USER_index.find(user_id);
		if(cmp(b.key,user_id))throw 1;
		USER_index.erase_a_node(b);
	}
	void Passwd(String user_id,String old_passwd,String passwd){
		node b=USER_index.find(user_id);
		if(cmp(b.key,user_id))throw 1;
		user_node a=get(b.value);
		if(!cmp(now.user_id,(String)(string)("root"))){
			a.passwd=old_passwd;
			updata(a);
			return;
		}
		if(cmp(a.passwd,old_passwd))throw 1;
		a.passwd=passwd;
		updata(a);
	}
}USER_it;


struct log_node{
	int prev,ci,location;
	double value;
	log_node(){prev=0,value=0;ci=0,location=0;}
};
class LOG{
	public:
	string F;
	int sum,linkk[2];
	int getsum(){
		fstream file(F.c_str());
		file.seekg(0,ios::end);
		return file.tellg();
	}
	template<class T>
	T get(int location){//直接得到location位置的变�?相对于最后的位置
		ifstream file(F.c_str());
		file.seekg(location);
		T a;
		file.read(reinterpret_cast<char *> (&a),sizeof(a));
		file.close();
		return a;
	}
	template<class T>
	void foundinend(T& a){
		fstream file(F.c_str());
		file.seekp(0,ios::end);
		a.location=file.tellp();
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	void init(){
		F="finance.txt";
		if(check(F)){
			sum=0;
			linkk[0]=0;linkk[1]=0;
			ofstream file(F.c_str());
			file.write(reinterpret_cast<const char *> (&sum),sizeof(sum));
			file.write(reinterpret_cast<const char *> (&linkk[0]),sizeof(linkk[0]));
			file.write(reinterpret_cast<const char *> (&linkk[0]),sizeof(linkk[1]));
			file.close();
		}
		else {
			ifstream file(F.c_str());
			file.read(reinterpret_cast<char *> (&sum),sizeof(sum));
			file.read(reinterpret_cast<char *> (&linkk[0]),sizeof(linkk[0]));
			file.read(reinterpret_cast<char *> (&linkk[1]),sizeof(linkk[1]));
		}
	}
	void updata(int& value,int location){
		fstream file(F.c_str());
		file.seekp(location);
		file.write(reinterpret_cast<char *> (&value),sizeof(value));
		file.close();
	}
	void found(double money,int id){//flag{ 0 :cost 1: income}
		//printf("%d %d\n",getsum(id)/(sizeof(double)),id);
		log_node last=get<log_node>(linkk[id]);
		log_node now;
		now.ci=++sum;
		now.prev=last.location,now.value=money;
		foundinend(now);
		linkk[id]=now.location;
		updata(sum,0);
		updata(linkk[0],4);
		updata(linkk[1],8);
	}
	
	pair<double,double> 
		find(int key){//找到最近key次的进货或者卖出操�?
		if(!key)key=sum;
		int t=sum-key+1,kin=sum;
		double income=0,pay=0;
		log_node a=get<log_node>(linkk[0]);
		log_node b=get<log_node>(linkk[1]);
		while(kin>=t){
			if(a.ci==kin){
				pay+=a.value;
				if(a.location==12)break;
				a=get<log_node>(a.prev);
			}
			else {
				income+=b.value;
				b=get<log_node>(b.prev);
			}
			kin--;
		}
		return make_pair(pay,income);
	}
}LOG_it;


class book{//书库基本单位
	public:
	String ISBN,author,name,keyword[30];
	int location;//记录其在文件中的位置
	double price;
	int quantity;
	bool ISBN_flag,author_flag,name_flag,keyword_flag,price_flag;
	book(){
		ISBN=author=name=(String)(string)("");
		for(int i=0;i<29;i++)keyword[i]=(String)(string)("");
		location=price=quantity=0;
	}
	void display(){
		printf("%s\t%s\t%s\t",ISBN.s+1,name.s+1,author.s+1);
		for(int i=1;;i++){
			if(!cmp(keyword[i],(String)(string)(""))){
				break;
			}
			else {
				if(i==1)printf("%s",keyword[i].s+1);
				else printf("|%s",keyword[i].s+1);
			}
		}
		printf("\t%.2lf\t",price);
		char ss[4]={-26,-100,-24,'\0'};
		printf("%d本\n",quantity,ss);
	}
	bool operator!=(book& c){
		if(cmp(ISBN,c.ISBN)||cmp(author,c.author)||cmp(name,c.name)||cmp(keyword[1],c.keyword[1]))return 1;
		if(location!=c.location||fabs(price-c.price)>1e-9)return 1;
		if(quantity!=c.quantity)return 1;
		return 0;
	}
	bool operator==(book& c){
		return !(*this!=c);
	}
}unknownn,q[1200];int top=0;
bool cmp2(book& a,book& b){return cmp(a.ISBN,b.ISBN)==-1;}
BlockLinkList author_index,ISBN_index,name_index,keyword_index;

class BOOK{
	public:
	string F;
	book now;bool select_flag;
	template<class T>
	void updata(T& a){//更新文件
		fstream file(F.c_str());
		file.seekp(a.location);
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	template<class T>//在文件尾创建一个新类型，并返回其位�?
	void foundinend(T& a){
		fstream file(F.c_str());
		file.seekp(0,ios::end);
		a.location=file.tellp();
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	book get(int location){
		fstream file(F.c_str());
		file.seekg(location);
		book a;
		file.read(reinterpret_cast<char *> (&a),sizeof(a));
		file.close();
		return a;
	}
	void init(int flag){
		F="book.txt";
		if(check(F)){
			ofstream file(F.c_str());
			file.close();
		}
		author_index.initialization((string)("author_index.txt"));
		ISBN_index.initialization((string)("ISBN_index.txt"));
		name_index.initialization((string)("name_index.txt"));
		keyword_index.initialization((string)("keyword_index.txt"));
		now=unknownn;
		select_flag=0;
	}
	void erase(book& a,int flag){//删除一本书的索�?
	
		if(flag==0){
			if(isempty(a.ISBN))return ;
			node y=ISBN_index.find(a.ISBN);
			if(cmp(y.key,a.ISBN))throw 1;
			ISBN_index.erase_a_node(y);
			a.ISBN=(String)(string)("");
			return ;
		}
		
		
		if(flag==1){//删除author
			if(isempty(a.author))return ;
			node y=author_index.find(a.author);
			a.author=(String)(string)("");
			for(int i=1;i<=author_index.top;i++){
				book k=get(author_index.q[i].location);
				if(cmp(k.ISBN,a.ISBN)==0){
					author_index.erase_a_node(author_index.q[i]);
					return ;
				}
			}
			return ;
		}
		if(flag==2){//name
			if(isempty(a.name))return ;
			node y=name_index.find(a.name);
			a.name=(String)(string)("");
			for(int i=1;i<=name_index.top;i++){
				book k=get(name_index.q[i].location);
				if(cmp(k.ISBN,a.ISBN)==0){
					name_index.erase_a_node(name_index.q[i]);
					return ;
				}
			}
			return ;
		}
		if(flag==3){//keyword
			if(isempty(a.keyword[1]))return ;
			for(int id=1;id<=29;id++){
				if(cmp(a.keyword[id],(String)(string)(""))==0)break;
				keyword_index.find(a.keyword[id]);
				a.keyword[id]=(String)(string)("");
				for(int i=1;i<=keyword_index.top;i++){
					book k=get(keyword_index.q[i].location);
					if(cmp(k.ISBN,a.ISBN)==0){
						keyword_index.erase_a_node(keyword_index.q[i]);
						break;
					}
				}
			}
			return ;
		}
	}
	
	void select(String ISBN){
		select_flag=1;
		node b=ISBN_index.find(ISBN);
		if(cmp(b.key,ISBN)==0){
			now=get(b.value);
		}
		else {
			now=unknownn;
			now.ISBN=ISBN;
			foundinend(now);
			ISBN_index.found_a_node(now.ISBN,now.location);
		}
	}
	
	void modify(book c){
		if(!select_flag)throw 1;
		
		if(c.ISBN_flag){
			node b=ISBN_index.find(c.ISBN);
			if(!cmp(b.key,c.ISBN))throw 1;
			
			erase(now,0);
			now.ISBN=c.ISBN;
			ISBN_index.found_a_node(now.ISBN,now.location);
		}
		
		if(c.author_flag){
			erase(now,1);
			now.author=c.author;
			author_index.found_a_node(now.author,now.location);
		}
		if(c.name_flag){
			erase(now,2);
			now.name=c.name;
			name_index.found_a_node(now.name,now.location);
		}
		if(c.keyword_flag){
			erase(now,3);
			for(int i=1;i<=29;i++){
				if(isempty(c.keyword[i]))break;
				now.keyword[i]=c.keyword[i];
				keyword_index.found_a_node(now.keyword[i],now.location);
			}
		}
		if(c.price_flag)
			now.price=c.price;
		updata(now);
		
	}
	void import(int quantity,double cost){
		if(!select_flag)throw 1;
		now.quantity+=quantity;
		updata(now);
		LOG_it.found(cost,0);
	}
	bool checkbook(book& a,book& c){
		if((a.author_flag||c.author_flag)&&cmp(a.author,c.author))return 1;
		if((a.name_flag||c.name_flag)&&cmp(a.name,c.name))return 1;
		if((a.ISBN_flag||c.ISBN_flag)&&cmp(a.ISBN,c.ISBN))return 1;
		return 0;
	}
	void show(book a){
		if(a==unknownn){
			ISBN_index.bianli();
			for(int i=1;i<=ISBN_index.top;i++){
				a=get(ISBN_index.q[i].value);
				a.display();
			}
		}
		else {
			if(a.ISBN_flag){
				node b=ISBN_index.find(a.ISBN);
				if(cmp(a.ISBN,b.key))return;
				book c=get(b.value);
				if(!checkbook(a,c))
					c.display();
				return ;
			}
			if(a.author_flag){
				top=0;
				author_index.find(a.author);
				for(int i=1;i<=author_index.top;i++){
					node b=author_index.q[i];
					book c=get(b.value);
					if(!checkbook(c,a))q[++top]=c;
				}
				sort(q+1,q+top+1,cmp2);
				for(int i=1;i<=top;i++){
					if(q[i]!=q[i-1])
						q[i].display();
				}
				return ;
			}
			if(a.name_flag){
				top=0;
				name_index.find(a.name);
				for(int i=1;i<=name_index.top;i++){
					node b=name_index.q[i];
					book c=get(b.value);
					if(!checkbook(c,a))q[++top]=c;
				}
				sort(q+1,q+top+1,cmp2);
				for(int i=1;i<=top;i++){
					if(q[i]!=q[i-1])
						q[i].display();
				}
				return ;
			}
			top=0;
			keyword_index.find(a.keyword[1]);
			//printf("%s\n",a.keyword[1].s+1);
			for(int i=1;i<=keyword_index.top;i++){
				node b=keyword_index.q[i];
				book c=get(b.value);
				if(!checkbook(c,a))q[++top]=c;
			}
			sort(q+1,q+top+1,cmp2);
			for(int i=1;i<=top;i++){
				if(q[i]!=q[i-1]) 
					q[i].display();
			}
			return ;
		}
	}
	void show_finance(int time){
		printf("+ %.2lf - %.2lf\n",LOG_it.find(time).second,LOG_it.find(time).first);
	}
	void buy(String ISBN,int quantity){
		node b=ISBN_index.find(ISBN);
		if(cmp(b.key,ISBN))throw 1;
		book c=get(b.value);
		if(c.quantity<quantity)throw 1;
		c.quantity-=quantity;
		LOG_it.found(quantity*c.price,1);
		updata(c);
	}
}BOOK_it;






void initialization(){
	LOG_it.init();
	if(check("ISBN_index.txt")){
		USER_it.init(0);
		BOOK_it.init(0);
	}
	else {
		USER_it.init(1);
		BOOK_it.init(1);
	}
	
}
void init(){
	initialization();
	string s;
	ifstream check_load("command.txt");
	int flag=0;
	if(!check_load)flag=0;
	else flag=1;
	int sum=0;
	while(true){
		sum++;
		//keyword_index.display();
		if(flag)getline(check_load,s);
		else getline(cin,s);
		//cout<<s<<endl;
		if(s.size()==0){continue;}
		INPUT a;
		TYPE aaa=a.input(s);
		String User_id,Passwd,Name,Old_passwd;int pri;
		String ISBN,author,keyword,price;
		book c=unknownn;double cost=0;int quantity=0;int time=0;
		try{
		switch (aaa){
			case (EXIT):
				//cout<<sum<<endl;
				exit(0);
				break;
			case (SU):
				User_id=a.user_id,Passwd=a.passwd;
				USER_it.Su(User_id,Passwd);
				break;
			case (logout):
				if(USER_it.now.pri<1)throw 1;
				USER_it.logout();
				break;
			case (USERADD):
				if(USER_it.now.pri<3)throw 1;
				User_id=a.user_id;Name=a.name;
				Passwd=a.passwd;pri=a.permission;
				USER_it.Useradd(User_id,Passwd,pri,Name);
				break;
			case (REGISTER):
				User_id=a.user_id;Name=a.name;
				Passwd=a.passwd;
				USER_it.Register(User_id,Passwd,Name);
				break;
			case (DELETE):
				if(USER_it.now.pri!=7)throw 1;
				User_id=a.user_id;
				USER_it.Delete(User_id);
				break;
			case (PASSWD):
				if(USER_it.now.pri<1)throw 1;
				User_id=a.user_id;Passwd=a.passwd;Old_passwd=a.old_passwd;
				USER_it.Passwd(User_id,Old_passwd,Passwd);
				break;
			case (SELECT):
				if(USER_it.now.pri<3)throw 1;
				ISBN=a.ISBN;
				BOOK_it.select(ISBN);
				break;
			case (MODIFY):
				if(USER_it.now.pri<3)throw 1;
				c.ISBN=a.ISBN;c.name=a.name;c.author=a.author;
				c.price=a.price;
				c.ISBN_flag=a.ISBN_flag;c.name_flag=a.name_flag;c.author_flag=a.author_flag;
				c.keyword_flag=a.keyword_flag;c.price_flag=a.price_flag;
				for(int i=1;i<30;i++){
					if(a.keyword[i].size()==0)break;
					c.keyword[i]=a.keyword[i];
				}
				BOOK_it.modify(c);
				break;
			case (IMPORT):
				if(USER_it.now.pri<3)throw 1;
				quantity=a.quantity;
				cost=a.cost_price;
				BOOK_it.import(quantity,cost);
				break;
			case SHOW:
				if(USER_it.now.pri==0)throw 1;
				c.author=a.author;
				c.keyword[1]=a.keyword[1];
				c.ISBN=a.ISBN;c.name=a.name;
				c.keyword_flag=a.keyword_flag;
				c.ISBN_flag=a.ISBN_flag;c.name_flag=a.name_flag;c.author_flag=a.author_flag;
				BOOK_it.show(c);
				break;
			case (SHOW_FINANCE):
				if(USER_it.now.pri!=7)throw 1;
				time=a.time;
				BOOK_it.show_finance(time);
				break;
			case (BUY):
				//USER_it.now.display();
				if(USER_it.now.pri==0)throw 1;
				ISBN=a.ISBN;
				quantity=a.quantity;
				BOOK_it.buy(ISBN,quantity);
				break;
			case (WRONG):
		//		cout<<endl;
				printf("Invalid\n");
		//		cout<<(String)s<<endl<<endl;
		//		sum++;
				break;
			}
		}
		catch(...){
		//	cout<<endl;
			printf("Invalid\n");
		//	cout<<(String)s<<endl<<endl;
		//	sum++;
		}
	}
	check_load.close();
	//cout<<sum<<endl;
}
int main(){
	//freopen("chad.out","w",stdout);
	init();
	return 0;
}
