#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>

#include "F.h"

#define ld long double
#define ll long long
#define fi first
#define se second
#define cls() system("cls")
#define isOnEnter ((GetAsyncKeyState(VK_RETURN)&0x8000))

// #define showRankOfNumber 0
// #define usePublicHandle 0
#define accomSearcher 0

using namespace std;

namespace P{ // 输出区
	HANDLE _handle=GetStdHandle(STD_OUTPUT_HANDLE); 
	void col(int colorID=7){
		HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE); 
		#ifdef usePublicHandle
			SetConsoleTextAttribute(_handle,colorID);
		#else
			SetConsoleTextAttribute(handle,colorID);
		#endif
	}
	vector<pair<string,int>> rarityChineseColorID{ // 稀有度
		{"普通",2},
		{"罕见",6},
		{"稀有",3},
		{"史诗",5},
		{"传说",4},
		{"神话",11},
		{"究极",12},
		{"超级",10},
		{"终末",13}
	};
	map<int,string> rarityColorIDChinese{
		{2,"普通"},
		{6,"罕见"},
		{3,"稀有"},
		{5,"史诗"},
		{4,"传说"},
		{11,"神话"},
		{12,"究极"},
		{10,"超级"},
		{13,"终末"}
	};
	map<string,int> rarityAllColorID{ // 稀有度
		{"普通",2}, {"c",2},
		{"罕见",6}, {"n",6},
		{"稀有",3}, {"r",3},
		{"史诗",5}, {"e",5},
		{"传说",4}, {"l",4},
		{"神话",11}, {"m",11},
		{"究极",12}, {"u",12},
		{"超级",10}, {"s",10},
		{"终末",13}, {"o",13}
	};
	int doubleToColorID(ld t){
		if(t>0.400) return 2; // c
		if(t>0.200) return 6; // n
 		if(t>0.100) return 3; // r
		if(t>0.050) return 5; // e
		if(t>0.010) return 4; // l
		if(t>0.005) return 11; // m
		if(t>0.003) return 12; // u
		if(t>0.001) return 10; // s
		return 13; // o
	}
	void setPosition(int x,int y){ 
		HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE); 
		COORD coord={short(y),short(x)}; 
		#ifdef usePublicHandle
			SetConsoleCursorPosition(_handle,coord);
		#else
			SetConsoleCursorPosition(handle,coord);
		#endif
	}
	void HideCursor(){
	    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
		#ifdef usePublicHandle
			hConsole=_handle;
		#endif
	    CONSOLE_CURSOR_INFO cursorInfo;
	    GetConsoleCursorInfo(hConsole,&cursorInfo);
	    cursorInfo.bVisible=FALSE;
	    SetConsoleCursorInfo(hConsole,&cursorInfo);
	}
}
namespace T{ // 测试区
	int Dice=-1;
	void checker(){
		int ans;
		for(int i=0;i<100000;i++) ans+=F::c_67::ck(i);
		cout<<ans/100000.00;
	}
}

using namespace P;
using namespace F;
using namespace T;

default_random_engine rander;
uniform_int_distribution<int> fishRand(0,999999);

namespace M{
	// ------------------- 不同页面运行分装 -------------------
	string timeOfConfig;
	vector<pair<ll,int>> numList;
	map<int,pair<ld,int>> rarityRankColor; // {Number, {Rank, ColorOfNumber}}
	ifstream Config("config.txt");
	vector<pair<int,string>> accomShown;
	/* 初始化：窗口显示 */ void main_InitShow(){
		SetConsoleOutputCP(CP_UTF8);
		// checker();
		HideCursor();
		srand(time(0)); 
		rander.seed(time(0)); 
		fishRand(rander);
		system("title FishRNG");
		make_init();		
	}
	/* 初始化：加载显示 */ void main_LoadShow(){
		col(9); 
		cout<<"FishRNG"; 
		col(); 
		cout<<"\n\n";
		Config>>timeOfConfig;
		col(14); 
		cout<<"          "; 
		col(10); 
		cout<<"正在读取配置文件…… "; 
		col(14);
		if(timeOfConfig!="")cout<<"（"<<(time(0)-stoll(timeOfConfig))/86400<<" Days Ago）";
		col();
		cout<<"\n";		
	}
	/* 初始化：检索器   */ void main_InitAccomSearch(){
		#ifdef accomSearcher
			initAccomSearch();
			for(auto v:accomName) accomShown.push_back(v);
			reverse(accomShown.begin(),accomShown.end());
			workAccom(TYPES,"筛选器筛选结果");
		#endif			
	}
	/* 初始化：预处理   */ void main_InitNumberConfig(){
		if(timeOfConfig!=""){
			// ------------------- 读取配置文件内容 -------------------
			cout<<"\n";
			cout<<"          "; 
			col(10);
			cout<<"找到配置文件！ ";
			col();
			cout<<"| "; 
			col(11); 
			cout<<"是否读取（Y）："; 
			col(); 
			string readConfig; cin>>readConfig;
			if(readConfig=="Y"||readConfig=="y"){ // 读入配置文件
				for(int readNumber=0;readNumber<=999999;readNumber++){
					ld rnk; 
					int colorID=0;
					Config>>rnk>>colorID;
					rarityRankColor[readNumber]={rnk,colorID};
					if((readNumber+1)%10000==0){
						setPosition(4,0);
						cout<<"          "; 
						col(10); 
						cout<<"正在加载…… "; 
						col(); 
						cout<<"| 加载进度："; 
						col(9); 
						cout<<(readNumber+1)/10000<<"%"; 
						col(14); 
						cout<<"                                        \n"; 
						col(); 
						setPosition(6,0);
						col(14); 
						cout<<"          [ "; 
						col(10); 
						for(int j=0;j<=(readNumber+1)/40000;j++) 
							cout<<"-"; 
						cout<<">"; 
						for(int j=0;j<25-(readNumber+1)/40000;j++) 
							cout<<" ";
						col(14);
						cout<<"  ]"; 
						col();
						cout<<"\n";	
					}
				}			
			}else goto NormalLoad;
		}else{
			// ------------------- 重新生成数字排名 -------------------
			NormalLoad:;
			setPosition(2,0);
			cout<<"          "; 
			col(12); 
			cout<<"未找到配置文件 "; 
			col(); 
			cout<<"| "; 
			col(10); 
			cout<<"生成中……                               \n\n";
			cout<<"          "; 
			col(10); 
			cout<<"正在加载…… "; 
			col(); 
			cout<<"| ";
			cout<<"加载进度："; 
			col(9); 
			cout<<"0%"; 
			col();
			cout<<"                                    ";
			cout<<"\n";	
			// ------------------- 计算每个数的贡献 -------------------
			for(int nowNumber=0;nowNumber<=999999;nowNumber++){
				global=nowNumber;
				accom.clear();
				make_check(); 
	//			if(accom.size()<5){
	//				cout<<nowNumber<<"\n";
	//				return 0;
	//			}
				ll sumOfScore=0;
				for(auto v:accom) 
					sumOfScore+=(v.c==0?(ll)(1000/v.r):v.c);
				numList.push_back({-sumOfScore,nowNumber});	
				if((nowNumber+1)%20000==0){
					setPosition(4,0);
					cout<<"          "; 
					col(10); 
					cout<<"正在加载…… "; 
					col(); 
					cout<<"| "; 
					cout<<"加载进度：";
					col(9);
					cout<<(nowNumber+1)/20000<<"%";
					col(); 
					cout<<"\n";	
					setPosition(6,0);
					col(14); 
					cout<<"          [ "; 
					col(10); 
					for(int j=0;j<=(nowNumber+1)/80000;j++) 
						cout<<"-";
					cout<<">"; 
					for(int j=0;j<25-(nowNumber+1)/80000;j++) 
						cout<<" ";
					col(14); 
					cout<<"  ]"; 
					col(); 
					cout<<"\n";	
				}
			}
			sort(numList.begin(),numList.end());
			// ------------------- 生成每个数的排名信息 -------------------
			for(int trueRank=0;trueRank<=999999;trueRank++){
				ld doubleRank=trueRank/10000.00;
				int trueNumber=numList[trueRank].se;
				rarityRankColor[trueNumber]={doubleRank,doubleToColorID(doubleRank/100.00)};
				if(trueRank>0&&numList[trueRank].fi==numList[trueRank-1].fi) // 排名相同，直接继承属性
					rarityRankColor[trueNumber]=rarityRankColor[numList[trueRank-1].se];
				if((trueRank+1)%20000==0){
					setPosition(4,0);
					cout<<"          ";
					col(10);
					cout<<"正在加载…… ";
					col();
					cout<<"| ";
					cout<<"加载进度：";
					col(9);
					cout<<(trueRank+1)/20000+50<<"%";
					col();
					cout<<"\n";	
					setPosition(6,0);
					col(14);
					cout<<"          [ ";
					col(10); 
					for(int j=0;j<=(trueRank+1)/80000+13;j++)
						cout<<"-";
					cout<<">";
					for(int j=0;j<12-(trueRank+1)/80000;j++)
						cout<<" ";
					col(14);
					cout<<"  ]\n";
					col();	
				}
				#ifdef showRankOfNumber
					if(numList[trueRank].fi!=numList[trueRank-1].fi){ 
						cout<<-numList[trueRank].fi<<"，数字 "; 
						col(rarityRankColor[trueNumber].se);
						cout<<v;
						col();
						cout<<" 的排名是 ";
						cout<<rarityRankColor[trueNumber].fi<<"%               \n";
						Sleep(10);
					}
				#endif
			}
			ofstream printC("config.txt");
			printC<<time(0)<<"\n";
			for(int i=0;i<=999999;i++) printC<<rarityRankColor[i].fi<<" "<<rarityRankColor[i].se<<"\n";
		}
	}

	/* 循环：主界面     */ void loop_PreShow(){
		cls(); 
		col(9); cout<<"FishRNG"; col(); cout<<"\n";
		cout<<"\n";
		col(8); cout<<"          ["; col(8); cout<<" ? ? ? ? ? ? "; col(); col(8); cout<<"]"; col(); cout<<"\n";
		cout<<"\n";
		col(12); cout<<" - 注意：上下左右键因为硬件原因会被判定两次"; col(); cout<<"\n";
		col(12); cout<<"         获得最佳体验请调亮屏幕"; col(); cout<<"\n";
		col(12); cout<<"         为了显示正常，请不要在显示动画过程中缩放窗口"; col(); cout<<"\n";
		col(); cout<<"\n";
		col(14); cout<<" - 抽取一个随机的六位数字（可能存在前导零）"; col(); cout<<"\n";
		col(14); cout<<" - 系统会根据一些你所不知道的规则来对数字进行判定"; col(); cout<<"\n";
		cout<<"\n";
		col(); cout<<" - 稀有度如下："; col(); cout<<"\n\n    ";
		int rarityID=0;
		for(auto v:rarityChineseColorID){
			col(); 
			cout<<" "; 
			col(v.second); 
			cout<<v.first; 
			col(); 
			cout<<"  ";
			++rarityID; 
			/*
			if(t>0.400) return 2; // c
			if(t>0.200) return 6; // n
	 		if(t>0.100) return 3; // r
			if(t>0.050) return 5; // e
			if(t>0.010) return 4; // l
			if(t>0.005) return 11; // m
			if(t>0.003) return 12; // u
			if(t>0.001) return 10; // s
			*/
			if(rarityID==3){
				col(8); cout<<"\n     40%+   20%+   10%+\n    ";
			}else if(rarityID==6){
				col(8); cout<<"\n      5%+    1%+  0.5%+\n    ";
			}else if(rarityID==9){
				col(8); cout<<"\n    0.3%+  0.1%+    0%+\n    ";
			}
		}
		cout<<"\n";
		col(14); cout<<" - [ "; col(8);  cout<<"空格键 "; col(); cout<<"- 设置                         "; col(14); cout<<" ]"; col(); cout<<"\n";
		col(14); cout<<" - [ "; col(3);  cout<<"A 键   "; col(); cout<<"- 打开账号相关信息             "; col(14); cout<<" ]"; col(); cout<<"\n";
		col(14); cout<<" - [ "; col(12);  cout<<"E 键   "; col(); cout<<"- 打开成就相关信息             "; col(14); cout<<" ]"; col(); cout<<"\n";
		col(14); cout<<" - [ "; col(11); cout<<"任意键 "; col(); cout<<"- 抽取数字                     "; col(14); cout<<" ]"; col(); cout<<"\n";
		cout<<"\n";		
	}
	double printSpeed=1;
	bool showInt=0;
	/* 循环：设置       */ void loop_Setting(){
		// ------------------- 设置页面显示 -------------------
		cls();
		setting:;
		setPosition(0,0);
		col(9); cout<<"FishRNG"; col(); cout<<"\n";
		cout<<"\n";
		col(8);	cout<<" # 设置"; col(); cout<<"\n";
		cout<<"\n";
		col(14); cout<<" - 抽取速度："; col(10); cout<<"x"<<printSpeed; col(11); cout<<" <- ->    "; col(); cout<<"\n";
		cout<<"\n";
		col(14); cout<<" - 概率自动取整输出："; col((showInt?10:12)); cout<<(showInt?"ON":"OFF"); col(11); cout<<" + -    "; col(); cout<<"\n";
		cout<<"\n";
		col(11); cout<<" [ --- 按下 B 键返回 --- ]"; col(); cout<<"\n";
		cout<<"\n";
		// ------------------- 页面内等待操作 -------------------
		int keyboardSet=getch();
		if(keyboardSet==224){
			keyboardSet=getch(); // 注意上下左右有两次操作
			if(keyboardSet==75){
				printSpeed-=0.25;
				printSpeed=max(printSpeed,0.25);
				goto setting;
			}else if(keyboardSet==77){
				printSpeed+=0.25;
				printSpeed=min(printSpeed,10.00);
				goto setting;
			}
		}else if(keyboardSet==43||keyboardSet==61){
			showInt=1;
			goto setting;
		}else if(keyboardSet==45){
			showInt=0;
			goto setting;
		}else if(keyboardSet==98) return;
		goto setting;
	}	
	string userName;
	vector<int> usedNumber;
	/* 循环：账号       */ void loop_Account(){ // 账号界面（未完善）
		// ------------------- 导入账号界面显示 -------------------
		cls();
		login:;
		setPosition(0,0);
		col(9); cout<<"FishRNG"; col(); cout<<"\n";
		cout<<"\n";
		col(8);	cout<<" # 账号界面"; col(); cout<<"\n";
		cout<<"\n";
		ifstream Account("account.txt");
		string readName;
		Account>>readName;
		if(readName==""){
			col(14); cout<<" - 检测到的用户："; col(12); cout<<"未找到用户";   col(); cout<<"\n";
		}else{
			col(14); cout<<" - 检测到的用户："; col(10); cout<<readName;   col(); cout<<"\n";
		}
		cout<<"\n";
		col(11); cout<<" [ --- 按下 B 键返回 --- ]"; col(); cout<<"\n";
		// ------------------- 页面内等待操作 -------------------
		int keyboardLogin=getch();
		if(keyboardLogin==98) return;
		goto login;
		// ------------------- 导出账号界面显示 -------------------
		cls();
		logout:;
		setPosition(0,0);
		col(9); cout<<"FishRNG"; col(); cout<<"\n";
		cout<<"\n";
		col(8);	cout<<" # 导出账号界面"; col(); cout<<"\n";
		cout<<"\n";
		if(userName==""){
			col(14); cout<<" - 目前使用用户："; col(12); cout<<"未命名";   col(); cout<<"\n";
		}else{
			col(14); cout<<" - 目前使用用户："; col(0); cout<<userName;   col(); cout<<"\n";
		}
		cout<<"\n";
		col(11); cout<<" [ --- 按下 B 键返回 --- ]"; col(); cout<<"\n";
		// ------------------- 页面内等待操作 -------------------
		int keyboardLogout=getch();
		if(keyboardLogin==98) return;
		goto logout;		
	}
	vector<rval>nowSearch, nowFilter;
	bitset<10005>chose;
	/* 循环：筛选器     */ void loop_ShowAccom(){
		// ------------------- 显示全部类型的成就 -------------------
		cls();
		acc:;
		chose.reset();
		bool filterMode=0, needCLS=0;
		int nowBegin=0, nowShowAccom=0, indexPlace=0;
		int backPlace=0, frontPlace;
		ReshowAccom:;
		if(needCLS){ cls(); needCLS=0; }
		setPosition(0,0);
		col(9); cout<<"FishRNG"; col(); cout<<"\n";
		cout<<"\n";
		col(8);	cout<<" # 成就界面"; col(); cout<<"\n\n";
		cout<<"\n";
		setPosition(4,0);
		if(!filterMode){
			col(8); cout<<" - 左右滚动以切换你的显示页面 - ["; col(10); cout<<nowShowAccom+1; col(8); cout<<" / "; col(10); cout<<TYPES; col(8); cout<<" + "; col(11); cout<<"Filter"; col(8); cout<<"] \n"; col();
		}else{
			col(8); cout<<" - "; col(11); cout<<"[空格键]"; col(8); cout<<" 选中，"; col(11); cout<<"[A 键]"; col(8); cout<<" 全选，"; col(11); cout<<"[C 键]";  col(8); cout<<" 清空选择\n"; col();
		}
		setPosition(2,75);
		col(11); cout<<" [F] "; col(9); cout<<"筛选类别: ";
		col((filterMode)?10:12);
		cout<<(filterMode?" [开]":" [关]"); 
		col();
		setPosition(4,75);
		if(!filterMode){
			col((nowShowAccom!=0)?10:8);
			cout<<" [←]";
			col((nowShowAccom!=TYPES-1)?10:8);
			cout<<" [→]";
		}else{
			col(8);
			cout<<" [←]";
			col(8);
			cout<<" [→]";				
		}
		col();
		if(!filterMode){
			nowSearch=searchContent[nowShowAccom];
			if(nowShowAccom==TYPES) nowSearch=nowFilter;
			backPlace=nowSearch.size();
			frontPlace=max(0,backPlace-5);
			setPosition(6,0);
			col(14);
			if(nowShowAccom!=TYPES)
				cout<<nowShowAccom+1<<". "<<accomName[nowShowAccom]<<"                         \n";
			else{
				col(11);
				cout<<"[Filter] ";
				col(14);
				cout<<accomName[nowShowAccom]<<"                         \n";
			}
			for(int i=0;i<5;i++)                 
				setPosition(8+4*i,0),  cout<<"                                                                                                                    ",
				setPosition(8+4*i+1,0),cout<<"                                                                                                                    ";
			// ------------------- 滚动渲染成就 -------------------
			for(int i=backPlace-nowBegin-1;i;i=0){
				int lastAccom=i, nowShow=0;
				// ------------------- 重新渲染成就 -------------------
				for(auto v:nowSearch){ 
					if(nowShow>i-5){
						bool firShow=(lastAccom==0);
						int lineNumber=8+4*lastAccom;
						setPosition(lineNumber,0); 
						col(14);
						string printRank=to_string(lastAccom+nowBegin+1);
						while(printRank.size()<3) printRank=" "+printRank;
						cout<<" Rank ";
						col(doubleToColorID(v.r)); cout<<printRank;
						col(14); cout<<". ";
						col(doubleToColorID(v.r));
						cout<<"["; cout<<rarityColorIDChinese[doubleToColorID(v.r)]; cout<<"]";
						col(14);
						cout<<" [ ";
						col(doubleToColorID(v.r));
						cout<<v.d; 
						col(14);  
						cout<<" ]                                            ";
						cout<<"\n";
						col(8);
						cout<<"           ";
						cout<<v.s<<"                                                                              ";
						setPosition(lineNumber,75);
						col(10);
						cout<<" +";
						string jnum=to_string((v.c==0?(ll)(1000/v.r):v.c));
						int k=0, sz=jnum.size();
						for(auto v:jnum){
							if(k!=0&&k!=(sz-1)&&(sz-k)%3==0) cout<<",";
							cout<<v;
							++k;
						}
						cout<<"               \n";
						col(2);
						setPosition(lineNumber+1,75);
						cout<<" "<<(showInt?((int)(v.r*100)):(v.r*100))<<"%                                                                          "; 
						cout<<"\n";
						col();
						if(firShow){
							setPosition(lineNumber-2,75);
							col((nowBegin!=0)?10:8);
							cout<<" [↑]";
							col((nowBegin!=frontPlace)?10:8);
							cout<<" [↓]";
							col();
						}
					}
					lastAccom--;
					if(lastAccom<0) break;
					nowShow++;
				}
			}		
		}else{
			backPlace=TYPES;
			frontPlace=max(0,backPlace-10);
			setPosition(6,0);
			col(14);
			cout<<" - 筛选器                                   \n";
//				for(int i=0;i<5;i++) 
//					setPosition(8+2*i,0),  cout<<"                                                               ",
//					setPosition(8+2*i+1,0),cout<<"                                                               ";
			// ------------------- 滚动渲染成就 -------------------
			for(int i=backPlace-nowBegin-1;i;i=0){
				int lastAccom=i, nowShow=0;
				// ------------------- 重新渲染成就 -------------------
				for(auto v:accomShown){ 
					if(nowShow>i-10){
						bool firShow=(lastAccom==0);
						int lineNumber=8+2*lastAccom;
						setPosition(lineNumber,0); 
						if(v.fi==indexPlace){
							col(10);
							cout<<"==> ";
						}else{
							col(14);
							cout<<"  - ";
						}
						bool isc=chose[v.fi+1];
						col(isc?10:12); cout<<"["<<(isc?"Y":"N")<<"] "; col();
						col((v.fi==indexPlace)?10:14);
						cout<<"["; cout<<v.fi+1; cout<<"]";
						col((v.fi==indexPlace)?10:14);
						cout<<" [ ";
						col(15);
						cout<<v.se; 
						col((v.fi==indexPlace)?10:14); 
						cout<<" ]                                  ";
						cout<<"\n";
						col(8);
						cout<<"      ";
						cout<<"                                   ";
						col();
						if(firShow){
							setPosition(lineNumber-2,75);
							col((indexPlace!=0)?10:8);
							cout<<" [↑]";
							col((indexPlace!=TYPES-1)?10:8);
							cout<<" [↓]";
							col();
						}
					}
					lastAccom--;
					if(lastAccom<0) break;
					nowShow++;
				}
			}						
		}
		setPosition(28,0);	
		col(11); cout<<" [ --- 按下 B 键返回 --- ]"; col(); cout<<"\n";
		// ------------------- 等待用户操作 -------------------
		ReshowAccomRetry:;
		int keyboardSet=getch();
		if(!filterMode){
			if(keyboardSet==224){
				keyboardSet=getch(); // 注意上下左右有两次操作
				if(keyboardSet==72){
					if(nowBegin==0) goto ReshowAccomRetry;
					nowBegin--;
					nowBegin=max(nowBegin,0);
					goto ReshowAccom;
				}else if(keyboardSet==80){
					if(nowBegin==frontPlace) goto ReshowAccomRetry;
					nowBegin++;
					nowBegin=min(nowBegin,frontPlace);
					goto ReshowAccom;
				}else if(keyboardSet==75){
					nowShowAccom--;
					nowBegin=0;
					if(nowShowAccom==-1) nowShowAccom=TYPES;
					goto ReshowAccom;
				}else if(keyboardSet==77){
					nowShowAccom++;
					nowBegin=0;
					if(nowShowAccom==TYPES+1) nowShowAccom=0;
					goto ReshowAccom;
				}
			}else if(keyboardSet==119){
				if(nowBegin==0) goto ReshowAccomRetry;
				nowBegin--;
				nowBegin=max(nowBegin,0);
				goto ReshowAccom;				
			}else if(keyboardSet==115){
				if(nowBegin==frontPlace) goto ReshowAccomRetry;
				nowBegin++;
				nowBegin=min(nowBegin,frontPlace);
				goto ReshowAccom;				
			}else if(keyboardSet==97){
				nowShowAccom--;
				nowBegin=0;
				if(nowShowAccom==-1) nowShowAccom=TYPES;
				goto ReshowAccom;
			}else if(keyboardSet==100){
				nowShowAccom++;
				nowBegin=0;
				if(nowShowAccom==TYPES+1) nowShowAccom=0;
				goto ReshowAccom;
			}
		}else{
			if(keyboardSet==224){
				keyboardSet=getch(); // 注意上下左右有两次操作
				if(keyboardSet==72){
					if(nowBegin==0&&indexPlace==0) goto ReshowAccomRetry;
					nowBegin--;
					indexPlace--;
					indexPlace=max(indexPlace,0);
					nowBegin=max(nowBegin,0);
					goto ReshowAccom;
				}else if(keyboardSet==80){
					if(nowBegin==frontPlace&&indexPlace==TYPES-1) goto ReshowAccomRetry;
					nowBegin++;
					indexPlace++;
					nowBegin=min(nowBegin,frontPlace);
					indexPlace=min(indexPlace,TYPES-1);
					goto ReshowAccom;
				}
			}else if(keyboardSet==119){
				if(nowBegin==0&&indexPlace==0) goto ReshowAccomRetry;
				nowBegin--;
				indexPlace--;
				indexPlace=max(indexPlace,0);
				nowBegin=max(nowBegin,0);
				goto ReshowAccom;				
			}else if(keyboardSet==115){
				if(nowBegin==frontPlace&&indexPlace==TYPES-1) goto ReshowAccomRetry;
				nowBegin++;
				indexPlace++;
				nowBegin=min(nowBegin,frontPlace);
				indexPlace=min(indexPlace,TYPES-1);
				goto ReshowAccom;				
			}else if(keyboardSet==32){
				chose[indexPlace+1].flip();
				nowFilter.clear();
				for(int i=1;i<=TYPES;i++)
					if(chose[i]) 
						for(auto v:searchContent[i-1]) nowFilter.push_back(v);
				sort(nowFilter.begin(),nowFilter.end(),cmpAccom);
				goto ReshowAccom;
			}else if(keyboardSet==97){
				chose.set();
				nowFilter.clear();
				for(int i=1;i<=TYPES;i++)
					if(chose[i]) 
						for(auto v:searchContent[i-1]) nowFilter.push_back(v);
				sort(nowFilter.begin(),nowFilter.end(),cmpAccom);
				goto ReshowAccom;
			}else if(keyboardSet==99){
				chose.reset();
				nowFilter.clear();
				for(int i=1;i<=TYPES;i++)
					if(chose[i]) 
						for(auto v:searchContent[i-1]) nowFilter.push_back(v);
				sort(nowFilter.begin(),nowFilter.end(),cmpAccom);
				goto ReshowAccom;
			}
		}
		if(keyboardSet==102){
			filterMode=!filterMode;
			indexPlace=nowBegin=0;
			if(!filterMode) nowShowAccom=TYPES; // 自动跳转
			needCLS=1;
			goto ReshowAccom;
		}
		// ------------------- 页面内等待操作 -------------------
		if(keyboardSet==98) return;
		goto ReshowAccomRetry;
	}
	/* 循环：抽取界面   */ void loop_Play(){
		// ------------------- 用户进行抽取数字 -------------------
		HideCursor();
		cls();
		col(9); cout<<"FishRNG"; col(); cout<<"\n";
		cout<<"\n";
		col(8); cout<<"          ["; col(8); cout<<" ? ? ? ? ? ? "; col(); col(8); cout<<"]"; col(); cout<<"\n";
		cout<<"\n";
		// ------------------- 随机数字 -------------------
		int result=(Dice==-1?fishRand(rander):Dice);
		string stringResult=to_string(result); 
		global=result;
		while(stringResult.size()!=6) stringResult=" "+stringResult; // 补足六位数
		// ------------------- 随机动画渲染 -------------------
		col(11); 
		for(int i=0;i<6;i++){
			int showTime=500/printSpeed;
			for(int j=0;j<=showTime;j++){
				for(int k=i+1;k<6;k++){
					setPosition(2,12+k*2);
					col(8);
					cout<<rand()%10;
					col();
				}
				if(j%20==0)
					Sleep(50);
				if(j<showTime&&j>showTime*0.75){
					setPosition(2,12+i*2);
					col(14);
					cout<<stringResult[i]; 
				}else if(j==showTime){
					setPosition(2,12+i*2);
					col(7);
					cout<<stringResult[i]; 	
				}else{
					setPosition(2,12+i*2);
					col(8); 
					cout<<rand()%10; 
					col();
				}
			}
		}
		// ------------------- 显示结果 -------------------
		Sleep(500);
		setPosition(4,0);
		col(14); 
		cout<<"你所抽中的数字是：";
		col(); cout<<result<<"\n";
		cout<<"\n";
		col(11); cout<<" [ --- 按下任意键分析数字 --- ]"; col(); cout<<"\n";
		cout<<"\n";
		getch();
		// ------------------- 分析数字 -------------------
		setPosition(6,0); cout<<"                                         "; col(); cout<<"\n";
		accom.clear();
		make_check();
		sort(accom.begin(),accom.end(),rarity_cmp);
		// ------------------- 成就渲染 -------------------
		ll sumScore=0;
		for(int i=0;i<accom.size();i++){
			int lastAccom=i, nowShow=0;
			ll lastScore=sumScore;
			sumScore=0;
			bool zipped=0;
			// ------------------- 重新渲染成就 -------------------
			for(auto v:accom){ 
				if(nowShow>i-5){
					int lineNumber=8+4*lastAccom;
					setPosition(lineNumber,0); 
					col(14);
					cout<<"  -   ";
					col(doubleToColorID(v.r));
					cout<<"["; cout<<rarityColorIDChinese[doubleToColorID(v.r)]; cout<<"]";
					col(14);
					cout<<" [ ";
					col(doubleToColorID(v.r));
					cout<<v.d; 
					col(14); 
					cout<<" ]                                                     ";
					cout<<"\n";
					col(8);
					cout<<"  -   ";
					cout<<v.s<<"                                                                     ";
					setPosition(lineNumber,75);
					col(10);
					cout<<" +";
					string jnum=to_string((v.c==0?(ll)(1000/v.r):v.c));
					int k=0, sz=jnum.size();
					for(auto v:jnum){
						if(k!=0&&k!=(sz-1)&&(sz-k)%3==0) cout<<",";
						cout<<v;
						++k;
					}
					cout<<"                 \n";
					col(2);
					setPosition(lineNumber+1,75);
					cout<<" "<<(showInt?((int)(v.r*100)):(v.r*100))<<"%                                   "; 
					cout<<"\n";
					col();
				}else zipped=1;
				sumScore+=(v.c==0?(ll)(1000/v.r):v.c);
				lastAccom--;
				if(lastAccom<0) break;
				nowShow++;
			}
			// ------------------- 总分更新渲染 -------------------
			for(ll j=lastScore;j<=sumScore;j+=(sumScore-lastScore+1)/(10000/printSpeed+1)+1){
				setPosition(6,0);
				col(14); cout<<"你所得到积分："; col(10); 
				string jnum=to_string(j);
				int k=0, sz=jnum.size();
				for(auto v:jnum){
					if(k!=0&&k!=(sz-1)&&(sz-k)%3==0) cout<<",";
					cout<<v;
					++k;
				}
				if(!zipped){ cout<<"                                                                   \n"; col(); }
				else{ col(8); cout<<"（已折叠 "<<i+1-5<<" 个成就）                       \n"; col(); } 
			}
			setPosition(6,0);
			col(14); cout<<"你所得到积分："; col(10);
			string jnum=to_string(sumScore);
			int k=0, sz=jnum.size();
			for(auto v:jnum){
				if(k!=0&&k!=(sz-1)&&(sz-k)%3==0) cout<<",";
				cout<<v;
				++k;
			}
			if(!zipped){ cout<<"                                                                              \n"; col(); }
			else{ col(8); cout<<"（已折叠 "<<i+1-5<<" 个成就）                       \n"; col(); } 
			Sleep((1000/printSpeed+1));
		}
		// ------------------- 结束数字颜色变动 -------------------
		setPosition(2,0);
		int resultLvl=rarityRankColor[result].se; 
		col(resultLvl);
		cout<<"          [ "; 
		for(int i=0;i<6;i++)
			cout<<stringResult[i]<<" ";
		cout<<"]";
		col(); cout<<"\n";
		setPosition(4,0);
		col();
		cout<<" - 数字等级：";
		col(resultLvl);
		cout<<"["; cout<<rarityColorIDChinese[resultLvl]; cout<<"]"; 
		col(); 
		cout<<" TOP ";
		col(resultLvl); cout<<(showInt?((int)rarityRankColor[result].fi):(rarityRankColor[result].fi))<<"%";
		col(); cout<<"（并列）"; 
		cout<<"                                          \n";
		int backPlace=accom.size(), frontPlace=max(backPlace-5,0);
		setPosition(8+4*min(5,backPlace),0);
		col(11); cout<<" [ --- 按下 B 键返回 --- ]"; col(); cout<<"\n";
		setPosition(6,0);
		col(14); cout<<"你所得到积分："; col(10);
		string jnum=to_string(sumScore);
		int k=0, sz=jnum.size();
		for(auto v:jnum){
			if(k!=0&&k!=(sz-1)&&(sz-k)%3==0) cout<<",";
			cout<<v;
			++k;
		}
		col(8); cout<<"（滚动显示已折叠成就）                       \n"; col();
		int nowBegin=0;
		Reshow:;
		for(int i=backPlace-nowBegin-1;i;i=0){
			int lastAccom=i, nowShow=0;
			// ------------------- 重新渲染成就 -------------------
			for(auto v:accom){ 
				if(nowShow>i-5){
					bool firShow=(lastAccom==0);
					int lineNumber=8+4*lastAccom;
					setPosition(lineNumber,0); 
					col(14);
					cout<<"  -   ";
					col(doubleToColorID(v.r));
					cout<<"["; cout<<rarityColorIDChinese[doubleToColorID(v.r)]; cout<<"]";
					col(14);
					cout<<" [ ";
					col(doubleToColorID(v.r));
					cout<<v.d; 
					col(14); 
					cout<<" ]                                                     ";
					cout<<"\n";
					col(8);
					cout<<"  -   ";
					cout<<v.s<<"                                                                     ";
					setPosition(lineNumber,75);
					col(10);
					cout<<" +";
					string jnum=to_string((v.c==0?(ll)(1000/v.r):v.c));
					int k=0, sz=jnum.size();
					for(auto v:jnum){
						if(k!=0&&k!=(sz-1)&&(sz-k)%3==0) cout<<",";
						cout<<v;
						++k;
					}
					cout<<"                      \n";
					col(2);
					setPosition(lineNumber+1,75);
					cout<<" "<<(showInt?((int)(v.r*100)):(v.r*100))<<"%                           "; 
					cout<<"\n";
					col();
					if(firShow){
						setPosition(lineNumber-2,75);
						col((nowBegin!=0)?10:8);
						cout<<" [↑]";
						col((nowBegin!=frontPlace)?10:8);
						cout<<" [↓]";
						col();
					}
				}
				lastAccom--;
				if(lastAccom<0) break;
				nowShow++;
			}
		}		
		ReshowRetry:;	
		int keyboardSet=getch();
		if(keyboardSet==224){
			keyboardSet=getch(); // 注意上下左右有两次操作
			if(keyboardSet==72){
				if(nowBegin==0) goto ReshowRetry;
				nowBegin--;
				nowBegin=max(nowBegin,0);
				goto Reshow;
			}else if(keyboardSet==80){
				if(nowBegin==frontPlace) goto ReshowRetry;
				nowBegin++;
				nowBegin=min(nowBegin,frontPlace);
				goto Reshow;
			}
		}else if(keyboardSet==119){
			if(nowBegin==0) goto ReshowRetry;
			nowBegin--;
			nowBegin=max(nowBegin,0);
			goto Reshow;				
		}else if(keyboardSet==115){
			if(nowBegin==frontPlace) goto ReshowRetry;
			nowBegin++;
			nowBegin=min(nowBegin,frontPlace);
			goto Reshow;				
		}else if(keyboardSet==98)
			return;
		goto ReshowRetry;
	}
}

using namespace M;

int main(){
	// ------------------- 初始化光标文字显示 -------------------
	main_InitShow();
	// -------------------     加载动画显示   -------------------
	main_LoadShow();
	// ------------------- 初始化成就分类系统 -------------------
	main_InitAccomSearch();
	main_InitNumberConfig();
	// -------------------     程序主循环     -------------------
	while(1){
		Sleep(50);
		// -------------------   界面显示   -------------------
		loop_PreShow();
		// ------------------- 等待用户操作 -------------------
		int keyboard=getch();
		if(keyboard==32)       loop_Setting();
		else if(keyboard==97)  loop_Account();
		else if(keyboard==101) loop_ShowAccom();
		else                   loop_Play();
	}
	return 0;
}