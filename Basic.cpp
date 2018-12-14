#include<bits/stdc++.h>

using namespace std;
/*
author: chad 閺屽啿绻旀潪?
student id: 518030910426 
class type: class A
class id: F1803017
*/

/*
閺佺繝缍嬬拋鎹愵吀閹繆鐭鹃敍?
妫ｆ牕鍘涢敍灞艰⒈缁夊秵膩瀵繐顩ф担鏇烆槱閻炲棴绱?
	閸忓牐绻樼悰瀹璷ad閿涘矁瀚㈢€涙ê婀猚ommand.txt,閻╁瓨甯寸拠璇插絿閸涙垝鎶ら妴?
	閼汇儰绗夌€涙ê婀敍宀冾啎缂冾喚鈻兼惔蹇撴喅閻ｅ矂娼伴崪灞炬珮闁氨鏅棃顫礄閻劍鍩涢崣瀣偨閿涘鈧?
缁楊兛绔村▎鈥虫儙閸旑煉绱濋崚娑樼紦 user 閺傚洣娆㈤敍灞藉灡瀵よ桨鍔熼惄顔款吂閸楁洘妫╄箛妤冾吀閻炲棛鐡戦弬鍥︽閿涘苯鍨垫慨瀣蒋閺佹媽绁存稉?
	user 閺傛澘鍨卞绺璷ot 閻劍鍩涢崣瀣偨閿涘鈧?
鐎甸€涚艾閸氬牊纭堕幀褌绗傞敍灞剧槨濞喡ょ翻閸戠瘨nvalid\n

閻劍鍩涢弶鍐娑撳绱濋懓浣规緲閿涘苯鎲冲銉礉妞ゆ儳顓归敍灞炬弓閻ц缍?7310

load [file] #7 閸旂姾娴?
exit #0 闁偓閸?
su [user] [passwd] #0 閻ц缍?
logout #1  閸欐ü璐熼張顏嗘瑜?
useradd [user閳ユ亼d] [passwd] [7/3/1] [name] #3閿涙艾顤冮崝鐘辩娑擃亝瀵氱€规碍娼堥梽鎰畱閻劍鍩涢敍灞肩瑝閼宠棄鍨卞杞扮瑝鐏忓繋绨懛顏勭箒閺夊啴妾洪惃鍕閹?
register [user閳ユ亼d] [passwd] [name] #0閿涙碍鏁為崘灞肩娑擃亜鐢張澶庣箹娴滄稐淇婇幁顖滄畱閺夊啴妾?閻劍鍩?
delete [user閳ユ亼d] #7閿涙艾鍨归梽銈嗙厙閻劍鍩?
passwd [user閳ユ亼d] [old閳ユ仠asswd(if not root)] [new閳ユ仠asswd] #1閿涙oot娑撳秹娓剁憰浣革綖閸愭瑦妫€靛棛鐖滈敍灞藉従娴ｆ瑨澶勯幋鐑芥付鐟?

[user-id] 閸滅笘passwd] 閸栧懎鎯堟潻鐐电敾閺冪姷鈹栭弽鑲╂畱閺佹澘鐡х€涙鐦濇稉瀣灊缁惧尅绱濇稉宥堢Т鏉?娑擃亜鐡х粭?
[name] 娑擃厺绗夐崥顐も敄閺嶇》绱濇稉宥堢Т鏉?娑擃亝鐪界€?0娑擃亜鐡ч懞?

select [ISBN]
#3閿涙岸鈧鐣綢SBN娑撶儤瀵氱€规艾鈧偐娈戦崶鍙ュ姛閿涘矁瀚㈡稉宥呯摠閸︺劌鍨崚娑樼紦鐠囶檹SBN閻ㄥ嫪鍔熼獮璺虹殺閸忔湹缍戞穱鈩冧紖閻ｆ瑧鈹栫粵澶婄窡modify鏉╂稖顢戞繅顐㈠晸
modify 閳ユ€歋BN=[ISBN] 閳ユ仒ame=[name] 閳ユ亞uthor=[author] 閳ユ仈eyword=[keyword] 閳ユ仠rice=[price]
#3閿涙艾寮弫鏉垮讲閻胶鏆愰敍灞肩瘍娑撳秷顩﹀Ч鍌濈翻閸忋儵銆庢惔蹇ョ礉娴兼碍娲块弬甯礄閺囨寧宕查懓宀勬姜濞ｈ濮為敍澶夌瑐濞嗭繝鈧鑵戦惃鍕姛閼疯櫕鏌婇惃鍕繆閹?
import [quantity] [cost_price(in total)]
#3閿涙艾鐨㈡稉濠冾偧闁鑵戦惃鍕姛娴犮儲鈧鍙cost_price]閻ㄥ嫪鐜弽鑹扮箻[quantity]閺?
show 閳ユ€歋BN=[ISBN] 閳ユ仒ame=[name] 閳ユ亞uthor=[author] 閳ユ仈eyword=[keyword]
#1閿涙艾寮弫鏉垮讲閻胶鏆愰敍灞肩瘍娑撳秷顩﹀Ч鍌濈翻閸忋儵銆庢惔蹇ョ礉鐏忓棗灏柊宥囨畱閸ュ彞鍔熸禒顧廠BN閸欓攱甯撴惔蹇氱翻閸戠尨绱濋棁鈧憰浣规暈閹板繗顕氶崨鎴掓姢閸忔娊鏁€涙銆嶉崣顏呮暜閹镐礁宕熼崗鎶芥暛鐎?
show finance [time]
#7閿涙ime妞ゅ湱娓烽悾銉︽閿涘矁绶崙鐑樷偓鑽ゆ畱閺€璺哄弳娑撳孩鏁崙鐚寸幢閸氾箑鍨潏鎾冲毉鏉╂叕time]濞喡ょ箻鐠愌佲偓浣稿礌閸戠儤鎼锋担婊愮礄閸掑棗鍩嗙粻妞剧濞嗏槄绱氶惃鍕暪閸忋儲鏁崙鎭掆偓?
buy [ISBN] [quantity] #1閿涙俺鍠樻稊鎷岊嚉ISBN閸欓娈戦崶鍙ュ姛[quantity]閺?

[ISBN] 娑撹桨绗夌搾鍛扮箖20娴ｅ秶娈戞潻鐐电敾鐎涙顑佹稉?
[name] 閸滅笘author] 鐞氼偄寮诲鏇炲娇閸栧懓鎹ｉ弶銉礄娑撳秴鎯堥崣灞界穿閸欏嚖绱氶敍灞肩箽鐠?
閺堫剝闊╅崘鍛啇濞屸剝婀侀崣灞界穿閸?
閸愬懎顔愭稉宥堢Т鏉?娑擃亝鐪界€?
[keyword] 閺佺繝缍嬬悮顐㈠蓟瀵洖褰块崠鍛版崳閺夈儻绱欐稉宥呮儓閸欏苯绱╅崣鍑ょ礆閿涘苯鍙ч柨顔肩摟娑斿妫?| (缁旀牜鍤?闂呮柨绱戦敍灞肩箽鐠?
濮ｅ繋閲滈崗鎶芥暛鐎涙婀伴煬顐㈠敶鐎硅妫ゅ鏇炲娇娴犮儱寮风粚鐑樼壐
閸愬懎顔愰幀璇插彙娑撳秷绉存潻?娑擃亝鐪界€?
[quantity] 娑撶儤鏆ｉ弫甯礄<100000閿?
鐎甸€涚艾show閹垮秳缍旈敍宀冪翻閸戠儤鐗稿蹇庤礋閿涙碍鐦＄悰灞肩閺堫剨绱濋幍鈧張澶変繆閹垶銆嶉惄顕€妫挎禒绺梩 闂呮柨绱戦敍灞肩幆閺嶉棿绻氶悾娆庤⒈娴ｅ稄绱濇惔鎾崇摠閸氬骸濮為垾婵囨拱閳ユ粌鐡ч敍灞筋洤


report finance #7閿涙矮绱伴悽鐔稿灇娑撯偓瀵姾绁昏箛鍐╁亰閻╊喚娈戠拹銏犲閹躲儴銆冮敍灞剧壐瀵繗鍤滅€?
report employee #7閿涙矮绱伴悽鐔稿灇娑撯偓瀵姾绁昏箛鍐╁亰閻╊喚娈戦崨妯轰紣瀹搞儰缍旈幆鍛枌鐞涱煉绱濈拋鏉跨秿閸忚埖鎼锋担婊愮礉閺嶇厧绱￠懛顏勭暰
log #7閿涙矮绱版潻鏂挎礀鐠у繐绺鹃幃锔炬窗閻ㄥ嫭妫╄箛妤勵唶瑜版洩绱濋崠鍛缁崵绮洪幙宥勭稊缁崵娈戠拫浣稿叡娴滃棔绮堟稊鍫礉娴犮儱寮风拹銏犲娑撳﹥鐦℃稉鈧粭鏂炬唉閺勬挻鍎忛崘纰夌礉閺嶇厧绱￠懛顏勭暰
report myself #3閿涙俺绻戦崶鐐叉喅瀹搞儴鍤滃杈╂畱閹垮秳缍旂拋鏉跨秿閿涘本鐗稿蹇氬殰鐎?
*/

using namespace std;

struct String{//娑撯偓娑擃亝鏌婇惃鍕暰闂€绺畉ring 
	char s[32];
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
//鐠囪鍙嗛崣濠傚従濡偓閺?
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
bool check_empty(string s,int b){//濡偓閺屻儰绮燽娴ｅ秶鐤嗗鈧慨绺弰顖氭儊娑撹櫣鈹栨稉?
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
	char user_id[20];
	char passwd[20];
	char name[35];
	char old_passwd[20];
	string keyword[5];
	char ISBN[20];
	char author[22];
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
			//閺嗗倹妞傛稉宥夋付鐟?
			else if(iden=="report"){
				return REPORT_FINANCE;
			}
			else if(iden=="log"){
				return LOG;
			}
			else return WRONG;
	}
};





bool check(string s){//閸掋倖鏌囬弰顖氭儊闂団偓閸掓繂顫愰崠鑳缁岀尨绱濋崚娆掔箲閸?閿涘苯鎯侀崚?
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
	node_type a;//缁鐎?
	int node_number;//list閻ㄥ埖ode閺佹壆娲?
	int next,prev;//閸撳秴鎮楅崸妤呪攳
	int location;//閹碘偓婢跺嫭鏋冩禒鏈电秴缂?
	int node_list_begin;//閹稿洤鎮滈幍鈧仦鐐烘懠鐞涖劌銇?
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
	node_type a;//瑜版挸澧犻悙鍦畱缁鐎?
	String key;int value;//閺夊啫鈧ジ鏁崐?
	int next,prev;//閸撳秴鎮楁す杈╂畱娴ｅ秶鐤?
	int location;//瑜版挸澧犻幍鈧径鍕瀮娴犳湹缍呯純?
	int head;//閹碘偓鐎电懓绨查惃鍒gnode 閻ㄥ嫪缍呯純?
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
node Q[101];int Top;
class BlockLinkList{
	public:
	string F;//鏉堟挸鍤弬鍥︽
	fstream file;
	template<class T> 
	T get(int location){//閻╁瓨甯村妤€鍩宭ocation娴ｅ秶鐤嗛惃鍕綁
		file.open(F.c_str(),ios::binary|ios::in);
		file.seekg(location);
		T a;
		file.read(reinterpret_cast<char *> (&a),sizeof(a));
		file.close();
		return a;
	}
	String get_begin_node(Bignode& h){//瀵版鍩宧閻ㄥ嫮顑囨稉鈧稉鐚璭y閸?
		node begin=get<node>(h.node_list_begin);
		node first=get<node>(begin.next);
		return first.key;
	}
	template<class T>
	void updata(T& a){//閺囧瓨鏌婇弬鍥︽
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
		/*	node_type a;//瑜版挸澧犻悙鍦畱缁鐎?
		String key;int value;//閺夊啫鈧ジ鏁崐?
		int next,prev;//閸撳秴鎮楁す杈╂畱娴ｅ秶鐤?
		int location;//瑜版挸澧犻幍鈧径鍕瀮娴犳湹缍呯純?
		int head;*/
		/*
		node_type a;//缁鐎?
		int node_number;//list閻ㄥ埖ode閺佹壆娲?
		int next,prev;//閸撳秴鎮楅崸妤呪攳
		int location;//閹碘偓婢跺嫭鏋冩禒鏈电秴缂?
		int node_list_begin;//閹稿洤鎮滈幍鈧仦鐐烘懠鐞涖劌銇?
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
//閸ф濮搁柧鎹愩€?




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
}unknown;//閺堫亞娅ヨぐ鏇犳暏閹?
class USER{//閻劍鍩涙穱鈩冧紖
	public:
	string F;
	fstream file;
	user_node now;//瑜版挸澧犻悽銊﹀煕
	template<class T>
	void updata(T& a){//閺囧瓨鏌婇弬鍥︽
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekp(a.location);
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	template<class T>//閸︺劍鏋冩禒璺虹啲閸掓稑缂撴稉鈧稉顏呮煀缁鐎烽敍灞借嫙鏉╂柨娲栭崗鏈电秴缂?
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
	T get(int location){//閻╁瓨甯村妤€鍩宭ocation娴ｅ秶鐤嗛惃鍕綁闁茶法娴夌€甸€涚艾閺堚偓閸氬海娈戞担宥囩枂
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
		find(int key){//閹垫儳鍩岄張鈧潻鎱縠y濞嗭紕娈戞潻娑滄彛閹存牞鈧懎宕犻崙鐑樻惙娴?
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


class book{//娑旓箑绨遍崺鐑樻拱閸楁洑缍?
	public:
	String ISBN,author,name,keyword[10];
	int location;//鐠佹澘缍嶉崗璺烘躬閺傚洣娆㈡稉顓犳畱娴ｅ秶鐤?
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
}unknownn,q[300];int top=0;
bool cmp2(book& a,book& b){return cmp(a.ISBN,b.ISBN)==-1;}
BlockLinkList author_index,ISBN_index,name_index,keyword_index;

class BOOK{
	public:
	string F;
	fstream file;
	book now;bool select_flag;
	template<class T>
	void updata(T& a){//閺囧瓨鏌婇弬鍥︽
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekp(a.location);
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	template<class T>//閸︺劍鏋冩禒璺虹啲閸掓稑缂撴稉鈧稉顏呮煀缁鐎烽敍灞借嫙鏉╂柨娲栭崗鏈电秴
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
	void erase(book& a,int flag){//閸掔娀娅庢稉鈧張顑垮姛閻ㄥ嫮鍌ㄥ?
	
		if(flag==0){
			if(isempty(a.ISBN))return ;
			node y=ISBN_index.find(a.ISBN);
			if(cmp(y.key,a.ISBN))throw 1;
			ISBN_index.erase_a_node(y);
			a.ISBN=(String)(string)("");
			return ;
		}
		
		
		if(flag==1){//閸掔娀娅巃uthor
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
				if(cmp(a.ISBN,b.key)){return;}
				book c=get(b.value);
				if(!checkbook(a,c))
					c.display();
				return ;
			}
			if(a.author_flag){
				top=0;
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
				return ;
			}
			top=0;
			keyword_index.find(a.keyword[1]);
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
		if(flag)getline(check_load,s);
		else getline(cin,s);
		if(s.size()==0){continue;}
		INPUT a;
		TYPE aaa=a.input(s);
		String User_id,Passwd,Name,Old_passwd;int pri;
		String ISBN,author,keyword,price;
		book c=unknownn;double cost=0;int quantity=0;int time=0;
		try{
		switch (aaa){
			case (EXIT):
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
				if(USER_it.now.pri==0)throw 1;
				ISBN=a.ISBN;
				quantity=a.quantity;
				BOOK_it.buy(ISBN,quantity);
				break;
			case (WRONG):
				printf("Invalid\n");
				break;
			}
		}
		catch(...){
			printf("Invalid\n");
		}
	}
	check_load.close();
}
int main(){
	init();
	return 0;
}
