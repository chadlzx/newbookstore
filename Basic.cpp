#include<bits/stdc++.h>

using namespace std;
/*
author: chad 鏌冲織杞?
student id: 518030910426 
class type: class A
class id: F1803017
*/

/*
鏁翠綋璁捐鎬濊矾锛?
棣栧厛锛屼袱绉嶆ā寮忓浣曞鐞嗭細
	鍏堣繘琛宭oad锛岃嫢瀛樺湪command.txt,鐩存帴璇诲彇鍛戒护銆?
	鑻ヤ笉瀛樺湪锛岃缃▼搴忓憳鐣岄潰鍜屾櫘閫氱晫闈紙鐢ㄦ埛鍙嬪ソ锛夈€?
绗竴娆″惎鍔紝鍒涘缓 user 鏂囦欢锛屽垱寤轰功鐩鍗曟棩蹇楃鐞嗙瓑鏂囦欢锛屽垵濮嬫潯鏁拌祴涓?
	user 鏂板垱寤縭oot 鐢ㄦ埛鍙嬪ソ锛夈€?
瀵逛簬鍚堟硶鎬т笂锛屾瘡娆¤緭鍑篒nvalid\n

鐢ㄦ埛鏉冮檺涓婏紝鑰佹澘锛屽憳宸ワ紝椤惧锛屾湭鐧诲綍 7310

load [file] #7 鍔犺浇
exit #0 閫€鍑?
su [user] [passwd] #0 鐧诲綍
logout #1  鍙樹负鏈櫥褰?
useradd [user鈥恑d] [passwd] [7/3/1] [name] #3锛氬鍔犱竴涓寚瀹氭潈闄愮殑鐢ㄦ埛锛屼笉鑳藉垱寤轰笉灏忎簬鑷繁鏉冮檺鐨勮处鎴?
register [user鈥恑d] [passwd] [name] #0锛氭敞鍐屼竴涓甫鏈夎繖浜涗俊鎭殑鏉冮檺1鐢ㄦ埛
delete [user鈥恑d] #7锛氬垹闄ゆ煇鐢ㄦ埛
passwd [user鈥恑d] [old鈥恜asswd(if not root)] [new鈥恜asswd] #1锛歳oot涓嶉渶瑕佸～鍐欐棫瀵嗙爜锛屽叾浣欒处鎴烽渶瑕?

[user-id] 鍜縖passwd] 鍖呭惈杩炵画鏃犵┖鏍肩殑鏁板瓧瀛楁瘝涓嬪垝绾匡紝涓嶈秴杩?涓瓧绗?
[name] 涓笉鍚┖鏍硷紝涓嶈秴杩?涓眽瀛?0涓瓧鑺?

select [ISBN]
#3锛氶€夊畾ISBN涓烘寚瀹氬€肩殑鍥句功锛岃嫢涓嶅瓨鍦ㄥ垯鍒涘缓璇SBN鐨勪功骞跺皢鍏朵綑淇℃伅鐣欑┖绛夊緟modify杩涜濉啓
modify 鈥怚SBN=[ISBN] 鈥恘ame=[name] 鈥恆uthor=[author] 鈥恔eyword=[keyword] 鈥恜rice=[price]
#3锛氬弬鏁板彲鐪佺暐锛屼篃涓嶈姹傝緭鍏ラ『搴忥紝浼氭洿鏂帮紙鏇挎崲鑰岄潪娣诲姞锛変笂娆￠€変腑鐨勪功鑷虫柊鐨勪俊鎭?
import [quantity] [cost_price(in total)]
#3锛氬皢涓婃閫変腑鐨勪功浠ユ€诲叡[cost_price]鐨勪环鏍艰繘[quantity]鏈?
show 鈥怚SBN=[ISBN] 鈥恘ame=[name] 鈥恆uthor=[author] 鈥恔eyword=[keyword]
#1锛氬弬鏁板彲鐪佺暐锛屼篃涓嶈姹傝緭鍏ラ『搴忥紝灏嗗尮閰嶇殑鍥句功浠SBN鍙锋帓搴忚緭鍑猴紝闇€瑕佹敞鎰忚鍛戒护鍏抽敭瀛楅」鍙敮鎸佸崟鍏抽敭瀛?
show finance [time]
#7锛歵ime椤圭渷鐣ユ椂锛岃緭鍑烘€荤殑鏀跺叆涓庢敮鍑猴紱鍚﹀垯杈撳嚭杩慬time]娆¤繘璐с€佸崠鍑烘搷浣滐紙鍒嗗埆绠椾竴娆★級鐨勬敹鍏ユ敮鍑恒€?
buy [ISBN] [quantity] #1锛氳喘涔拌ISBN鍙风殑鍥句功[quantity]鏈?

[ISBN] 涓轰笉瓒呰繃20浣嶇殑杩炵画瀛楃涓?
[name] 鍜縖author] 琚弻寮曞彿鍖呰捣鏉ワ紙涓嶅惈鍙屽紩鍙凤級锛屼繚璇?
鏈韩鍐呭娌℃湁鍙屽紩鍙?
鍐呭涓嶈秴杩?涓眽瀛?
[keyword] 鏁翠綋琚弻寮曞彿鍖呰捣鏉ワ紙涓嶅惈鍙屽紩鍙凤級锛屽叧閿瓧涔嬮棿 | (绔栫嚎)闅斿紑锛屼繚璇?
姣忎釜鍏抽敭瀛楁湰韬唴瀹规棤寮曞彿浠ュ強绌烘牸
鍐呭鎬诲叡涓嶈秴杩?涓眽瀛?
[quantity] 涓烘暣鏁帮紙<100000锛?
瀵逛簬show鎿嶄綔锛岃緭鍑烘牸寮忎负锛氭瘡琛屼竴鏈紝鎵€鏈変俊鎭」鐩棿浠縗t 闅斿紑锛屼环鏍间繚鐣欎袱浣嶏紝搴撳瓨鍚庡姞鈥濇湰鈥滃瓧锛屽


report finance #7锛氫細鐢熸垚涓€寮犺祻蹇冩偊鐩殑璐㈠姟鎶ヨ〃锛屾牸寮忚嚜瀹?
report employee #7锛氫細鐢熸垚涓€寮犺祻蹇冩偊鐩殑鍛樺伐宸ヤ綔鎯呭喌琛紝璁板綍鍏舵搷浣滐紝鏍煎紡鑷畾
log #7锛氫細杩斿洖璧忓績鎮︾洰鐨勬棩蹇楄褰曪紝鍖呮嫭绯荤粺鎿嶄綔绫荤殑璋佸共浜嗕粈涔堬紝浠ュ強璐㈠姟涓婃瘡涓€绗斾氦鏄撴儏鍐碉紝鏍煎紡鑷畾
report myself #3锛氳繑鍥炲憳宸ヨ嚜宸辩殑鎿嶄綔璁板綍锛屾牸寮忚嚜瀹?
*/

using namespace std;

struct String{//涓€涓柊鐨勫畾闀縮tring 
	char s[35];
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
//璇诲叆鍙婂叾妫€鏌?
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
bool check_empty(string s,int b){//妫€鏌ヤ粠b浣嶇疆寮€濮縮鏄惁涓虹┖涓?
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
	char name[35];
	char old_passwd[35];
	string keyword[10];
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
					int shuangyin=0;
					string tmp("");f=0;
					for(;i<s.size();i++){
						if(s[i]==' '&&f&&(shuangyin%2==0))break;
						if(s[i]!=' ')f=1;
						else if(shuangyin%2==0)continue;
						tmp+=s[i];
						if(s[i]=='\"')shuangyin++;
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
					int shuangyin=0;
					string tmp("");f=0;
					for(;i<s.size();i++){
						if(s[i]==' '&&f&&(shuangyin%2==0))break;
						if(s[i]!=' ')f=1;
						else if(shuangyin%2==0)continue;
						tmp+=s[i];
						if(s[i]=='\"')shuangyin++;
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
			//鏆傛椂涓嶉渶瑕?
			else if(iden=="report"){
				return REPORT_FINANCE;
			}
			else if(iden=="log"){
				return LOG;
			}
			else return WRONG;
	}
};





bool check(string s){//鍒ゆ柇鏄惁闇€鍒濆鍖胯嫢绌猴紝鍒欒繑鍥?锛屽惁鍒?
	ifstream it(s.c_str(),ios::in|ios::binary);
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
	node_type a;//绫诲瀷
	int node_number;//list鐨刵ode鏁扮洰
	int next,prev;//鍓嶅悗鍧楅┍
	int location;//鎵€澶勬枃浠朵綅缃?
	int node_list_begin;//鎸囧悜鎵€灞為摼琛ㄥご
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
	node_type a;//褰撳墠鐐圭殑绫诲瀷
	String key;int value;//鏉冨€奸敭鍊?
	int next,prev;//鍓嶅悗椹辩殑浣嶇疆
	int location;//褰撳墠鎵€澶勬枃浠朵綅缃?
	int head;//鎵€瀵瑰簲鐨刡ignode 鐨勪綅缃?
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
node Q[1010];int Top;
class BlockLinkList{
	public:
	string F;//杈撳嚭鏂囦欢
	fstream file;
	template<class T> 
	T get(int location){//鐩存帴寰楀埌location浣嶇疆鐨勫彉
		file.open(F.c_str(),ios::binary|ios::in);
		file.seekg(location);
		T a;
		file.read(reinterpret_cast<char *> (&a),sizeof(a));
		file.close();
		return a;
	}
	String get_begin_node(Bignode& h){//寰楀埌h鐨勭涓€涓猭ey鍊?
		node begin=get<node>(h.node_list_begin);
		node first=get<node>(begin.next);
		return first.key;
	}
	template<class T>
	void updata(T& a){//鏇存柊鏂囦欢
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekp(a.location);
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	void foundinend(Bignode& a){
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekp(0,ios::end);
		a.location=file.tellp();
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	void foundinend(node& a){
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekp(0,ios::end);
		a.location=file.tellp();
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
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
			Q[++Top]=a;
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
			Q[++Top]=a;
			getnext(get<node>(a.next),key,flag);
		}
		return ;
	}
	void bianli(){
		Top=0;
		Bignode x=get<Bignode>(0);
		x=get<Bignode>(x.next);
		node a=get<node>(x.node_list_begin);
		getnext(a,a.key,1);
	}
	int get_node_number(Bignode& a){
		if(a.a!=normal)return 0;
		node x=get<node>(a.node_list_begin);
		x=get<node>(x.next);
		int sum=0;
		while(x.a!=End){
			sum++;
			x=get<node>(x.next);
		}
		return sum;
	}
	void updata_head(node a){
		node x=a;
		while(true){
			x.head=get<node>(x.prev).head;
			updata(x);
			if(x.a==End)break;
			x=get<node>(x.next);
		}
	}
	void split(Bignode& a){
		/*	node_type a;//褰撳墠鐐圭殑绫诲瀷
		String key;int value;//鏉冨€奸敭鍊?
		int next,prev;//鍓嶅悗椹辩殑浣嶇疆
		int location;//褰撳墠鎵€澶勬枃浠朵綅缃?
		int head;*/
		/*
		node_type a;//绫诲瀷
		int node_number;//list鐨刵ode鏁扮洰
		int next,prev;//鍓嶅悗鍧楅┍
		int location;//鎵€澶勬枃浠朵綅缃?
		int node_list_begin;//鎸囧悜鎵€灞為摼琛ㄥご
		*/
		
		if(a.a!=normal)return ;
		Bignode next_Bignode=get<Bignode>(a.next);
		Bignode new_Bignode;
		foundinend(new_Bignode);
		new_Bignode.a=normal;
		new_Bignode.prev=a.location;
		new_Bignode.next=next_Bignode.location;
		
		next_Bignode.prev=new_Bignode.location;
		a.next=new_Bignode.location;
		
		
		
		int number=a.node_number/2;
		int sum=0;
		node x=get<node>(a.node_list_begin);
		
		x=get<node>(x.next);
		for(int i=1;i<=number;i++)
			x=get<node>(x.next);
		node y=get<node>(x.next);
		
		node new_end_node,new_begin_node;
		foundinend(new_begin_node);
		foundinend(new_end_node);
		
		new_begin_node.a=Begin;
		new_end_node.a=End;
		
		new_begin_node.next=y.location;
		new_begin_node.head=new_Bignode.location;
		y.prev=new_begin_node.location;
		y.head=new_Bignode.location;
		updata_head(y);
		
		x.next=new_end_node.location;
		new_end_node.prev=x.location;
		
		new_Bignode.node_list_begin=new_begin_node.location;
		
		
		updata(a);updata(next_Bignode);updata(new_Bignode);
		updata(x);updata(y);updata(new_begin_node);updata(new_end_node);
		
		new_Bignode.node_number=get_node_number(new_Bignode);
		a.node_number=get_node_number(a);
		
		updata(a);updata(next_Bignode);
	}
	void updata(){
		Bignode x=get<Bignode>(0);
		x=get<Bignode>(x.next);
		while(x.a!=End){
			if(x.node_number>2*block)
				split(x);
			x=get<Bignode>(x.next);
		}
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
			Top=0;
			getprev(y,key);
			getnext(y,key);
			return y;
		}
		return y;
	}
	void initialization(string s){
		F=s;
		if(!check(s))return;
		file.open(F.c_str(),ios::binary|ios::out);
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
		updata();
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
//鍧楃姸閾捐〃




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
}unknown;//鏈櫥褰曠敤鎴?
class USER{//鐢ㄦ埛淇℃伅
	public:
	string F;
	fstream file;
	user_node now;//褰撳墠鐢ㄦ埛
	template<class T>
	void updata(T& a){//鏇存柊鏂囦欢
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekp(a.location);
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	template<class T>//鍦ㄦ枃浠跺熬鍒涘缓涓€涓柊绫诲瀷锛屽苟杩斿洖鍏朵綅缃?
	void foundinend(T& a){
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekp(0,ios::end);
		a.location=file.tellp();
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	user_node get(int location){
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekg(location);
		user_node a;
		file.read(reinterpret_cast<char *> (&a),sizeof(a));
		file.close();
		return a;
	}
	
	void init(int x){
		F="user.txt";
		if(check(F)){
			file.open(F.c_str(),ios::out|ios::binary);
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
	fstream file;
	int sum,linkk[2];
	int getsum(){
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekg(0,ios::end);
		int k=file.tellg();file.close();
		return k;
	}
	template<class T>
	T get(int location){//鐩存帴寰楀埌location浣嶇疆鐨勫彉閲跨浉瀵逛簬鏈€鍚庣殑浣嶇疆
		file.open(F.c_str(),ios::in|ios::binary);
		file.seekg(location);
		T a;
		file.read(reinterpret_cast<char *> (&a),sizeof(a));
		file.close();
		return a;
	}
	template<class T>
	void foundinend(T& a){
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
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
			file.open(F.c_str(),ios::out|ios::binary);
			file.write(reinterpret_cast<const char *> (&sum),sizeof(sum));
			file.write(reinterpret_cast<const char *> (&linkk[0]),sizeof(linkk[0]));
			file.write(reinterpret_cast<const char *> (&linkk[0]),sizeof(linkk[1]));
			file.close();
		}
		else {
			file.open(F.c_str(),ios::in|ios::binary);
			file.read(reinterpret_cast<char *> (&sum),sizeof(sum));
			file.read(reinterpret_cast<char *> (&linkk[0]),sizeof(linkk[0]));
			file.read(reinterpret_cast<char *> (&linkk[1]),sizeof(linkk[1]));
			file.close();
		}
	}
	void updata(int& value,int location){
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
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
		find(int key){//鎵惧埌鏈€杩慿ey娆＄殑杩涜揣鎴栬€呭崠鍑烘搷浣?
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


class book{//涔﹀簱鍩烘湰鍗曚綅
	public:
	String ISBN,author,name,keyword[10];
	int location;//璁板綍鍏跺湪鏂囦欢涓殑浣嶇疆
	double price;
	int quantity;
	bool ISBN_flag,author_flag,name_flag,keyword_flag,price_flag;
	book(){
		ISBN=author=name=(String)(string)("");
		for(int i=0;i<9;i++)keyword[i]=(String)(string)("");
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
		printf("%d本\n",quantity);
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
}unknownn;
bool cmp2(book& a,book& b){return cmp(a.ISBN,b.ISBN)==-1;}
BlockLinkList author_index,ISBN_index,name_index,keyword_index;

class BOOK{
	public:
	string F;
	fstream file;
	book now;bool select_flag;
	template<class T>
	void updata(T& a){//鏇存柊鏂囦欢
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekp(a.location);
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	template<class T>//鍦ㄦ枃浠跺熬鍒涘缓涓€涓柊绫诲瀷锛屽苟杩斿洖鍏朵綅
	void foundinend(T& a){
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekp(0,ios::end);
		a.location=file.tellp();
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	book get(int location){
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekg(location);
		book a;
		file.read(reinterpret_cast<char *> (&a),sizeof(a));
		file.close();
		return a;
	}
	void init(int flag){
		F="book.txt";
		if(check(F)){
			file.open(F.c_str(),ios::out|ios::binary);
			file.close();
		}
		author_index.initialization((string)("author_index.txt"));
		ISBN_index.initialization((string)("ISBN_index.txt"));
		name_index.initialization((string)("name_index.txt"));
		keyword_index.initialization((string)("keyword_index.txt"));
		now=unknownn;
		select_flag=0;
	}
	void erase(book& a,int flag){//鍒犻櫎涓€鏈功鐨勭储寮?
	
		if(flag==0){
			if(isempty(a.ISBN))return ;
			node y=ISBN_index.find(a.ISBN);
			if(cmp(y.key,a.ISBN))throw 1;
			ISBN_index.erase_a_node(y);
			a.ISBN=(String)(string)("");
			return ;
		}
		
		
		if(flag==1){//鍒犻櫎author
			if(isempty(a.author))return ;
			node y=author_index.find(a.author);
			a.author=(String)(string)("");
			for(int i=1;i<=Top;i++){
				book k=get(Q[i].location);
				if(cmp(k.ISBN,a.ISBN)==0){
					author_index.erase_a_node(Q[i]);
					return ;
				}
			}
			return ;
		}
		if(flag==2){//name
			if(isempty(a.name))return ;
			node y=name_index.find(a.name);
			a.name=(String)(string)("");
			for(int i=1;i<=Top;i++){
				book k=get(Q[i].location);
				if(cmp(k.ISBN,a.ISBN)==0){
					name_index.erase_a_node(Q[i]);
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
				for(int i=1;i<=Top;i++){
					book k=get(Q[i].location);
					if(cmp(k.ISBN,a.ISBN)==0){
						keyword_index.erase_a_node(Q[i]);
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
			for(int i=1;i<=Top;i++){
				a=get(Q[i].value);
				a.display();
			}
		}
		else {
			
			if(a.ISBN_flag){
				node b=ISBN_index.find(a.ISBN);
				if(cmp(a.ISBN,b.key)){delete q;return;}
				book c=get(b.value);
				if(!checkbook(a,c))
					c.display();
				delete q;
				return ;
			}
			
			int top=0;book* q=new book[110];
			if(a.author_flag){
				
				author_index.find(a.author);
				for(int i=1;i<=Top;i++){
					node b=Q[i];
					book c=get(b.value);
					if(!checkbook(c,a))q[++top]=c;
				}
				sort(q+1,q+top+1,cmp2);
				for(int i=1;i<=top;i++){
					if(q[i]!=q[i-1])
						q[i].display();
				}
				delete q;
				return ;
			}
			if(a.name_flag){
				top=0;
				name_index.find(a.name);
				for(int i=1;i<=Top;i++){
					node b=Q[i];
					book c=get(b.value);
					if(!checkbook(c,a))q[++top]=c;
				}
				sort(q+1,q+top+1,cmp2);
				for(int i=1;i<=top;i++){
					if(q[i]!=q[i-1])
						q[i].display();
				}
				delete q;
				return ;
			}
			top=0;
			keyword_index.find(a.keyword[1]);
			//printf("%s\n",a.keyword[1].s+1);
			for(int i=1;i<=Top;i++){
				node b=Q[i];
				book c=get(b.value);
				if(!checkbook(c,a))q[++top]=c;
			}
			sort(q+1,q+top+1,cmp2);
			for(int i=1;i<=top;i++){
				if(q[i]!=q[i-1]) 
					q[i].display();
			}delete q;
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
		//ISBN_index.display();
		if(flag)getline(check_load,s);
		else getline(cin,s);
		//cout<<s<<endl;
		//if(sum==70){
		//	sum=1;
		//}
		if(s.size()==0){continue;}
		INPUT a;
		TYPE aaa=a.input(s);
		//cout<<s<<endl;
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
				//cout<<endl;
				printf("Invalid\n");
				//cout<<s<<endl;
				//sum++;
				break;
			}
		}
		catch(...){
			//cout<<endl;
			printf("Invalid\n");
			//cout<<s<<endl;
			//sum++;
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
