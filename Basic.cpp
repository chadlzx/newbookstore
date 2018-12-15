#include<bits/stdc++.h>

using namespace std;
/*
author: chad 闂佸搫鑻崯璺ㄦ崲閺冣偓濞?
student id: 518030910426 
class type: class A
class id: F1803017
*/

/*
闂佽桨鑳剁换婵堢礊鐎ｎ剚濯奸柟瑙勫姦閸氣偓闂佽鍓氱换鍡涙儗妤ｅ啯鏅?
婵☆偓绲鹃悧鏇㈠储濞戙垺鏅悘鐐跺閳峰牏绱掓径濠勑ｉ懚鈺冣偓娈垮枛缁绘劙銆呰閹峰懘寮撮悜鍡樞熼梺鑽ゅ仜濡妲?
	闂佺绻愰悧鎰崲濡吋鍋橀悗鍦尶ad闂佹寧绋戦惌浣衡偓姘ュ灮閳ь剚绋掗敋婵犫偓閻氭mmand.txt,闂佺儵鏅涢悺銊ф暜鐎靛憡瀚氶悹鍥ㄥ絻缁插潡鏌涘☉娆忕亰闁硅翰鍊濇俊?
	闂佸吋鐪归崕鎵箔婢跺备鍋撳☉娅亜锕㈤鍫熸櫖鐎光偓閸愭儳鏅紓鍌氬枤閸犳岸鍩㈤崗鍏煎劅闊洦鎸婚崰鍛存煟閿濆懐鐒告繛闂村嵆瀹曨亞浠﹂悙顒傚蒋闂備緡鍋呭銊╁疾椤愶附顥堟い顐枤缁€鍕煟椤剙濡介柛鈺傜洴瀹曪絿鈧綆浜楅崑銊╂煥濞戞﹩妲堕柍?
缂備焦顨忛崗娑氱博閺夋垟鏋庨柍銉ㄦ珪閸庢瑩鏌涢弮鎴犲帨缂佽鲸绻堝畷姘槈濡偐澶?user 闂佸搫鍊稿ú锝呪枎閵忋倖鏅悘鐐舵閻忥紕鈧偣鍊涘銊╁礉閻斿吋鍎庢い鏃€顑欓崥鍌炴煕濡や焦绀冩俊顐熸櫈缁犳稑螖閸愭儳鎮侀梺鑽ゅ仜濡盯鎮洪幋锕€妫橀柛銉檮椤愪粙鏌ㄥ☉妯垮闁搞劌鐏氶幈銊р偓锝庡亝閽傚鏌℃担鐟邦€滅紒浣哥摠缁?
	user 闂佸搫鍊瑰姗€宕归崡鐑嗗殘缂佽櫣鎸縪t 闂佹椿娼块崝宥夊春濞戙垹鐭楅悗锝庝簵閸嬨劑鏌ㄥ☉姗嗘Ф闁?
闁诲海鏁婚埀顒佺〒閼归箖鏌涘顒傚缁绢厼鐖奸獮鈧憸宀€绮崒鐐存櫖閻忕偛澧藉Σ銊︾箾閸犅板€楃紙濠氭煕閹寸姷妲皀valid\n

闂佹椿娼块崝宥夊春濞戙垹绾ч柛鎰靛枟椤庢瑥鈽夐幘鎰佺叚缂佽鲸绻堥幊鎾存媴鐟欏嫮鍑￠梺鎸庣☉閼活垶骞夐崘宸晠闁靛鍨崇粈澶婎渻閵堝棗鍔ゆい鎾崇秺閺佸秶浠﹂悙顒€绱﹂梺璋庡棭鍤欑紓?7310

load [file] #7 闂佸憡姊绘慨鎯?
exit #0 闂備緡鍋€閸嬫捇鏌?
su [user] [passwd] #0 闂佽皫鍡╁殭缂?
logout #1  闂佸憡鐟︾湁閻犳劗鍠栧鐢割敂閸℃﹩浠悷?
useradd [user闂佺偨鍎叉禍绯砞 [passwd] [7/3/1] [name] #3闂佹寧绋掗懝楣兟烽崘顔肩闁绘浜鍗炩槈閹垮啩绨奸悗鍨皑閳ь剝顫夌喊宥咁焽閸儲鈷旈柟閭﹀枟閻ｉ亶鏌ｉ～顒€濡介柛鈺傜洴閺佸秶浠﹂懖鈺冩喒闂佺厧鐤囧Λ鍕垂閸楃儐鍤堥弶鐐村閻熸繈鎮樿箛鎾剁缂侇煈鍓熼幊娑㈩敂閸曨厾鐣抽梺鍝勵槸閸熸潙顬婂ú顏呭剭闁告洦鍠栭ˇ鈺呮煙?
register [user闂佺偨鍎叉禍绯砞 [passwd] [name] #0闂佹寧绋掔喊宥夊极閻愬搫绀冮悘鐐跺亹椤忓崬鈽夐幙鍐х盎闁汇埄鍋婂鍨緞鎼达絿顔愭繛瀛樼矋缁嬫劖绌辨繝鍥х畳妞ゆ牗绮嶉悾閬嶆煛婢跺﹤鏆ｆ俊?闂佹椿娼块崝宥夊春?
delete [user闂佺偨鍎叉禍绯砞 #7闂佹寧绋掗懝楣冨垂瑜版帗鈷旈柕鍫濇閸樻瑩鏌ｉ～顒€濡介柛?
passwd [user闂佺偨鍎叉禍绯砞 [old闂佺偨鍎叉禒鐕約swd(if not root)] [new闂佺偨鍎叉禒鐕約swd] #1闂佹寧绋掗鐞給t婵炴垶鎸哥粔鐟般€掗崜浣瑰暫濞达綁娼荤紞鏍煕閹邦厾鎳勬俊顐亞閳ь剟娼уΛ娑㈡偉濠婂牊鏅悘鐐舵瀵版挸霉閿濆棛鎳嗗璺哄楠炲鎮滈懞銉ょ帛闁?

[user-id] 闂佸憡绮庣粭姒゛sswd] 闂佸憡鐗曢幊搴ㄥ箚閸喐浜ら柣鎰暩閺侀箖鏌￠崘顏勑ラ柍瑙勭墵瀵粙鎳栭埡鍌滄殸闂佽桨鐒﹀姗€鎮鸿閳ь剚绋掗〃鍡涙儊濠靛洨鈻旈悗锝庝簻閻忓﹦绱掗幆褍鐨＄紒杈ㄧ箖缁嬪顓奸崼鈶裤垽寮?婵炴垶鎼╂禍婊堟偤瑜忕划?
[name] 婵炴垶鎼╅崢铏圭箔婢舵劕瑙︽い鎰╁€愰弫鍕煛瀹ュ洢鈧妲愬┑鍥┾枖鐎广儱鐗忓瓭闁?婵炴垶鎼╂禍婵嬫儑閻ｅ备鍋?0婵炴垶鎼╂禍婊堟偤瑜旈幊?

select [ISBN]
#3闂佹寧绋掑畝鎼佸焵椤掆偓椤︻垶鎮剧紞顢笲N婵炴垶鎸鹃崕銈団偓鍨皑閳ь剝顫夐懝楣冨焵椤掑啫浜规繛鍫熷灴瀹曞爼宕ｉ妷銉ヮ潬闂佹寧绋戦惌浣衡偓姘ュ灪缁嬪顓奸崨顖涙喖闂侀潻璐熼崝宀勫垂椤栫偛绀嗘繛鎴烆焽缁憋箓鎮归崶鑸殿€楽BN闂佹眹鍔岀€氼亪宕濋悢鑲╁祦閻犻缚娅ｅ▓娲煕韫囨梹鏋勭紓宥嗗灦缁岄亶鍩勯崘褏绀€闂佷紮绲鹃悷褔鍩為弽顐ら┏濠㈣泛锕︾粣顡硂dify闁哄鏅滅粙鏍€侀幋鐐电畽妞ゆ劑鍨归弲?
modify 闂佺偨鍎查埀顒佺摂BN=[ISBN] 闂佺偨鍎叉禒鎶媘e=[name] 闂佺偨鍎叉禍鐎爐hor=[author] 闂佺偨鍎叉禒鍧媦word=[keyword] 闂佺偨鍎叉禒鐖巌ce=[price]
#3闂佹寧绋掗懝鎯ь嚕椤掑嫬鏋侀柡澶婄仢鐠佹煡鏌ｉ鍐厡闁哄棙鍔欓弫宥囦沪閼测晝妲忔繛鎴炴尭缁夌兘銆呴敃鈧晥闁稿本绻勭紙濠氭煕韫囧鍔﹂柕鍡楀閹棁绠涢妷褏顦繛鏉戝悑绾板秴煤閸ф妫橀悽顖ｅ枤缁€鍕煛閸ャ劌顕滅€规洘鐓￠幊鎾崇暆閸曨剙顫″┑鐑囩秬椤曆勬叏閻愮儤鏅璺侯槺閻熸劖绻涢崱顓犵瘈闁逞屽墮椤︻噣鎳欓幋锔藉剭闁告洦浜滄慨娑㈡煠閻ゎ垱鐝柡灞斤躬閹啴宕熼鍐畾闂?
import [quantity] [cost_price(in total)]
#3闂佹寧绋掗懝楣冩儍閵忥紕鈻斿┑鐘插枤閸嬔囨⒑椤愩埄妲烽柤鍨灴閹啴宕熼鍕潬婵炲濮伴崕鏌ュ焵椤掑喚鍤欓柛娆樻憲cost_price]闂佹眹鍔岀€氼亪鎮抽鐐插唨闁艰澹嗙粻绫焣uantity]闂?
show 闂佺偨鍎查埀顒佺摂BN=[ISBN] 闂佺偨鍎叉禒鎶媘e=[name] 闂佺偨鍎叉禍鐎爐hor=[author] 闂佺偨鍎叉禒鍧媦word=[keyword]
#1闂佹寧绋掗懝鎯ь嚕椤掑嫬鏋侀柡澶婄仢鐠佹煡鏌ｉ鍐厡闁哄棙鍔欓弫宥囦沪閼测晝妲忔繛鎴炴尭缁夌兘銆呴敃鈧晥闁稿本绻勭紙濠氭煕韫囧鍔﹂柕鍡楀閹棁绠涢妷褏顦柣蹇撶箰濡浜搁鈧弻濠傤吋閸ャ劎鏆犻梺鎼炲劚瑜扮偤宕濋悢鍝ヮ浄妞ぱ冪不BN闂佸憡鐟╅弨杈╂暜閹惧瓨鍎熼煫鍥ㄦ皑缂堝鏌涢幋鐘茬殤缂佽鲸绻堝Λ渚€鍩€椤掑倹鍟哄ù锝堫潐閺嗗牓鏌熼弶璺ㄧ妞ゆ洘宀稿畷銊╁箣閹烘挸袘闂佺绻戞繛濠囧极椤撶姭鍋撳☉娆樻疁闁靛棗绉瑰畷锝夘敂閸涱喗娈伴梺褰掓櫜缁€浣哥暦閻旂厧绀傞柟鎯板Г閺嗘盯鎮?
show finance [time]
#7闂佹寧绋掗鐢秏e婵＄偑鍊曞﹢鍗炪€掗悜鑺ュ仼闁靛闄勯ˇ褔鏌ㄥ☉妯肩劮缂侀鍙冨畷娆撴倻濡嘲浜鹃柤濮愬€栭悾閬嶆煛閳ь剛鎹勯崫鍕辈婵炴垶鎸哥€涒晠寮鈧畷娆撴偖鐎电鑰块梺鍛婄啲缁犳垿宕归娑欑秶闁规儳鍟垮В澶愬级閳哄倸褰唗ime]濠电偛鏋撮妶鍥╊啋闁荤姵鍓担鎻掍壕濞达絿顭堢粈宀勬煕閹寸姴鍔嬮柟濂告敱閹峰懎顭ㄩ幇顔绢槱闂佸憡甯掑Λ妤呭春閸℃瑧涓嶆俊鐐插⒔椤忚鲸绻涢崱蹇旑潐缂佽鲸宀搁幆鍐礋椤掍焦姣嗛梺绋跨箞閸庢煡寮鈧畷娆撳箒閹哄棗浜?
buy [ISBN] [quantity] #1闂佹寧绋掓穱娲窗濡崵鈻曢柟宄扮焾閸ゅSBN闂佸憡鐟╅ˉ鎾斥枔閹达箑鐐婇柛娆嶅劚婵矌quantity]闂?

[ISBN] 婵炴垶鎹佸銊х箔婢跺本鎯ラ柛娑欏缁?0婵炶揪绲界粔璺衡枔閹寸偞浜ら柣鎰暩閺侀箖鎮楀☉娆樻畼妞ゆ垳鐒︾粙?
[name] 闂佸憡绮庣粭姒搖thor] 闁荤偞鍑归崑鍕嚕鐠囧樊鍤曢柡鍥╁仜婵炲洭鏌涢弽褎鍤€闁圭櫢缍佸鍫曞Ψ椤栨粎顦╂繛鎴炴尭缁夋挳骞嗛崼銉ョ煑閻忕偟鏅粚鍧楁煕濞嗗繐娈╃紒杈ㄥ哺閺佸秶浠﹂懖鈺冾啍闁?
闂佸搫鐗滈崜婵嬫閳哄懎绀冮柛娑卞弾閸熷洦绻涚仦绋垮⒉婵犫偓娓氣偓瀹曪絿浠﹂悾宀€鈹涢梺?
闂佸憡鍔曢幊搴敊閹邦厾鈻旂€广儱鐗忓瓭闁?婵炴垶鎼╂禍婵嬫儑閻ｅ备鍋?
[keyword] 闂佽桨鑳剁换婵堢礊鐎ｎ剚鍋栨い鎰╁灩閽冪喓鈧鍠楀ú鏍亹閸ф绀岄柛娑氬瀹曟娊鏌℃径鍫濆姷缂佽鲸鐟︾粙澶婎吋閸涱喖鍓甸梺鍛婄懃閼活垳妲愰埡鍛煑闁告垯鍊楃粈鍡涙煥濞戞瀚伴柛娅诲洦鐓ユい鏃囧亹閹界喎鈽夐弬娆惧剶婵?| (缂備焦姊归悧婊堝吹?闂傚倸鎳忛弻銊ф閹达附鏅悘鐐跺亹缁犱粙鎮?
濠殿噯绲界换瀣煂濠婂牆绀傞柟鎯板Г閺嗘盯鎮楀☉娆樻畷婵犫偓娴煎鍙曟い鎰╁灩閺佸爼鎮楃涵鍜佹綈婵☆偁鍊曢锝夊即閻愭彃鈻忔繛瀵稿О閸庡崬顕ｆ搴ｇ煔闁绘垶顭囨竟?
闂佸憡鍔曢幊搴敊閹版澘绠戦悹鍥ㄥ絻瑜版瑥鈽夐幘宕囆ョ紒澶婄摠濞?婵炴垶鎼╂禍婵嬫儑閻ｅ备鍋?
[quantity] 婵炴垶鎸鹃崕銈夊汲閿濆鏋侀悽顖ｅ枤缁€?100000闂?
闁诲海鏁婚埀顒佺〒閼圭穾how闂佺懓鐏濈粔宕囩礊閺冨牊鏅€光偓閸愵亞鐐曢梺鍛婂灩閸庛倝鎮х粙娆惧殨闊洤姘︾粈瀣煥濞戞瑧顣查柣锔肩磿閹壆浠﹂懖鈺婁紘闂佸搫鐗滈崜銊ф濠靛绠ラ柍褜鍓熷鍨緞婢跺绠氶梺璇″弾閸ㄥ爼濡村澶嬪剮妞ゆ洍鍋撴俊顐ｅ缁傛帞缂撳?闂傚倸鎳忛弻銊ф閹达附鏅悘鐐跺亹楠炲棝鏌″澶嬶紵缂佺粯宀搁幃鎯р枎鎼淬倐鎷℃繛杈剧到缁嬪嫮妲愬┑鍥ㄥ劅闁规儳纾幗鐘绘煕濮橆剟顎楀┑顔惧仱閸ㄦ儳鈹戦崶銊﹀闂佺偨鍎茬划宀勬偤瑜旈弫宥囦沪缁涘鎼?


report finance #7闂佹寧绋掗惌顔炬娴煎瓨鍋ㄩ柣鏃傤焾閻忓洤鈽夐幘顖氫壕閻庢鍠氭慨鍓х矈閺勫繒鐤€闁告劏鏅涙禍浼存煟閳哄﹤鏋ゆ繛鍫熷灩閹峰綊濮€閻樺樊娼抽梺纭呯堪閸庢挳濡撮崘顔芥櫖閻忕偛澧芥竟鎰偓娈垮枛缁绘宕靛鍛亾?
report employee #7闂佹寧绋掗惌顔炬娴煎瓨鍋ㄩ柣鏃傤焾閻忓洤鈽夐幘顖氫壕閻庢鍠氭慨鍓х矈閺勫繒鐤€闁告劏鏅涙禍浼存煟閳哄﹤鏋ゆ繛鍫熷灴瀹曘劌螣鏉炴壆鐭楅悗瑙勬偠閸庢壆绱為弮鍫濈畾闁告侗鍘奸弸宀勬偠濞戣京鍘滅紒杈ㄧ箘閹峰寮剁捄銊梺绋跨箺閸╂牠骞栭柨瀣婵犲﹥鍔楃粈澶愭煛瀹ュ洤甯剁紒鎲嬬節閹虫盯顢旈崟顓熸瘞
log #7闂佹寧绋掗惌顔炬閻楀牊浜ら柡鍌涘缁€鈧柣鐘欏啰绠扮紒娲畺楠炲啴鏁傞悙顒傜崶闂佹眹鍔岀€氼厼螞閳哄嫮鐤€婵°倕瀚烽崬鍓佹喐閻楀牊绌跨紒杈ㄧ箞瀹曠娀宕ㄩ纰变痪缂備緡鍨靛畷鐢靛垝濞差亜绠肩€广儱瀚粙濠勭磼椤愩儱鍚规繛鍫熷灩閹奉偅鎷呯粙鍨綑婵炲瓨绮屽Λ鏃傚垝閸喓鈻曢柛顐墰缁€澶娒归悩顔煎姎鐎殿噣顥撻幏褰掑閻樺樊娼虫繛鎴炴尭閿曘儵鎯侀埄鍐枖闁逞屽墰缁參寮悙顒€鏀梺鍝勫閹稿宕曡箛娑樼缁炬澘顦辩粈澶愭煛瀹ュ洤甯剁紒鎲嬬節閹虫盯顢旈崟顓熸瘞
report myself #3闂佹寧绋掓穱铏规崲閹达箑鐐婇柣鎰级閸犲懐鈧鎮堕崕鎾吹濠婂喚鍟呴弶鍫氭櫆閻ｉ亶鏌熼崹顔拘＄紓宥嗘⒒閹峰寮剁捄銊梺鎸庣☉閺堫剟鎮х粙娆惧殨闊洦鑹惧▓浼存倵?
*/

using namespace std;

struct String{//婵炴垶鎸撮崑鎾斥槈閹垮啩绨奸柡灞斤躬閹啴宕熼銈嗘瘞闂傚倵鍋撶紒铏规櫑ring 
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
//闁荤姴娲╅褔宕ｉ崱娑樼煑濠电姴鍊稿鎾翠繆椤愮喎浜鹃梺?
//initialization
const int block=70;
enum node_type{Begin=1,End,normal};
enum TYPE{
	EXIT=1,SU,logout,USERADD,REGISTER,DELETE,PASSWD,SELECT,MODIFY,IMPORT,SHOW,SHOW_FINANCE,BUY,
	REPORT_FINANCE,REPORT_IMPLOYEE,REPORT_MYSELY,LOG,WRONG
};
bool check_empty(string s,int b){//濠碘槅鍋€閸嬫捇鏌＄仦璇插姍缂侇喚鍤辨繛杈剧到缁夊爼鎮块崱妤婂殨闁逞屽墯閹便劎缂撻鈧浼搭敍濮橆厼鍓ㄦ繛鎴炴崄濞咃綁鍩為弽銊р枖?
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
			//闂佸搫妫楅崐鐟邦渻閸屾稓鈻旂€广儱顦版禒姗€鎮?
			else if(iden=="report"){
				return REPORT_FINANCE;
			}
			else if(iden=="log"){
				return LOG;
			}
			else return WRONG;
	}
};





bool check(string s){//闂佸憡甯囬崐鏍蓟閸ヮ剙鍙婃い鏍ㄧ閸庡﹪姊婚崶锝呬壕闂佸憡甯楃换鍌烇綖閹版澘绀岄柤鎰佸灠椤忕喓绱掑畝鈧亸銊ф濠靛绀嗘繛鍡樺笧缁犳煡鏌?闂佹寧绋戦懟顖炲箚娓氣偓瀹?
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
	node_type a;//缂備緡鍋夐褔鎮?
	int node_number;//list闂佹眹鍔岄崺鏉榙e闂佽桨鐒︽竟鍡椕?
	int next,prev;//闂佸憡鎸哥粔鎾箖濡ゅ懎閿ゆ俊銈呮噳閺€?
	int location;//闂佸湱顣介崑鎾愁熆鐠哄搫顏柡瀣暞缁傛帡寮甸悽鐢敌㈢紓?
	int node_list_begin;//闂佸湱顭堝ú銈夊箖濠婂牆绠ラ柍褜鍓涙禒锕傛倷閻戞ɑ鍤戦柣鐐寸◤閸斿矂濡?
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
	node_type a;//閻熸粎澧楅幐鍛婃櫠閻樼粯鍊烽柛锔诲幗閻ｈ京绱掗銉殭闁?
	String key;int value;//闂佸搫顦崯顐﹀焵椤掆偓閵堟悂寮銏犵９?
	int next,prev;//闂佸憡鎸哥粔鎾箖濡や降浠氶弶鍫氭櫆閻ｅ崬霉閿濆懐肖闁?
	int location;//閻熸粎澧楅幐鍛婃櫠閻樿绠ラ柍褜鍓氬鍕礋椤掍胶鈧喖霉閻樿櫕鏋勭紓宥呮噽缁?
	int head;//闂佸湱顣介崑鎾绘倵閻㈠灚鍤€缂併劍鐓￠幆鍐礆椤＄棟node 闂佹眹鍔岀€氼亞绱為崨顖滅＞?
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
	string F;//闁哄鐗婇幐鎼佸吹椤撱垹妫橀柛銉檮椤?
	fstream file;
	template<class T> 
	T get(int location){//闂佺儵鏅涢悺銊ф暜閺夋埈鍤楁俊銈傚亾闁糕晛顔刼cation婵炶揪绲界粔鍫曟偪閸℃稒鍎嶉柛鏇ㄥ亜缂?
		file.open(F.c_str(),ios::binary|ios::in);
		file.seekg(location);
		T a;
		file.read(reinterpret_cast<char *> (&a),sizeof(a));
		file.close();
		return a;
	}
	String get_begin_node(Bignode& h){//閻庣數澧楅〃鍛村春鐎寡囨煟閵娿儱顏い鎴濇处缁嬪鍩€椤掍胶鈻旈柣姘辨尡y闂?
		node begin=get<node>(h.node_list_begin);
		node first=get<node>(begin.next);
		return first.key;
	}
	template<class T>
	void updata(T& a){//闂佸搫娲ら悺銊╁蓟婵犲洤妫橀柛銉檮椤?
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
		/*	node_type a;//閻熸粎澧楅幐鍛婃櫠閻樼粯鍊烽柛锔诲幗閻ｈ京绱掗銉殭闁?
		String key;int value;//闂佸搫顦崯顐﹀焵椤掆偓閵堟悂寮銏犵９?
		int next,prev;//闂佸憡鎸哥粔鎾箖濡や降浠氶弶鍫氭櫆閻ｅ崬霉閿濆懐肖闁?
		int location;//閻熸粎澧楅幐鍛婃櫠閻樿绠ラ柍褜鍓氬鍕礋椤掍胶鈧喖霉閻樿櫕鏋勭紓宥呮噽缁?
		int head;*/
		/*
		node_type a;//缂備緡鍋夐褔鎮?
		int node_number;//list闂佹眹鍔岄崺鏉榙e闂佽桨鐒︽竟鍡椕?
		int next,prev;//闂佸憡鎸哥粔鎾箖濡ゅ懎閿ゆ俊銈呮噳閺€?
		int location;//闂佸湱顣介崑鎾愁熆鐠哄搫顏柡瀣暞缁傛帡寮甸悽鐢敌㈢紓?
		int node_list_begin;//闂佸湱顭堝ú銈夊箖濠婂牆绠ラ柍褜鍓涙禒锕傛倷閻戞ɑ鍤戦柣鐐寸◤閸斿矂濡?
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
//闂佺鍕垫畼濠殿喗鎮傞弻褔骞戦幇鈹惧亾?




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
}unknown;//闂佸搫鐗滄禍鐐测枍閵夈劊浜归柡鍥╁У閺嗗繘鏌?
class USER{//闂佹椿娼块崝宥夊春濞戞瑧鈹嶉柍鈺佸暕缁?
	public:
	string F;
	fstream file;
	user_node now;//閻熸粎澧楅幐鍛婃櫠閻樼粯鍋ㄩ柕濠忕畱閻?
	template<class T>
	void updata(T& a){//闂佸搫娲ら悺銊╁蓟婵犲洤妫橀柛銉檮椤?
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekp(a.location);
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	template<class T>//闂侀潻璐熼崝宥夊几閸愨晝顩烽悹楦挎閸熸煡鏌涢幒鎾垛槈缂傚倹鎸荤粙澶愬焵椤掍胶鈻旀い蹇撴噺閻撯偓缂備緡鍋夐褔鎮楅悜鑺ユ櫖閻忕偛鈧喎鐝柡澶嗘櫆閺屻劌煤閺嶎厼绀傞柡鍫㈡暩缁夊绱?
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

class LOG{
	public:
	string F;
	fstream file;
	int getsum(){
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekg(0,ios::end);
		int k=file.tellg();file.close();
		return k/sizeof(pair<double,double>);
	}
	template<class T>
	T get(int location){//闂佺儵鏅涢悺銊ф暜閺夋埈鍤楁俊銈傚亾闁糕晛顔刼cation婵炶揪绲界粔鍫曟偪閸℃稒鍎嶉柛鏇ㄥ亜缂嶄線姊洪懠鑸电《婵炴潙顦遍埀顒傛暬閳ь剚绋撻懝楣冩煛閸艾浜鹃梺鍛婅壘濞村嘲鈻撻幋鐐村鐎广儱娲ㄩ弸?
		file.open(F.c_str(),ios::in|ios::binary);
		file.seekg(-location,ios::end);
		T a;
		file.read(reinterpret_cast<char *> (&a),sizeof(a));
		file.close();
		return a;
	}
	template<class T>
	void foundinend(T& a){
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekp(0,ios::end);
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	void init(){
		F="finance.txt";
		if(check(F)){
			file.open(F.c_str(),ios::out|ios::binary);
			pair<double,double> a=make_pair(0,0);
			file.write(reinterpret_cast<char* >(&a),sizeof(a));
			file.close();
		}
	}
	void found(double money,int id){//flag{ 0 :cost 1: income}
		pair<double,double> a;
		if(id==0)a=make_pair(money,0);
		else a=make_pair(0,money);
		pair<double,double> last=get<pair<double,double> >((sizeof (pair<double,double>)));
		a.first+=last.first,a.second+=last.second;
		foundinend(a);
	}
	
	pair<double,double> 
		find(int key){//闂佺懓鐏氶崕鎶藉春瀹€鍕珘闁逞屽墯濞煎骞堢缓鐖曞┑鐐叉４缁辨洖鈻撻幋鐐翠氦婵炴垶绮嶈ぐ娑㈡煙鐎涙澧抽柍褜鍓欓幊搴＄暦閻樿绀勯柣鎴炆戦幆娆徝?
		if(!key)key=getsum()-1;
		double income=0,pay=0;
		pair<double,double> a=get<pair<double,double> >((sizeof (pair<double,double>))*(key+1));
		pair<double,double> b=get<pair<double,double> >((sizeof (pair<double,double>))*(1));
		pay=b.first-a.first,
		income=b.second-a.second;
		return make_pair(pay,income);
	}
}LOG_it;


class book{//婵炴垶妫戠粻鎴犺姳闁秴鏄ラ柣鎴炆戦幏閬嶆煕濡や焦纾荤紓?
	public:
	String ISBN,author,name,keyword[10];
	int location;//闁荤姳鐒﹀妯肩礊瀹ュ绀傞悹铏瑰劋闊剟鏌￠崒姘煑婵炲棎鍨虹粙澶愵敇閻樺磭鏆犳繛杈剧到缁夊爼鎮?
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
	void updata(T& a){//闂佸搫娲ら悺銊╁蓟婵犲洤妫橀柛銉檮椤?
		file.open(F.c_str(),ios::in|ios::out|ios::binary);
		file.seekp(a.location);
		file.write(reinterpret_cast<const char *> (&a),sizeof(a));
		file.close();
	}
	template<class T>//闂侀潻璐熼崝宥夊几閸愨晝顩烽悹楦挎閸熸煡鏌涢幒鎾垛槈缂傚倹鎸荤粙澶愬焵椤掍胶鈻旀い蹇撴噺閻撯偓缂備緡鍋夐褔鎮楅悜鑺ユ櫖閻忕偛鈧喎鐝柡澶嗘櫆閺屻劌煤閺嶎厼绀傞柡鍫㈡暩缁?
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
	void erase(book& a,int flag){//闂佸憡甯炴繛鈧繛鍛缁嬪鍩€椤掑嫬瀚夋い鎴濈仢婵盯鏌ｉ妸銉ヮ伀闁稿被鍔岄?
	
		if(flag==0){
			if(isempty(a.ISBN))return ;
			node y=ISBN_index.find(a.ISBN);
			if(cmp(y.key,a.ISBN))throw 1;
			ISBN_index.erase_a_node(y);
			a.ISBN=(String)(string)("");
			return ;
		}
		
		
		if(flag==1){//闂佸憡甯炴繛鈧繛鍛┈uthor
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
