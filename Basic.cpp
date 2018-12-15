#include<bits/stdc++.h>

using namespace std;
/*
author: chad 闁哄苯鍟跨换鏃€娼?
student id: 518030910426 
class type: class A
class id: F1803017
*/

/*
闁轰胶绻濈紞瀣媼閹规劦鍚€闁诡剚绻嗛惌楣冩晬?
濡絾鐗曢崢娑㈡晬鐏炶壈鈷堢紒澶婄У鑶╃€殿喖绻愰々褎鎷呴弴鐑嗘П闁荤偛妫寸槐?
	闁稿繐鐗愮换妯兼偘鐎圭挿ad闁挎稑鐭佺€氥垻鈧稒锚濠€鐚歰mmand.txt,闁烩晛鐡ㄧ敮瀵告嫚鐠囨彃绲块柛娑欏灊閹躲倝濡?
	闁兼眹鍎扮粭澶屸偓娑櫭﹢顏堟晬瀹€鍐惧晭缂傚喚鍠氶埢鍏兼償韫囨挻鍠呴柣锝呯焸濞间即宕仦鐐彯闂侇偅姘ㄩ弲顐︽椤喚绀勯柣顫妽閸╂盯宕ｇ€ｎ亗鍋ㄩ柨娑橆槶閳?
缂佹鍏涚粩鏉戔枎閳ヨ櫕鍎欓柛鏃戠厜缁辨繈宕氬☉妯肩处 user 闁哄倸娲ｅ▎銏ゆ晬鐏炶棄鐏＄€点倛妗ㄩ崝鐔兼儎椤旀鍚傞柛妤佹礃濡晞绠涘Δ鍐惧悁闁荤偛妫涢悺鎴﹀棘閸ワ附顐介柨娑樿嫰閸ㄥ灚鎱ㄧ€ｎ偅钂嬮柡浣瑰缁佸瓨绋?
	user 闁哄倹婢橀崹鍗烆嚈缁虹挿ot 闁活潿鍔嶉崺娑㈠矗鐎ｎ亗鍋ㄩ柨娑橆槶閳?
閻庣敻鈧稓鑹鹃柛姘墛绾爼骞€瑜岀粭鍌炴晬鐏炲墽妲ㄦ繛鍠°倗缈婚柛鎴犵槰nvalid\n

闁活潿鍔嶉崺娑㈠级閸愵喗顎欏☉鎾愁煭缁辨繈鎳撴担瑙勭凡闁挎稑鑻幉鍐差啅閵夘垳绀夊銈嗗劤椤撳綊鏁嶇仦鐐紦闁谎嗩嚙缂?7310

load [file] #7 闁告梻濮惧ù?
exit #0 闂侇偀鍋撻柛?
su [user] [passwd] #0 闁谎嗩嚙缂?
logout #1  闁告瑦眉鐠愮喖寮甸鍡橆仮鐟?
useradd [user闁炽儲浜糳] [passwd] [7/3/1] [name] #3闁挎稒鑹鹃·鍐礉閻樿京顏卞☉鎿冧簼鐎垫氨鈧纰嶅鍫ユ⒔閹邦喗鐣遍柣顫妽閸╂盯鏁嶇仦鑲╃憹闁煎疇妫勯崹鍗烆嚈鏉炴壆鐟濋悘蹇撶箣缁剟鎳涢鍕畳闁哄鍟村娲儍閸曨喖顦╅柟?
register [user闁炽儲浜糳] [passwd] [name] #0闁挎稒纰嶉弫鐐哄礃鐏炶偐顏卞☉鎿冧簻閻㈩偊寮垫径搴ｇ濞存粍绋愭穱濠囧箒椤栨粍鐣遍柡澶婂暣濡?闁活潿鍔嶉崺?
delete [user闁炽儲浜糳] #7闁挎稒鑹鹃崹褰掓⒔閵堝棛鍘欓柣顫妽閸?
passwd [user闁炽儲浜糳] [old闁炽儲浠燼sswd(if not root)] [new闁炽儲浠燼sswd] #1闁挎稒顒琽ot濞戞挸绉瑰〒鍓佹啺娴ｉ潻缍栭柛鎰懄濡偆鈧潧妫涢悥婊堟晬鐏炶棄寰撳ù锝嗙懆婢跺嫰骞嬮悜鑺ヤ粯閻?

[user-id] 闁告粎绗榩asswd] 闁告牕鎳庨幆鍫熸交閻愮數鏁鹃柡鍐Х閳规牠寮介懖鈺傜暠闁轰焦婢橀悺褏鈧稒顨嗛惁婵囩▔鐎ｎ亜鐏婄紒鎯у皡缁辨繃绋夊鍫⑿㈤弶?濞戞搩浜滈悺褏绮?
[name] 濞戞搩鍘虹粭澶愬触椤愩倐鏁勯柡宥囥€嬬槐婵囩▔瀹ュ牏孝閺?濞戞搩浜濋惇鐣屸偓?0濞戞搩浜滈悺褔鎳?

select [ISBN]
#3闁挎稒宀搁埀顒€顦悾缍BN濞戞挾鍎ょ€垫氨鈧鑹鹃埀顒冨亹濞堟垿宕堕崣銉ュ闁挎稑鐭佺€氥垺绋夊鍛憼闁革负鍔岄崹顖炲礆濞戞绱﹂悹鍥舵SBN闁汇劌瀚崝鐔肩嵁鐠鸿櫣娈洪柛蹇旀构缂嶆垶绌遍埄鍐х礀闁伙絾鐟ч埞鏍驳婢跺﹦绐odify閺夆晜绋栭、鎴炵箙椤愩垹鏅?
modify 闁炽儲鈧瓔BN=[ISBN] 闁炽儲浠抋me=[name] 闁炽儲浜瀠thor=[author] 闁炽儲浠坋yword=[keyword] 闁炽儲浠爎ice=[price]
#3闁挎稒鑹惧顒勫极閺夊灝璁查柣顏冭兌閺嗘劙鏁嶇仦鑲╃槏濞戞挸绉烽々锕€效閸屾繄缈婚柛蹇嬪劦閵嗗孩鎯旇箛銉х濞村吋纰嶅ú鍧楀棘鐢喚绀勯柡鍥ㄥ瀹曟煡鎳撳畝鍕婵烇綀顕ф慨鐐烘晬婢跺鐟愭繛鍡節閳ь剙顦懙鎴︽儍閸曨亜濮涢柤鐤珪閺屽﹪鎯冮崟顏冪箚闁?
import [quantity] [cost_price(in total)]
#3闁挎稒鑹鹃惃銏＄▔婵犲喚鍋ч梺顐㈩槷閼垫垿鎯冮崟顏勫濞寸姰鍎查埀顒冾嚙閸欘摗cost_price]闁汇劌瀚悳顖炲冀閼规壆绠籟quantity]闁?
show 闁炽儲鈧瓔BN=[ISBN] 闁炽儲浠抋me=[name] 闁炽儲浜瀠thor=[author] 闁炽儲浠坋yword=[keyword]
#1闁挎稒鑹惧顒勫极閺夊灝璁查柣顏冭兌閺嗘劙鏁嶇仦鑲╃槏濞戞挸绉烽々锕€效閸屾繄缈婚柛蹇嬪劦閵嗗孩鎯旇箛銉х閻忓繐妫楃亸顕€鏌婂鍥ㄧ暠闁搞儱褰為崝鐔哥椤у粻BN闁告瑩鏀辩敮鎾存償韫囨氨缈婚柛鎴犲皑缁辨繈妫侀埀顒傛啺娴ｈ鏆堥柟鏉跨箺椤曟岸宕ㄩ幋鎺撳Б闁稿繑濞婇弫顓犫偓娑欘殜閵嗗秹宕ｉ鍛殰闁归晲绀佸畷鐔煎礂閹惰姤鏆涢悗?
show finance [time]
#7闁挎稒顒甶me濡炪倕婀卞〒鐑芥偩閵夛附顦ч柨娑樼焷缁额參宕欓悜妯峰亾閼姐倖鐣遍柡鈧捄鍝勫汲濞戞挸瀛╅弫顕€宕欓悮瀵稿耿闁告熬绠戦崹顖涙綇閹惧啿姣夐弶鈺傚彆time]婵炲枴銈囩閻犳剬浣插亾娴ｇ绀岄柛鎴犲劋閹奸攱鎷呭鎰闁告帒妫楅崺鍡欑不濡炲墽顏辨繛鍡忔缁辨岸鎯冮崟顒佹毆闁稿繈鍎查弫顕€宕欓幁鎺嗗亾?
buy [ISBN] [quantity] #1闁挎稒淇洪崰妯荤▕閹峰矈鍤塈SBN闁告瑩顥撳▓鎴﹀炊閸欍儱濮沎quantity]闁?

[ISBN] 濞戞捁妗ㄧ粭澶屾惥閸涙壆绠?0濞达絽绉跺▓鎴炴交閻愮數鏁鹃悗娑欘殘椤戜焦绋?
[name] 闁告粎绗榓uthor] 閻炴凹鍋勫璇差嚕閺囩偛濞囬柛鏍ф嚀閹癸綁寮堕妷顖滅濞戞挸绉撮幆鍫ュ矗鐏炵晫绌块柛娆忓殩缁辨岸鏁嶇仦鑲╃閻?
闁哄牜鍓濋棅鈺呭礃閸涱収鍟囨繛灞稿墲濠€渚€宕ｇ仦鐣岀┛闁?
闁告劕鎳庨鎰▔瀹ュ牏孝閺?濞戞搩浜濋惇鐣屸偓?
[keyword] 闁轰胶绻濈紞瀣偖椤愩垹钃熺€殿喗娲栬ぐ鍧楀礌閸涚増宕抽柡澶堝劵缁辨瑦绋夊鍛創闁告瑥鑻槐鈺呭矗閸戙倗绀嗛柨娑樿嫰閸櫻囨煥椤旇偐鎽熷☉鏂款儔濡?| (缂佹梹鐗滈崵?闂傚懏鏌ㄧ槐鎴︽晬鐏炶偐绠介悹?
婵絽绻嬮柌婊堝礂閹惰姤鏆涢悗娑欘殕濠€浼寸叕椤愩垹鏁堕悗纭咁潐濡倕顕ｉ弴鐐插▏濞寸姰鍎卞椋庣矚閻戞澹?
闁告劕鎳庨鎰板箑鐠囨彃褰欏☉鎾崇Х缁夊瓨娼?濞戞搩浜濋惇鐣屸偓?
[quantity] 濞戞挾鍎ら弳锝夊极鐢喚绀?100000闁?
閻庣敻鈧稓鑹緎how闁瑰灝绉崇紞鏃堟晬瀹€鍐炕闁告垹鍎ら悧绋款嚕韫囧氦绀嬮柨娑欑閻︼紕鎮扮仦鑲╊伇闁哄牜鍓ㄧ槐婵嬪箥閳ь剟寮垫径澶夌箚闁诡収鍨堕妴宥夋儎椤曗偓濡寧绂掔缓姊?闂傚懏鏌ㄧ槐鎴︽晬鐏炶偐骞嗛柡宥夋？缁绘岸鎮惧▎搴も拡濞达絽绋勭槐婵囨償閹惧磭鎽犻柛姘婵偤鍨惧┑鍥ㄦ嫳闁炽儲绮岄悺褔鏁嶇仦绛嬫搐


report finance #7闁挎稒鐭槐浼存偨閻旂鐏囧☉鎾亾鐎殿喚濮剧粊鏄忕疀閸愨晛浜伴柣鈺婂枤濞堟垹鎷归姀鐘差潳闁硅翰鍎撮妴鍐晬鐏炲墽澹愮€殿喖绻楅崵婊呪偓?
report employee #7闁挎稒鐭槐浼存偨閻旂鐏囧☉鎾亾鐎殿喚濮剧粊鏄忕疀閸愨晛浜伴柣鈺婂枤濞堟垿宕ㄥΟ杞扮矗鐎规悶鍎扮紞鏃堝箚閸涱厼鏋岄悶娑辩厜缁辨繄鎷嬮弶璺ㄧЭ闁稿繗鍩栭幖閿嬫媴濠婃劗绀夐柡宥囧帶缁憋繝鎳涢鍕毎
log #7闁挎稒鐭槐鐗堟交閺傛寧绀€閻犙冪箰缁洪箖骞冮敂鐐獥闁汇劌瀚Λ鈺勭疀濡ゅ嫷鍞剁憸鐗堟穿缁辨繈宕犻崨顔碱仾缂侇垵宕电划娲箼瀹ュ嫮绋婄紒顐ュ吹濞堟垹鎷担绋垮彙濞存粌妫旂划鍫熺▕閸剛绀夊ù鐘劚瀵鎷归姀鐘差潳濞戞挸锕ラ惁鈩冪▔閳ь剛绮弬鐐攭闁哄嫭鎸婚崕蹇涘礃绾板绀夐柡宥囧帶缁憋繝鎳涢鍕毎
report myself #3闁挎稒淇虹换鎴﹀炊閻愬弶鍠呯€规悶鍎撮崵婊冾啅鏉堚晜鐣遍柟鍨С缂嶆梻鎷嬮弶璺ㄧЭ闁挎稑鏈悧绋款嚕韫囨艾娈伴悗?
*/

using namespace std;

struct String{//濞戞挴鍋撳☉鎿冧簼閺屽﹪鎯冮崟顐ゆ毎闂傗偓缁虹晧ring 
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
//閻犲洩顕ч崣鍡涘矗婵犲倸寰撴俊顐熷亾闁?
//initialization
const int block=100;
enum node_type{Begin=1,End,normal};
enum TYPE{
	EXIT=1,SU,logout,USERADD,REGISTER,DELETE,PASSWD,SELECT,MODIFY,IMPORT,SHOW,SHOW_FINANCE,BUY,
	REPORT_FINANCE,REPORT_IMPLOYEE,REPORT_MYSELY,LOG,WRONG
};
bool check_empty(string s,int b){//婵☆偀鍋撻柡灞诲劙缁嚱濞达絽绉堕悿鍡楊嚕閳ь剚鎱ㄧ缓顕€寮伴姘剨濞戞捁娅ｉ埞鏍ㄧ▔?
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
	char name[32];
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
			//闁哄棗鍊瑰鍌涚▔瀹ュ浠橀悷?
			else if(iden=="report"){
				return REPORT_FINANCE;
			}
			else if(iden=="log"){
				return LOG;
			}
			else return WRONG;
	}
};





bool check(string s){//闁告帇鍊栭弻鍥及椤栨碍鍎婇梻鍥ｅ亾闁告帗绻傞～鎰板礌閼愁垰顏熺紒宀€灏ㄧ槐婵嬪礆濞嗘帞绠查柛?闁挎稑鑻幆渚€宕?
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
	node_type a;//缂侇偉顕ч悗?
	int node_number;//list闁汇劌鍩杘de闁轰焦澹嗗ú?
	int next,prev;//闁告挸绉撮幃妤呭锤濡ゅ應鏀?
	int location;//闁圭鍋撳璺哄閺嬪啯绂掗張鐢电Т缂?
	int node_list_begin;//闁圭娲ら幃婊堝箥閳ь剛浠﹂悙鐑樻嚑閻炴稏鍔岄妵?
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
	node_type a;//鐟滅増鎸告晶鐘绘倷閸︻厽鐣辩紒顐ヮ嚙閻?
	String key;int value;//闁哄鍟埀顒€銈搁弫顓㈠磹?
	int next,prev;//闁告挸绉撮幃妤併仚鏉堚晜鐣卞ù锝呯Ф閻?
	int location;//鐟滅増鎸告晶鐘诲箥閳ь剚寰勯崟顒佺€ù鐘虫构缂嶅懐绱?
	int head;//闁圭鍋撻悗鐢垫嚀缁ㄦ煡鎯冮崚顡痝node 闁汇劌瀚紞鍛磾?
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
node Q[11000];int Top;
class BlockLinkList{
	public:
	string F;//閺夊牊鎸搁崵顓㈠棘閸ワ附顐?
	fstream file;
	template<class T> 
	T get(int location){//闁烩晛鐡ㄧ敮鏉戭嚗濡も偓閸╁ocation濞达絽绉堕悿鍡涙儍閸曨偄缍?
		file.open(F.c_str(),ios::binary|ios::in);
		file.seekg(location);
		T a;
		file.read(reinterpret_cast<char *> (&a),sizeof(a));
		file.close();
		return a;
	}
	String get_begin_node(Bignode& h){//鐎电増顨呴崺瀹ч柣銊ュ椤戝洦绋夐埀顒佺▔閻氱挱y闁?
		node begin=get<node>(h.node_list_begin);
		node first=get<node>(begin.next);
		return first.key;
	}
	template<class T>
	void updata(T& a){//闁哄洤鐡ㄩ弻濠囧棘閸ワ附顐?
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
		while(true){
			if(a.a==Begin){
				Bignode c=get<Bignode>(a.head);
				c=get<Bignode>(c.prev);
				if(c.a==Begin)break;
				a=getend(get<node>(c.node_list_begin));
			}
			if(a.a==End)a=get<node>(a.prev);
			if(a.a!=normal)break;
			
			if(cmp(a.key,key)==0){
				Q[++Top]=a;
				a=get<node>(a.prev);
			}
			else break;
		}
		return ;
		
	}
	void getnext(node a,String key,int flag=0){
		while(true){
			if(a.a==End){
				Bignode c=get<Bignode>(a.head);
				c=get<Bignode>(c.next);
				if(c.a==End)break ;
				a=get<node>(c.node_list_begin);
			}
			if(a.a==Begin)a=get<node>(a.next);
			if(a.a!=normal)break ;
			if(cmp(a.key,key)==0||flag){
				Q[++Top]=a;
				a=get<node>(a.next);
			}
			else break;
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
		/*	node_type a;//鐟滅増鎸告晶鐘绘倷閸︻厽鐣辩紒顐ヮ嚙閻?
		String key;int value;//闁哄鍟埀顒€銈搁弫顓㈠磹?
		int next,prev;//闁告挸绉撮幃妤併仚鏉堚晜鐣卞ù锝呯Ф閻?
		int location;//鐟滅増鎸告晶鐘诲箥閳ь剚寰勯崟顒佺€ù鐘虫构缂嶅懐绱?
		int head;*/
		/*
		node_type a;//缂侇偉顕ч悗?
		int node_number;//list闁汇劌鍩杘de闁轰焦澹嗗ú?
		int next,prev;//闁告挸绉撮幃妤呭锤濡ゅ應鏀?
		int location;//闁圭鍋撳璺哄閺嬪啯绂掗張鐢电Т缂?
		int node_list_begin;//闁圭娲ら幃婊堝箥閳ь剛浠﹂悙鐑樻嚑閻炴稏鍔岄妵?
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
//闁秆勵殘婵悂鏌ч幑鎰┾偓?




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
}unknown;//闁哄牜浜炲▍銉ㄣ亹閺囩姵鏆忛柟?
class USER{//闁活潿鍔嶉崺娑欑┍閳╁啩绱?
	public:
	string F;
	fstream file;
	user_node now;//鐟滅増鎸告晶鐘绘偨閵婏箑鐓?
	template<class T>
	void updata(T& a){//闁哄洤鐡ㄩ弻濠囧棘閸ワ附顐?
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekp(a.location);
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	template<class T>//闁革负鍔嶉弸鍐╃鐠鸿櫣鍟查柛鎺撶☉缂傛挻绋夐埀顒佺▔椤忓懏鐓€缂侇偉顕ч悗鐑芥晬鐏炲€熷珯閺夆晜鏌ㄥú鏍礂閺堢數绉寸紓?
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
	T get(int location){//闁烩晛鐡ㄧ敮鏉戭嚗濡も偓閸╁ocation濞达絽绉堕悿鍡涙儍閸曨偄缍侀梺鑼舵硶濞村鈧敻鈧稓鑹鹃柡鍫氬亾闁告艾娴峰▓鎴炴媴瀹ュ洨鏋?
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
		find(int key){//闁瑰灚鍎抽崺宀勫嫉閳ь剚娼婚幈绺爕婵炲棴绱曞▓鎴炴交濞戞粍褰涢柟瀛樼墳閳ь剙鎳庡畷鐘诲礄閻戞ɑ鎯欏ù?
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


class book{//濞戞棑绠戠花閬嶅春閻戞ɑ鎷遍柛妤佹磻缂?
	public:
	String ISBN,author,name,keyword[10];
	int location;//閻犱焦婢樼紞宥夊礂鐠虹儤韬柡鍌氭矗濞嗐垺绋夐鐘崇暠濞达絽绉堕悿?
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
}unknownn,q[11000];int top=0;
bool cmp2(book& a,book& b){return cmp(a.ISBN,b.ISBN)==-1;}
BlockLinkList author_index,ISBN_index,name_index,keyword_index;

class BOOK{
	public:
	string F;
	fstream file;
	book now;bool select_flag;
	template<class T>
	void updata(T& a){//闁哄洤鐡ㄩ弻濠囧棘閸ワ附顐?
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekp(a.location);
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	template<class T>//闁革负鍔嶉弸鍐╃鐠鸿櫣鍟查柛鎺撶☉缂傛挻绋夐埀顒佺▔椤忓懏鐓€缂侇偉顕ч悗鐑芥晬鐏炲€熷珯閺夆晜鏌ㄥú鏍礂閺堢數绉?
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
	void erase(book& a,int flag){//闁告帞濞€濞呭孩绋夐埀顒勫嫉椤戝灝濮涢柣銊ュ閸屻劌顕?
	
		if(flag==0){
			if(isempty(a.ISBN))return ;
			node y=ISBN_index.find(a.ISBN);
			if(cmp(y.key,a.ISBN))throw 1;
			ISBN_index.erase_a_node(y);
			a.ISBN=(String)(string)("");
			return ;
		}
		
		
		if(flag==1){//闁告帞濞€濞呭穬uthor
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
