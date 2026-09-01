#ifndef F_h
#define F_h

#define ld long double
#define ll long long
#define fi first
#define se second
#define cls() system("cls")
#define isOnEnter ((GetAsyncKeyState(VK_RETURN)&0x8000))

using namespace std;

namespace F{ // 成就计算区
	struct rval{ ld r; string d,s; ll c; };
    bool flag_zero=0,flag_include_number=0,flag_special_two=0,
    flag_911=0,flag_666=0,flag_777=0,flag_pi=0,flag_e=0,
    flag_nailong=0,flag_homo=0,flag_important_days=0;
    bool flag_continues=0,flag_same=0,flag_build=0,
    flag_symmetry=0,flag_slope=0,flag_odd_even=0;
    bool flag_special_kind=0,flag_divisible_self=0,
    flag_multiple=0,flag_power=0;
    bool flag_end_0=0,flag_end_5=0,flag_digit_size=0;
    //包含特殊数字
    namespace c_0{
		const ld rarity_d=0.468559;
		string description="虚无之数";
		const string success="包含1个“0”";
		bool ck(int x){
            if(!~x) return false;
			while(x){
                if(x%10==0) return 1;
                x/=10;
            }
			return 0;
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_00{
		const ld rarity_d=0.078282;
		string description="虚无之数*2";
		const string success="包含2个“0”";
		bool ck(int x){
            if(!~x) return false;
            int fl=0;
			while(x) fl+=!(x%10),x/=10;
			return (fl>=2);
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_000{
		const ld rarity_d=0.008046;
		string description="虚无之数*3";
		const string success="包含3个“0”";
		bool ck(int x){
            if(!~x) return false;
            int fl=0;
			while(x) fl+=!(x%10),x/=10;
			return (fl>=3);
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_0000{
		const ld rarity_d=0.000423;
		string description="虚无之数*4";
		const string success="包含4个“00”";
		bool ck(int x){
            if(!~x) return false;
            int fl=0;
			while(x) fl+=!(x%10),x/=10;
			return (fl>=4);
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_00000{
		const ld rarity_d=0.000009;
		string description="虚无之数*5";
		const string success="包含5个“00”";
		bool ck(int x){
            if(!~x) return false;
            int fl=0;
			while(x) fl+=!(x%10),x/=10;
			return (fl>=5);
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_single_0{
        const ld rarity_d=0.000001;
        string description="完美结局";
        const string success="0";
        bool ck(int x){
            if(!~x) return false;
            return !x;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_0__0{
		const ld rarity_d=0.013851;
		string description="(QWQ)";
		const string success="有且仅有中间隔了两个位置的两个“0”";
		bool ck(int x){
            if(!~x) return false;
            if(x<1000) return 0;
            const string s=to_string(x);
            int sz=s.size(),cnt=0;
            for(int i = 0;i<sz;++i) cnt+=(s[i]=='0');
            return 0;
            for(int i = 0;i+3<sz;++i)
                if(s[i]=='0'&&s[i+3]=='0') return 1;
            return 0;
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_1{
		const ld rarity_d=0.468559;
		string description="原初之数";
		const string success="包含一个“1”";
		bool ck(int x){
            if(!~x) return false;
			while(x){
                if(x%10==1) return 1;
                x/=10;
            }
			return 0;
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_2{
		const ld rarity_d=0.468559;
		string description="偶数之母";
		const string success="包含一个“2”";
		bool ck(int x){
            if(!~x) return false;
			while(x){
                if(x%10==2) return 1;
                x/=10;
            }
			return 0;
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_3{
		const ld rarity_d=0.468559;
		string description="pi的近似值";
		const string success="包含一个“3”";
		bool ck(int x){
            if(!~x) return false;
			while(x){
                if(x%10==3) return 1;
                x/=10;
            }
			return 0;
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_4{
		const ld rarity_d=0.468559;
		string description="偶数之母^2";
		const string success="包含一个“4”";
		bool ck(int x){
            if(!~x) return false;
			while(x){
                if(x%10==4) return 1;
                x/=10;
            }
			return 0;
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_5{
		const ld rarity_d=0.468559;
		string description="五行轮回";
		const string success="包含一个“5”";
		bool ck(int x){
            if(!~x) return false;
			while(x){
                if(x%10==5) return 1;
                x/=10;
            }
			return 0;
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_6{
		const ld rarity_d=0.468559;
		string description="六六大顺";
		const string success="包含一个“6”";
		bool ck(int x){
            if(!~x) return false;
			while(x){
                if(x%10==6) return 1;
                x/=10;
            }
			return 0;
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_7{
		const ld rarity_d=0.468559;
		string description="冷酷的质数";
		const string success="包含一个“7”";
		bool ck(int x){
            if(!~x) return false;
			while(x){
                if(x%10==7) return 1;
                x/=10;
            }
			return 0;
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_8{
		const ld rarity_d=0.468559;
		string description="偶数之母^3";
		const string success="包含一个“8”";
		bool ck(int x){
            if(!~x) return false;
			while(x){
                if(x%10==8) return 1;
                x/=10;
            }
			return 0;
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_9{
		const ld rarity_d=0.468559;
		string description="轮回终结之数";
		const string success="包含一个“9”";
		bool ck(int x){
            if(!~x) return false;
			while(x){
                if(x%10==9) return 1;
                x/=10;
            }
			return 0;
		}
		rval suc(){ return {rarity_d,description,success}; }
    }
	namespace c_67{
		const ld rarity_d=0.039700;
		string description="676767676767676767676767676767676767";
		const string success="包含一个“67”";
		bool ck(int x){
            if(!~x) return false;
			string s=to_string(x);
			for(int i=1;i<(int)s.size();i++)
				if(s[i-1]=='6'&&s[i]=='7') return 1;
			return 0;
		}
		rval suc(){ return {rarity_d,description,success}; }
	}
    namespace c_91{
        const ld rarity_d=0.039700;
        string description="91其实是互联网表层";
        const string success="包含一个“91”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=1;i<(int)s.size();i++)
                if(s[i-1]=='9'&&s[i]=='1') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_78{
        const ld rarity_d=0.039700;
        string description="作者有的";
        const string success="包含一个“78”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=1;i<(int)s.size();i++)
                if(s[i-1]=='7'&&s[i]=='8') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_13{
        const ld rarity_d=0.039700;
        string description="作者没有的";
        const string success="包含一个“13”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=1;i<(int)s.size();i++)
                if(s[i-1]=='1'&&s[i]=='3') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_911{
        const ld rarity_d=0.003700;
        string description="双子塔 <==中东飞行员";
        const string success="包含一个“911”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=2;i<(int)s.size();i++)
                if(s[i-2]=='9'&&s[i-1]=='1'&&s[i]=='1') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_911911{
        const ld rarity_d=0.000001;
        string description="真正的双子塔";
        const string success="包含一个“911911”";
        bool ck(int x){
            if(!~x) return false;
            return (x==911911);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_666{
        const ld rarity_d=0.003700;
        string description="恶魔";
        const string success="包含一个“666”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=2;i<(int)s.size();i++)
                if(s[i-2]=='6'&&s[i-1]=='6'&&s[i]=='6') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_666666{
        const ld rarity_d=0.000001;
        string description="老铁6爆了";
        const string success="包含一个“666666”";
        bool ck(int x){
            if(!~x) return false;
            return (x==666666);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_777{
        const ld rarity_d=0.003700;
        string description="老虎机中大奖了！！！(3)";
        const string success="包含一个“777”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=2;i<(int)s.size();i++)
                if(s[i-2]=='7'&&s[i-1]=='7'&&s[i]=='7') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_7777{
        const ld rarity_d=0.000280;
        string description="老虎机中大奖了！！！！(4)";
        const string success="包含一个“7777”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=3;i<(int)s.size();i++)
                if(s[i-3]=='7'&&s[i-2]=='7'&&s[i-1]=='7'&&s[i]=='7') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_77777{
        const ld rarity_d=0.000019;
        string description="老虎机中大奖了！！！！！(5)";
        const string success="包含一个“77777”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=4;i<(int)s.size();i++)
                if(s[i-4]=='7'&&s[i-3]=='7'&&s[i-2]=='7'&&s[i-1]=='7'&&s[i]=='7') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_777777{
        const ld rarity_d=0.000001;
        string description="大型老虎机！！！！！！";
        const string success="777777";
        bool ck(int x){
            if(!~x) return false;
            return (x==777777);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
	namespace c_58{
        const ld rarity_d=0.039700;
        string description="58同城";
        const string success="包含一个“58”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=1;i<(int)s.size();i++)
                if(s[i-1]=='5'&&s[i]=='8') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_pi_3{
        const ld rarity_d=0.003999;
        string description="pi≈3.14";
        const string success="包含一个“314”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=2;i<(int)s.size();i++)
                if(s[i-2]=='3'&&s[i-1]=='1'&&s[i]=='4') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_pi_4{
        const ld rarity_d=0.000300;
        string description="pi≈3.141";
        const string success="包含一个“3141”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=3;i<(int)s.size();i++)
                if(s[i-3]=='3'&&s[i-2]=='1'&&s[i-1]=='4'&&s[i]=='1') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_pi_5{
        const ld rarity_d=0.000020;
        string description="pi≈3.1415";
        const string success="包含一个“31415”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=4;i<(int)s.size();i++)
                if(s[i-4]=='3'&&s[i-3]=='1'&&s[i-2]=='4'&&s[i-1]=='1'&&s[i]=='5') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_pi{
        const ld rarity_d=0.000001;
        string description="pi≈3.14159";
        const string success="包含一个“314159”";
        bool ck(int x){
            if(!~x) return false;
            return (x==314159);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_e_3{
        const ld rarity_d=0.003999;
        string description="e≈2.71";
        const string success="包含一个“271”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=2;i<(int)s.size();i++)
                if(s[i-2]=='2'&&s[i-1]=='7'&&s[i]=='1') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_e_4{
        const ld rarity_d=0.000300;
        string description="e≈2.718";
        const string success="包含一个“2718”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=3;i<(int)s.size();i++)
                if(s[i-3]=='2'&&s[i-2]=='7'&&s[i-1]=='1'&&s[i]=='8') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_e_5{
        const ld rarity_d=0.000020;
        string description="e≈2.7182";
        const string success="包含一个“27182”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=4;i<(int)s.size();i++)
                if(s[i-4]=='2'&&s[i-3]=='7'&&s[i-2]=='1'&&s[i-1]=='8'&&s[i]=='2') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_e{
        const ld rarity_d=0.000001;
        string description="e≈2.71828";
        const string success="包含一个“271828”";
        bool ck(int x){
            if(!~x) return false;
            return (x==271828);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    
    namespace c_nailong_3{
        const ld rarity_d=0.003999;
        string description="啊哈哈";
        const string success="包含一个“233”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=2;i<(int)s.size();i++)
                if(s[i-2]=='2'&&s[i-1]=='3'&&s[i]=='3') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_nailong_4{
        const ld rarity_d=0.000300;
        string description="啊哈哈哈";
        const string success="包含一个“2333”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=3;i<(int)s.size();i++)
                if(s[i-3]=='2'&&s[i-2]=='3'&&s[i-1]=='3'&&s[i]=='3') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_nailong_5{
        const ld rarity_d=0.000020;
        string description="啊哈哈哈哈";
        const string success="包含一个“23333”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=4;i<(int)s.size();i++)
                if(s[i-4]=='2'&&s[i-3]=='3'&&s[i-2]=='3'&&s[i-1]=='3'&&s[i]=='3') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_nailong{
        const ld rarity_d=0.000001;
        string description="牛来——————";
        const string success="包含一个“233333”";
        bool ck(int x){
            if(!~x) return false;
            return (x==233333);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_1024{
        const ld rarity_d=0.000300;
        string description="2^10 是整十数！";
        const string success="包含一个“1024”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=3;i<(int)s.size();i++)
                if(s[i-3]=='1'&&s[i-2]=='0'&&s[i-1]=='2'&&s[i]=='4') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_2024{
        const ld rarity_d=0.000300;
        string description="窝通关了2048！";
        const string success="包含一个“2048”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=3;i<(int)s.size();i++)
                if(s[i-3]=='2'&&s[i-2]=='0'&&s[i-1]=='4'&&s[i]=='8') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_4096{
        const ld rarity_d=0.000300;
        string description="窝通关了4096！";
        const string success="包含一个“4096”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=3;i<(int)s.size();i++)
                if(s[i-3]=='4'&&s[i-2]=='0'&&s[i-1]=='9'&&s[i]=='6') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_114{
        const ld rarity_d=0.003700;
        string description="好臭（恼";
        const string success="包含一个“114”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=2;i<(int)s.size();i++)
                if(s[i-2]=='1'&&s[i-1]=='1'&&s[i]=='4') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_514{
        const ld rarity_d=0.003700;
        string description="恶臭（恼";
        const string success="包含一个“514”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=2;i<(int)s.size();i++)
                if(s[i-2]=='5'&&s[i-1]=='1'&&s[i]=='4') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_114514{
        const ld rarity_d=0.000001;
        string description="完全的胜利（恼";
        const string success="114514";
        bool ck(int x){
            if(!~x) return false;
            return (x==114514);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_1949{
        const ld rarity_d=0.000300;
        string description="新中国成立！";
        const string success="包含一个“1949”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=3;i<(int)s.size();i++)
                if(s[i-3]=='1'&&s[i-2]=='9'&&s[i-1]=='4'&&s[i]=='9') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_194910{
        const ld rarity_d=0.000001;
        string description="开国大典！";
        const string success="包含一个“194910”";
        bool ck(int x){
            if(!~x) return false;
            return (x==194910);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_1921{
        const ld rarity_d=0.000300;
        string description="中国共产党成立！";
        const string success="包含一个“1921”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=3;i<(int)s.size();i++)
                if(s[i-3]=='1'&&s[i-2]=='9'&&s[i-1]=='2'&&s[i]=='1') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_192107{
        const ld rarity_d=0.000001;
        string description="中国共产党成立之日！";
        const string success="包含一个“192107”";
        bool ck(int x){
            if(!~x) return false;
            return (x==192107);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_1945{
        const ld rarity_d=0.000300;
        string description="中国长达14年的抗战最终取得胜利！";
        const string success="包含一个“1945”";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i=3;i<(int)s.size();i++)
                if(s[i-3]=='1'&&s[i-2]=='9'&&s[i-1]=='4'&&s[i]=='5') return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_194593{
        const ld rarity_d=0.000001;
        string description="抗战胜利纪念日！";
        const string success="包含一个“194593”";
        bool ck(int x){
            if(!~x) return false;
            return (x==194593);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    //特殊数字结构
    namespace c_Arithmetic_progressiont{
        const ld rarity_d=0.000216;
        string description="油然而生的秩序";
        const string success="形成等差数列";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            if(s.size()<2) return 1;
            int t=s[1]-s[0],fl=1;
            for(int i = 2;i<s.size();++i)
                fl&=(s[i]-s[i-1]==t);
            return fl;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Arithmetic_progressiont_l{
        const ld rarity_d=0.004910;
        string description="油然而生的秩序（弱）";
        const string success="排序后形成等差数列";
        bool ck(int x){
            if(!~x) return false;
            string s=to_string(x);
            sort(s.begin(),s.end());
            if(s.size()<2) return 1;
            int t=s[1]-s[0],fl=1;
            for(int i = 2;i<s.size();++i)
                fl&=(s[i]-s[i-1]==t);
            return fl;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Continuous_sequence_d2{
        const ld rarity_d=0.376244;
        string description="！进前再！进前";
        const string success="形成一段长度为（2）的连续的下降的数";
        bool ck(int x){
            if(!~x) return false;
            if(x<10) return 0;
            const string s=to_string(x);
            int sz=s.size();
            for(int i = 0;i<=sz-1;++i){
                bool fl=1;
                for(int j = i+1;j<=i+1;++j)
                    fl&=(s[j]==s[j-1]-1);
                if(fl) return true;
            }
            return false;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Continuous_sequence_d3{
        const ld rarity_d=0.029841;
        string description="！进前再！进前！进前";
        const string success="形成一段长度为（3）的连续的下降的数";
        bool ck(int x){
            if(!~x) return false;
            if(x<100) return 0;
            const string s=to_string(x);
            int sz=s.size();
            for(int i = 0;i<=sz-2;++i){
                bool fl=1;
                for(int j = i+1;j<=i+2;++j)
                    fl&=(s[j]==s[j-1]-1);
                if(fl) return true;
            }
            return false;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Continuous_sequence_d4{
        const ld rarity_d=0.001980;
        string description="！进前再！进前！进前！进前";
        const string success="形成一段长度为（4）的连续的下降的数";
        bool ck(int x){
            if(!~x) return false;
            if(x<1000) return 0;
            const string s=to_string(x);
            int sz=s.size();
            for(int i = 0;i<=sz-3;++i){
                bool fl=1;
                for(int j = i+1;j<=i+3;++j)
                    fl&=(s[j]==s[j-1]-1);
                if(fl) return true;
            }
            return false;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Continuous_sequence_d5{
        const ld rarity_d=0.000115;
        string description="！进前再！进前！进前！进前！进前";
        const string success="形成一段长度为（5）的连续的下降的数";
        bool ck(int x){
            if(!~x) return false;
            if(x<1000) return 0;
            const string s=to_string(x);
            int sz=s.size();
            for(int i = 0;i<=sz-4;++i){
                bool fl=1;
                for(int j = i+1;j<=i+4;++j)
                    fl&=(s[j]==s[j-1]-1);
                if(fl) return true;
            }
            return false;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Continuous_sequence_d6{
        const ld rarity_d=0.000005;
        string description="！前无往一";
        const string success="形成一段长度为（6）的连续的下降的数";
        bool ck(int x){
            if(!~x) return false;
            return (x==654321||x==765432||x==876543||x==987654||x==543210);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Continuous_sequence_u2{
        const ld rarity_d=0.306855;
        string description="前进！再前进！";
        const string success="形成一段长度为（2）的连续的上升的数";
        bool ck(int x){
            if(!~x) return false;
            if(x<10) return 0;
            const string s=to_string(x);
            int sz=s.size();
            for(int i = 0;i<=sz-1;++i){
                bool fl=1;
                for(int j = i+1;j<=i+1;++j)
                    fl&=(s[j]==s[j-1]+1);
                if(fl) return true;
            }
            return false;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Continuous_sequence_u3{
        const ld rarity_d=0.021789;
        string description="前进！前进！再前进！";
        const string success="形成一段长度为（3）的连续的上升的数";
        bool ck(int x){
            if(!~x) return false;
            if(x<100) return 0;
            const string s=to_string(x);
            int sz=s.size();
            for(int i = 0;i<=sz-2;++i){
                bool fl=1;
                for(int j = i+1;j<=i+2;++j)
                    fl&=(s[j]==s[j-1]+1);
                if(fl) return true;
            }
            return false;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Continuous_sequence_u4{
        const ld rarity_d=0.001269;
        string description="前进！前进！前进！再前进！";
        const string success="形成一段长度为（4）的连续的上升的数";
        bool ck(int x){
            if(!~x) return false;
            if(x<1000) return 0;
            const string s=to_string(x);
            int sz=s.size();
            for(int i = 0;i<=sz-3;++i){
                bool fl=1;
                for(int j = i+1;j<=i+3;++j)
                    fl&=(s[j]==s[j-1]+1);
                if(fl) return true;
            }
            return false;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Continuous_sequence_u5{
        const ld rarity_d=0.000054;
        string description="前进！前进！前进！前进！再前进！";
        const string success="形成一段长度为（5）的连续的上升的数";
        bool ck(int x){
            if(!~x) return false;
            if(x<10000) return 0;
            const string s=to_string(x);
            int sz=s.size();
            for(int i = 0;i<=sz-4;++i){
                bool fl=1;
                for(int j = i+1;j<=i+4;++j)
                    fl&=(s[j]==s[j-1]+1);
                if(fl) return true;
            }
            return false;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Continuous_sequence_u6{
        const ld rarity_d=0.000004;
        string description="一往无前！";
        const string success="形成一段长度为（6）的连续的上升的数";
        bool ck(int x){
            if(!~x) return false;
            return (x==123456||x==234567||x==345678||x==456789);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Contiguous_segment{
        const ld rarity_d=0.004411;
        string description="骨肉相连";
        const string success="重排后可以使得每一项是前一项的后继";
        bool ck(int x){
            if(!~x) return false;
            int st=9,sz=0,f[10]={0,0,0,0,0,0,0,0,0,0};
            do{
                st=min(st,x%10),++f[x%10];
                x/=10,++sz;
            }while(x);
            if(10-st<sz) return 0;
            for(int i = 0;i<sz;++i)
                if(!f[i+st]) return 0;
            return 1;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_contiguous_segment_l{
        const ld rarity_d=0.033564;
        string description="骨肉相连（弱）";
        const string success="重排后可以使得每一项减前一项不大于一";
        bool ck(int x){
            if(!~x) return false;
            int st=9,sz=0,f[10]={0,0,0,0,0,0,0,0,0,0};
            do{
                st=min(st,x%10),++f[x%10];
                x/=10,++sz;
            }while(x);
            for(int i = 0,sm=0;sm<sz;++i){
                sm+=f[i+st];
                if(!f[i+st]) return 0;
            }
            return 1;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_all_same{
        const ld rarity_d=0.000055;
        string description="分不清正反面";
        const string success="所有数字一致";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i = 1;i<s.size();++i)
                if(s[i]^s[i-1]) return 0;
            return 1;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_five_same{
        const ld rarity_d=0.002700;
        string description="五连 诛天灭地";
        const string success="有三个相同且相邻的数字";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i = 3;i<s.size();++i)
                if(s[i-3]==s[i-2]&&s[i-2]==s[i-1]&&s[i-1]==s[i]) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_four_same{
        const ld rarity_d=0.002700;
        string description="四连 天下无敌";
        const string success="有三个相同且相邻的数字";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i = 3;i<s.size();++i)
                if(s[i-3]==s[i-2]&&s[i-2]==s[i-1]&&s[i-1]==s[i]) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_three_same{
        const ld rarity_d=0.035919;
        string description="三连 举世皆惊";
        const string success="有三个相同且相邻的数字";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i = 2;i<s.size();++i)
                if(s[i-2]==s[i-1]&&s[i-1]==s[i]) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_double{
        const ld rarity_d=0.402129;
        string description="双连 一战成名";
        const string success="有两个相同且相邻的数字";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            for(int i = 1;i<s.size();++i)
                if(s[i]==s[i-1]) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_lucky_four{
        const ld rarity_d=0.011853;
        string description="幸运四叶草";
        const string success="有四个相同的数字";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            int f[10]={0,0,0,0,0,0,0,0,0,0};
            for(int i = 0;i<s.size();++i)
                if(++f[s[i]-'0']>=4) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_three_like{
        const ld rarity_d=0.149886;
        string description="幸运三叶草";
        const string success="有三个相同的数字";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            int f[10]={0,0,0,0,0,0,0,0,0,0};
            for(int i = 0;i<s.size();++i)
                if(++f[s[i]-'0']>=3) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_arch{
        const ld rarity_d=0.038346;
        string description="拱形";
        const string success="以某一位为分界，左边不降，右边不升";
        bool ck(int x){
            if(!~x) return false;
            if(x<100) return false;
            const string s=to_string(x);
            int i=1,sz=s.size(),fl=0;
            for(;i<sz&&s[i-1]<=s[i];++i);
            for(;i<sz&&s[i-1]>=s[i];++i);
            return (i==sz&&s[0]<s[1]&&s[sz-2]>s[sz-1]);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_pit{
        const ld rarity_d=0.051876;
        string description="凹坑";
        const string success="以某一位为分界，左边不升，右边不降";
        bool ck(int x){
            if(!~x) return false;
            if(x<100) return false;
            const string s=to_string(x);
            int i=1,sz=s.size(),fl;
            for(;i<sz&&s[i-1]>=s[i];++i);
            for(;i<sz&&s[i-1]<=s[i];++i);
            return (i==sz&&s[0]>s[1]&&s[sz-2]<s[sz-1]);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_summit{
        const ld rarity_d=0.016992;
        string description="山峰";
        const string success="以某一位为分界，左边单调升，右边单调降";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            int i=1,sz=s.size(),fl=0;
            for(;i<sz&&s[i-1]<s[i];++i) fl|=1;
            for(;i<sz&&s[i-1]>s[i];++i) fl|=2;
            return (i==sz&&fl==3);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_valley{
        const ld rarity_d=0.023817;
        string description="山谷";
        const string success="以某一位为分界，左边单调降，右边单调升";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);
            int i=1,sz=s.size(),fl=0;
            for(;i<sz&&s[i-1]>s[i];++i) fl|=1;
            for(;i<sz&&s[i-1]<s[i];++i) fl|=2;
            return (i==sz&&fl==3);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_wave{
        const ld rarity_d=0.136950;
        string description="波浪";
        const string success="相邻两个数的大于小于不断变幻";
        bool ck(int x){
            if(!~x) return false;
            if(x<100) return 0;
            const string s=to_string(x);
            int sz=s.size(),fl=(s[0]<s[1]);
            for(int i = 1;i<sz;++i)
                if(s[i-1]==s[i]) return 0;
            for(int i = 1;i<sz;++i)
                if(fl?s[i-1]<s[i]:s[i-1]>s[i]) fl=!fl;
                else return 0;
            return 1;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_palindrome_1{
        const ld rarity_d=0.100009;
        string description="回文（1）";
        const string success="原串与反转串有长度为 1 的公共前缀";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);int sz=s.size();
            if(sz<1) return 0;
            for(int i = 0,j=sz-1;i<1;++i,--j)
                if(s[i]!=s[j]) return 0;
            return 1;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_palindrome_2{
        const ld rarity_d=0.010089;
        string description="回文（2）";
        const string success="原串与反转串有长度为 2 的公共前缀";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);int sz=s.size();
            if(sz<2) return 0;
            for(int i = 0,j=sz-1;i<2;++i,--j)
                if(s[i]!=s[j]) return 0;
            return 1;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_palindrome_3{
        const ld rarity_d=0.001980;
        string description="回文（3）";
        const string success="原串与反转串有长度为 3 的公共前缀";
        bool ck(int x){
            if(!~x) return false;
            const string s=to_string(x);int sz=s.size();
            if(sz<3) return 0;
            for(int i = 0,j=sz-1;i<3;++i,--j)
                if(s[i]!=s[j]) return 0;
            return 1;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_jump_three{
        const ld rarity_d=0.018810;
        string description="位置 135/246 相同（如果有）";
        const string success="原串与反转串有长度为 3 的公共前缀";
        bool ck(int x){
            if(!~x) return false;
            if(x<10000) return 0;
            const string s=to_string(x);
            if(s[0]==s[2]&&s[2]==s[4]) return 1;
            if(x>99999&&s[1]==s[3]&&s[3]==s[5]) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_border_2{
        const ld rarity_d=0.009999;
        string description="next[n]=2";
        const string success="存在长为 2 的真 border";
        bool ck(int x){
            if(!~x) return false;
            if(x<100) return 0;
            const string s=to_string(x);
            int sz=s.size();
            return (s.substr(0,2)==s.substr(sz-2,2));
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_border_3{
        const ld rarity_d=0.000999;
        string description="next[n]=3";
        const string success="存在长为 3 的真 border";
        bool ck(int x){
            if(!~x) return false;
            if(x<1000) return 0;
            const string s=to_string(x);
            int sz=s.size();
            return (s.substr(0,3)==s.substr(sz-3,3));
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_border_4{
        const ld rarity_d=0.000099;
        string description="next[n]=4";
        const string success="存在长为 4 的真 border";
        bool ck(int x){
            if(!~x) return false;
            if(x<10000) return 0;
            const string s=to_string(x);
            int sz=s.size();
            return (s.substr(0,4)==s.substr(sz-4,4));
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_pair1{
        const ld rarity_d=0.831429;
        string description="一对个位数";
        const string success="可以找出起点不同数一样的个位数";
        const int pw[6]={1,10,100,1000,10000,100000};
        bool ck(int x){
            if(!~x) return false;
            int sz=log10(x);
            for(int i = 0;i<=sz;++i)
                for(int j = i+1;j<=sz;++j)
                    if(x/pw[i]%10==x/pw[j]%10) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_pair2{
        const ld rarity_d=0.086139;
        string description="一对两位数";
        const string success="可以找出起点不同数一样的个位数";
        const int pw[6]={1,10,100,1000,10000,100000};
        bool ck(int x){
            if(!~x) return false;
            int sz=log10(x);
            for(int i = 0;i<sz;++i)
                for(int j = i+1;j<sz;++j)
                    if(x/pw[i]%100==x/pw[j]%100) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_pair3{
        const ld rarity_d=0.005212;
        string description="一对三位数位数";
        const string success="可以分割出两个一样的两位数";
        const int pw[6]={1,10,100,1000,10000,100000};
        bool ck(int x){
            if(!~x) return false;
            int sz=log10(x);
            for(int i = 0;i<sz-1;++i)
                for(int j = i+1;j<sz-1;++j)
                    if(x/pw[i]%1000==x/pw[j]%1000) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    //数学
    bitset<1000005> is_prime;
    namespace c_prime{
        const ld rarity_d=0.078498;
        string description="高冷的数字";
        const string success="质数";
        bool ck(int x){
            if(!~x) return false;
            return is_prime[x];
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_perfect_number{
        const ld rarity_d=0.000004;
        string description="完美的数字";
        const string success="是完美数";
        bool ck(int x){
            if(!~x) return false;
            return (x==6||x==28||x==496||x==8128);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_return_number_add{
        const ld rarity_d=0.095428;
        string description="位数加和整除谁，今日方知我是我";
        const string success="是自己各位数之和的倍数";
        bool ck(int x){
            if(!~x) return false;
            int y=x,t=0;
            while(y) t+=(y%10),y/=10;
            if(!t){
                if(!x){description="0*0=0";return 1;}
                return 0;
            }
            if(!(x%t)){
                description="(",y=x;
                description+=to_string(y%10),y/=10;
                while(y) description+="+"+to_string(y%10),y/=10;
                description+=")x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_return_number_mul{
        const ld rarity_d=0.000477;
        string description="位数乘积整除谁，今日方知我是我";
        const string success="是自己各位数之积的倍数";
        bool ck(int x){
            if(!~x) return false;
            int y=x,t=1;
            do{t*=(y%10),y/=10;}while(y);
            if(!t){
                if(!x){description="0*0=0";return 1;}
                return 0;
            }
            if(!(x%t)){
                description="(",y=x;
                description+=to_string(y%10),y/=10;
                do{description+="x"+to_string(y%10),y/=10;}while(y);
                description+=")x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_return_number_xor{
        const ld rarity_d=0.213513;
        string description="位数异或整除谁，今日方知我是我";
        const string success="是自己各位数xor的倍数";
        bool ck(int x){
            if(!~x) return false;
            int y=x,t=0;
            while(y) t^=(y%10),y/=10;
            if(!t){
                if(!x){description="0*0=0";return 1;}
                return 0;
            }
            if(!(x%t)){
                description="(",y=x;
                description+=to_string(y%10),y/=10;
                while(y) description+="^"+to_string(y%10),y/=10;
                description+=")x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_return_number_or{
        const ld rarity_d=0.087334;
        string description="位数或和整除谁，今日方知我是我";
        const string success="是自己各位数or的倍数";
        bool ck(int x){
            if(!~x) return false;
            int y=x,t=0;
            while(y) t|=(y%10),y/=10;
            if(!t){
                if(!x){description="0*0=0";return 1;}
                return 0;
            }
            if(!(x%t)){
                description="(",y=x;
                description+=to_string(y%10),y/=10;
                while(y) description+="|"+to_string(y%10),y/=10;
                description+=")x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_return_number_and{
        const ld rarity_d=0.023433;
        string description="位数与和整除谁，今日方知我是我";
        const string success="是自己各位数and的倍数";
        bool ck(int x){
            if(!~x) return false;
            int y=x,t=(1<<20)-1;
            do{t&=(y%10),y/=10;}while(y);
            if(!t){
                if(!x){description="0*0=0";return 1;}
                return 0;
            }
            if(!(x%t)){
                description="(",y=x;
                description+=to_string(y%10),y/=10;
                while(y) description+="&"+to_string(y%10),y/=10;
                description+=")x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Multiple_2{
        const ld rarity_d=0.500000;
        string description="偶数";
        const string success="是2的倍数";
        bool ck(int x){
            if(!~x) return false;
            int t=2;
            if(!(x%t)){
                description=to_string(t)+"x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Multiple_3{
        const ld rarity_d=0.333334;
        string description="3n";
        const string success="是3的倍数";
        bool ck(int x){
            if(!~x) return false;
            int t=3;
            if(!(x%t)){
                description=to_string(t)+"x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Multiple_5{
        const ld rarity_d=0.200000;
        string description="5n";
        const string success="是5的倍数";
        bool ck(int x){
            if(!~x) return false;
            int t=5;
            if(!(x%t)){
                description=to_string(t)+"x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Multiple_7{
        const ld rarity_d=0.142858;
        string description="7n";
        const string success="是7的倍数";
        bool ck(int x){
            if(!~x) return false;
            int t=7;
            if(!(x%t)){
                description=to_string(t)+"x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Multiple_11{
        const ld rarity_d=0.090910;
        string description="11n";
        const string success="是11的倍数";
        bool ck(int x){
            if(!~x) return false;
            int t=11;
            if(!(x%t)){
                description=to_string(t)+"x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Multiple_13{
        const ld rarity_d=0.076924;
        string description="13n";
        const string success="是13的倍数";
        bool ck(int x){
            if(!~x) return false;
            int t=13;
            if(!(x%t)){
                description=to_string(t)+"x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Multiple_17{
        const ld rarity_d=0.058824;
        string description="17n";
        const string success="是17的倍数";
        bool ck(int x){
            if(!~x) return false;
            int t=17;
            if(!(x%t)){
                description=to_string(t)+"x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Multiple_19{
        const ld rarity_d=0.052632;
        string description="19n";
        const string success="是19的倍数";
        bool ck(int x){
            if(!~x) return false;
            int t=19;
            if(!(x%t)){
                description=to_string(t)+"x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Multiple_23{
        const ld rarity_d=0.043479;
        string description="23n";
        const string success="是23的倍数";
        bool ck(int x){
            if(!~x) return false;
            int t=23;
            if(!(x%t)){
                description=to_string(t)+"x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Multiple_29{
        const ld rarity_d=0.034482;
        string description="29n";
        const string success="是29的倍数";
        bool ck(int x){
            if(!~x) return false;
            int t=29;
            if(!(x%t)){
                description=to_string(t)+"x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_Multiple_31{
        const ld rarity_d=0.032259;
        string description="31n";
        const string success="是31的倍数";
        bool ck(int x){
            if(!~x) return false;
            int t=31;
            if(!(x%t)){
                description=to_string(t)+"x"+to_string(x/t)+"="+to_string(x);
                return 1;
            }
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_square{
        const ld rarity_d=0.001000;
        string description="n^2";
        const string success="完全平方数";
        bool ck(int x){
            if(!~x) return false;
            for(int i = 0;i*i<=x;++i)
                if(i*i==x) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_cubed{
        const ld rarity_d=0.000100;
        string description="n^3";
        const string success="完全立方数";
        bool ck(int x){
            if(!~x) return false;
            for(int i = 0;i*i*i<=x;++i)
                if(i*i*i==x) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_4_power{
        const ld rarity_d=0.000032;
        string description="n^4";
        const string success="完全四次方数";
        bool ck(int x){
            if(!~x) return false;
            for(int i = 0;i*i*i*i<=x;++i)
                if(i*i*i*i==x) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_5_power{
        const ld rarity_d=0.000016;
        string description="n^5";
        const string success="完全五次方数";
        bool ck(int x){
            if(!~x) return false;
            for(int i = 0;i*i*i*i*i<=x;++i)
                if(i*i*i*i*i==x) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_6_power{
        const ld rarity_d=0.000010;
        string description="n^6";
        const string success="完全六次方数";
        bool ck(int x){
            if(!~x) return false;
            for(int i = 0;i*i*i*i*i*i<=x;++i)
                if(i*i*i*i*i*i==x) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_7_power{
        const ld rarity_d=0.000008;
        string description="n^7";
        const string success="完全七次方数";
        bool ck(int x){
            if(!~x) return false;
            for(int i = 0;i*i*i*i*i*i*i<=x;++i)
                if(i*i*i*i*i*i*i==x) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_8_power{
        const ld rarity_d=0.000006;
        string description="n^8";
        const string success="完全八次方数";
        bool ck(int x){
            if(!~x) return false;
            for(int i = 0;i*i*i*i*i*i*i*i<=x;++i)
                if(i*i*i*i*i*i*i*i==x) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_9_power{
        const ld rarity_d=0.000005;
        string description="n^9";
        const string success="完全九次方数";
        bool ck(int x){
            if(!~x) return false;
            for(int i = 0;i*i*i*i*i*i*i*i*i<=x;++i)
                if(i*i*i*i*i*i*i*i*i==x) return 1;
            return 0;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_10_power{
        const ld rarity_d=0.000004;
        string description="n^10";
        const string success="完全十次方数";
        bool ck(int x){
            if(!~x) return false;
            return (x==0||x==1||x==1024||x==59049);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_11_power{
        const ld rarity_d=0.000004;
        string description="n^11";
        const string success="完全十一次方数";
        bool ck(int x){
            if(!~x) return false;
            return (x==0||x==1||x==2048||x==177147);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_12_power{
        const ld rarity_d=0.000004;
        string description="n^12";
        const string success="完全十二次方数";
        bool ck(int x){
            if(!~x) return false;
            return (x==0||x==1||x==4096||x==531441);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_13_power{
        const ld rarity_d=0.000003;
        string description="n^13";
        const string success="完全十三次方数";
        bool ck(int x){
            if(!~x) return false;
            return (x==0||x==1||x==8192);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_17_power{
        const ld rarity_d=0.000003;
        string description="n^17";
        const string success="完全十七次方数";
        bool ck(int x){
            if(!~x) return false;
            return (x==0||x==1||x==131072);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_19_power{
        const ld rarity_d=0.000003;
        string description="n^19";
        const string success="完全十九次方数";
        bool ck(int x){
            if(!~x) return false;
            return (x==0||x==1||x==524288);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    //特殊结尾
    namespace c_end_0{
        const ld rarity_d=0.099999;
        string description="干净的结尾";
        const string success="结尾为“0”";
        bool ck(int x){
            if(!~x) return false;
            return (x>=10&&!(x%10));
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_end_00{
        const ld rarity_d=0.009999;
        string description="干净的结尾";
        const string success="结尾为“00”";
        bool ck(int x){
            if(!~x) return false;
            return (x>=100&&!(x%100));
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_end_000{
        const ld rarity_d=0.000999;
        string description="干净的结尾";
        const string success="结尾为“000”";
        bool ck(int x){
            if(!~x) return false;
            return (x>=1000&&!(x%1000));
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_end_0000{
        const ld rarity_d=0.000099;
        string description="干净的结尾";
        const string success="结尾为“0000”";
        bool ck(int x){
            if(!~x) return false;
            return (x>=10000&&!(x%10000));
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_end_00000{
        const ld rarity_d=0.000009;
        string description="干净的结尾";
        const string success="结尾为“00000”";
        bool ck(int x){
            if(!~x) return false;
            return (x>=100000&&!(x%100000));
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_end_5{
        const ld rarity_d=0.100000;
        string description="干净的结尾";
        const string success="结尾为“5”";
        bool ck(int x){
            if(!~x) return false;
            x+=5;
            return (x>=10&&!(x%10));
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_end_50{
        const ld rarity_d=0.010000;
        string description="干净的结尾";
        const string success="结尾为“50”";
        bool ck(int x){
            if(!~x) return false;
            x+=50;
            return (x>=100&&!(x%100));
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_end_500{
        const ld rarity_d=0.001000;
        string description="干净的结尾";
        const string success="结尾为“500”";
        bool ck(int x){
            if(!~x) return false;
            x+=500;
            return (x>=1000&&!(x%1000));
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_end_5000{
        const ld rarity_d=0.000100;
        string description="干净的结尾";
        const string success="结尾为“5000”";
        bool ck(int x){
            if(!~x) return false;
            x+=5000;
            return (x>=10000&&!(x%10000));
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_end_50000{
        const ld rarity_d=0.000010;
        string description="干净的结尾";
        const string success="结尾为“50000”";
        bool ck(int x){
            if(!~x) return false;
            x+=50000;
            return (x>=100000&&!(x%100000));
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_end_500000{
        const ld rarity_d=0.000001;
        string description="干净的结尾";
        const string success="500000";
        bool ck(int x){
            if(!~x) return false;
            x+=500000;
            return (x>=1000000&&!(x%1000000));
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    //位数
    namespace c_six_digit{
        const ld rarity_d=0.900000;
        string description="保底奖，兑";
        const string success="六位数";
        bool ck(int x){
            if(!~x) return false;
            return (99999<x&&x<=999999);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_five_digit{
        const ld rarity_d=0.090000;
        string description="有点运气";
        const string success="五位数";
        bool ck(int x){
            if(!~x) return false;
            return (9999<x&&x<=99999);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_four_digit{
        const ld rarity_d=0.009000;
        string description="有点运气";
        const string success="四位数";
        bool ck(int x){
            if(!~x) return false;
            return (999<x&&x<=9999);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_three_digit{
        const ld rarity_d=0.000900;
        string description="不少运气";
        const string success="三位数";
        bool ck(int x){
            if(!~x) return false;
            return (99<x&&x<=999);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_two_digit{
        const ld rarity_d=0.000090;
        string description="不少运气";
        const string success="两位数";
        bool ck(int x){
            if(!~x) return false;
            return (9<x&&x<=99);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_one_digit{
        const ld rarity_d=0.000009;
        string description="强运！";
        const string success="个位数";
        bool ck(int x){
            if(!~x) return false;
            return (0<x&&x<=9);
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    //奇偶
    namespace c_all_odd{
        const ld rarity_d=0.019531;
        string description="奇变";
        const string success="全是奇数";
        bool ck(int x){
            if(!~x) return false;
            do{
                if(!((x%10)&1)) return 0;
                x/=10;
            }while(x);
            return 1;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_all_even{
        const ld rarity_d=0.015625;
        string description="偶不变";
        const string success="全是偶数";
        bool ck(int x){
            if(!~x) return false;
            do{
                if((x%10)&1) return 0;
                x/=10;
            }while(x);
            return 1;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_odd_even{
        const ld rarity_d=0.035155;
        string description="奇偶交替之间也暗藏阴阳之道";
        const string success="奇偶交错";
        bool ck(int x){
            if(!~x) return false;
            if(x<100) return 0;
            bool f=(x%10&1);x/=10;
            while(x){
                if((x%10&1)==f) return 0;
                f=!f,x/=10;
            }
            return 1;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
    namespace c_half_odd_even{
        const ld rarity_d=0.040950;
        string description="奇变偶不变";
        const string success="以中间为分界，同一边奇偶性一致(至少三位数)";
        bool ck(int x){
            if(!~x) return false;
            if(x<100) return 0;
            bool fl;
            int sz=(x?log10(x)+1:0),y[6];
            for(int i = 0;i<6;++i)
                y[i]=((x%10)&1),x/=10;
            if(sz&1){
                fl=(y[sz/2-1]!=y[sz/2+1]);
                for(int i = 1;i<sz/2&&fl;++i)
                    fl&=(y[i]==y[i-1]);
                for(int i = sz/2+2;i<sz&&fl;++i)
                    fl&=(y[i]==y[i-1]);
            }else{
                fl=(y[sz/2-1]!=y[sz/2]);
                for(int i = 1;i<sz/2&&fl;++i)
                    fl&=(y[i]==y[i-1]);
                for(int i = sz/2+1;i<sz&&fl;++i)
                    fl&=(y[i]==y[i-1]);
            }
            return fl;
        }
        rval suc(){ return {rarity_d,description,success}; }
    }
	int global; // 全局的数值量
	vector<rval> accom;
    void make_init(){
        is_prime.set(),is_prime[0]=is_prime[1]=0;
        for(long long i = 2;i<1000000;++i) if(is_prime[i])
            for(long long j = i*i;j<1000000;j+=i) is_prime[j]=0;
    }
	void make_check(){
		if(flag_zero||c_single_0::ck(global))
			accom.push_back(c_single_0::suc());
		if(flag_zero||c_0::ck(global))
			accom.push_back(c_0::suc());
		if(flag_zero||c_00::ck(global))
			accom.push_back(c_00::suc());
		if(flag_zero||c_000::ck(global))
			accom.push_back(c_000::suc());
		if(flag_zero||c_0000::ck(global))
			accom.push_back(c_0000::suc());
		if(flag_zero||c_00000::ck(global))
			accom.push_back(c_00000::suc());
		if(flag_zero||c_0__0::ck(global))
			accom.push_back(c_0__0::suc());
        
		if(flag_include_number||c_1::ck(global))
			accom.push_back(c_1::suc());
		if(flag_include_number||c_2::ck(global))
			accom.push_back(c_2::suc());
		if(flag_include_number||c_3::ck(global))
			accom.push_back(c_3::suc());
		if(flag_include_number||c_4::ck(global))
			accom.push_back(c_4::suc());
		if(flag_include_number||c_5::ck(global))
			accom.push_back(c_5::suc());
		if(flag_include_number||c_6::ck(global))
			accom.push_back(c_6::suc());
		if(flag_include_number||c_7::ck(global))
			accom.push_back(c_7::suc());
		if(flag_include_number||c_8::ck(global))
			accom.push_back(c_8::suc());
		if(flag_include_number||c_9::ck(global))
			accom.push_back(c_9::suc());
        
		if(flag_special_two||c_91::ck(global))
			accom.push_back(c_91::suc());
		if(flag_special_two||c_78::ck(global))
			accom.push_back(c_78::suc());
		if(flag_special_two||c_13::ck(global))
			accom.push_back(c_13::suc());
		if(flag_special_two||c_67::ck(global))
			accom.push_back(c_67::suc());
		if(flag_special_two||c_58::ck(global))
			accom.push_back(c_58::suc());	

		if(flag_911||c_911::ck(global))
			accom.push_back(c_911::suc());		
		if(flag_911||c_911911::ck(global))
			accom.push_back(c_911911::suc());	
        
		if(flag_666||c_666::ck(global))
			accom.push_back(c_666::suc());	
		if(flag_666||c_666666::ck(global))
			accom.push_back(c_666666::suc());
        
		if(flag_777||c_777::ck(global))
			accom.push_back(c_777::suc());
		if(flag_777||c_7777::ck(global))
			accom.push_back(c_7777::suc());
		if(flag_777||c_77777::ck(global))
			accom.push_back(c_77777::suc());
		if(flag_777||c_777777::ck(global))
			accom.push_back(c_777777::suc());
        
		if(flag_pi||c_pi_3::ck(global))
			accom.push_back(c_pi_3::suc());
		if(flag_pi||c_pi_4::ck(global))
			accom.push_back(c_pi_4::suc());
		if(flag_pi||c_pi_5::ck(global))
			accom.push_back(c_pi_5::suc());
		if(flag_pi||c_pi::ck(global))
			accom.push_back(c_pi::suc());
        
		if(flag_e||c_e_3::ck(global))
			accom.push_back(c_e_3::suc());
		if(flag_e||c_e_4::ck(global))
			accom.push_back(c_e_4::suc());
		if(flag_e||c_e_5::ck(global))
			accom.push_back(c_e_5::suc());
		if(flag_e||c_e::ck(global))
			accom.push_back(c_e::suc());
        
		if(flag_nailong||c_nailong_3::ck(global))
			accom.push_back(c_nailong_3::suc());
		if(flag_nailong||c_nailong_4::ck(global))
			accom.push_back(c_nailong_4::suc());
		if(flag_nailong||c_nailong_5::ck(global))
			accom.push_back(c_nailong_5::suc());
		if(flag_nailong||c_nailong::ck(global))
			accom.push_back(c_nailong::suc());
        
        if(flag_homo||c_114::ck(global))
            accom.push_back(c_114::suc());
        if(flag_homo||c_514::ck(global))
            accom.push_back(c_514::suc());
        if(flag_homo||c_114514::ck(global))
            accom.push_back(c_114514::suc());

        if(flag_important_days||c_1949::ck(global))
            accom.push_back(c_1949::suc());
        if(flag_important_days||c_194910::ck(global))
            accom.push_back(c_194910::suc());
        if(flag_important_days||c_1921::ck(global))
            accom.push_back(c_1921::suc());
        if(flag_important_days||c_192107::ck(global))
            accom.push_back(c_192107::suc());
        if(flag_important_days||c_1945::ck(global))
            accom.push_back(c_1945::suc());
        if(flag_important_days||c_194593::ck(global))
            accom.push_back(c_194593::suc());
        //-------------------------------------------------------------------
		if(flag_continues||c_Arithmetic_progressiont::ck(global))
			accom.push_back(c_Arithmetic_progressiont::suc());	
        if(flag_continues||c_Arithmetic_progressiont_l::ck(global))
			accom.push_back(c_Arithmetic_progressiont_l::suc());	
		if(flag_continues||c_Contiguous_segment::ck(global))
			accom.push_back(c_Contiguous_segment::suc());		
		if(flag_continues||c_contiguous_segment_l::ck(global))
			accom.push_back(c_contiguous_segment_l::suc());	
        
		if(flag_same||c_all_same::ck(global))
			accom.push_back(c_all_same::suc());		
        if(flag_same||c_five_same::ck(global))
			accom.push_back(c_five_same::suc());
		if(flag_same||c_four_same::ck(global))
			accom.push_back(c_four_same::suc());
		if(flag_same||c_three_same::ck(global))
			accom.push_back(c_three_same::suc());
		if(flag_same||c_double::ck(global))
			accom.push_back(c_double::suc());	
		if(flag_same||c_lucky_four::ck(global))
			accom.push_back(c_lucky_four::suc());	
  		if(flag_same||c_three_like::ck(global))
			accom.push_back(c_three_like::suc());	
		if(flag_same||c_jump_three::ck(global))
			accom.push_back(c_jump_three::suc());
        
		if(flag_build||c_arch::ck(global))
			accom.push_back(c_arch::suc());
		if(flag_build||c_pit::ck(global))
			accom.push_back(c_pit::suc());
		if(flag_build||c_summit::ck(global))
			accom.push_back(c_summit::suc());
		if(flag_build||c_valley::ck(global))
			accom.push_back(c_valley::suc());
        if(flag_build||c_wave::ck(global))
            accom.push_back(c_wave::suc());
        
		if(flag_symmetry||c_border_2::ck(global))
			accom.push_back(c_border_2::suc());	
		if(flag_symmetry||c_border_3::ck(global))
			accom.push_back(c_border_3::suc());	
		if(flag_symmetry||c_border_4::ck(global))
			accom.push_back(c_border_4::suc());	
		if(flag_symmetry||c_palindrome_1::ck(global))
			accom.push_back(c_palindrome_1::suc());	
		if(flag_symmetry||c_palindrome_2::ck(global))
			accom.push_back(c_palindrome_2::suc());	
		if(flag_symmetry||c_palindrome_3::ck(global))
			accom.push_back(c_palindrome_3::suc());	
        
        if(flag_slope||c_Continuous_sequence_d2::ck(global))
            accom.push_back(c_Continuous_sequence_d2::suc());
        if(flag_slope||c_Continuous_sequence_d3::ck(global))
            accom.push_back(c_Continuous_sequence_d3::suc());
        if(flag_slope||c_Continuous_sequence_d4::ck(global))
            accom.push_back(c_Continuous_sequence_d4::suc());
        if(flag_slope||c_Continuous_sequence_d5::ck(global))
            accom.push_back(c_Continuous_sequence_d5::suc());
        if(flag_slope||c_Continuous_sequence_d6::ck(global))
            accom.push_back(c_Continuous_sequence_d6::suc());
        if(flag_slope||c_Continuous_sequence_u2::ck(global))
            accom.push_back(c_Continuous_sequence_u2::suc());
        if(flag_slope||c_Continuous_sequence_u3::ck(global))
            accom.push_back(c_Continuous_sequence_u3::suc());
        if(flag_slope||c_Continuous_sequence_u4::ck(global))
            accom.push_back(c_Continuous_sequence_u4::suc());
        if(flag_slope||c_Continuous_sequence_u5::ck(global))
            accom.push_back(c_Continuous_sequence_u5::suc());
        if(flag_slope||c_Continuous_sequence_u6::ck(global))
            accom.push_back(c_Continuous_sequence_u6::suc());
        
        
        if(flag_odd_even||c_all_odd::ck(global))
            accom.push_back(c_all_odd::suc());
        if(flag_odd_even||c_all_even::ck(global))
            accom.push_back(c_all_even::suc());
        if(flag_odd_even||c_odd_even::ck(global))
            accom.push_back(c_odd_even::suc());
        if(flag_odd_even||c_half_odd_even::ck(global))
            accom.push_back(c_half_odd_even::suc());
        //-------------------------------------------------------------------
        if(flag_special_kind||c_perfect_number::ck(global))
            accom.push_back(c_perfect_number::suc());
		if(flag_special_kind||c_prime::ck(global))
			accom.push_back(c_prime::suc());	

        if(flag_divisible_self||c_return_number_add::ck(global))
            accom.push_back(c_return_number_add::suc());
        if(flag_divisible_self||c_return_number_mul::ck(global))
            accom.push_back(c_return_number_mul::suc());
        if(flag_divisible_self||c_return_number_xor::ck(global))
            accom.push_back(c_return_number_xor::suc());
        if(flag_divisible_self||c_return_number_or::ck(global))
            accom.push_back(c_return_number_or::suc());
        if(flag_divisible_self||c_return_number_and::ck(global))
            accom.push_back(c_return_number_and::suc());

        if(flag_multiple||c_Multiple_2::ck(global))
            accom.push_back(c_Multiple_2::suc());
        if(flag_multiple||c_Multiple_3::ck(global))
            accom.push_back(c_Multiple_3::suc());
        if(flag_multiple||c_Multiple_5::ck(global))
            accom.push_back(c_Multiple_5::suc());
        if(flag_multiple||c_Multiple_7::ck(global))
            accom.push_back(c_Multiple_7::suc());
        if(flag_multiple||c_Multiple_11::ck(global))
            accom.push_back(c_Multiple_11::suc());
        if(flag_multiple||c_Multiple_13::ck(global))
            accom.push_back(c_Multiple_13::suc());
        if(flag_multiple||c_Multiple_17::ck(global))
            accom.push_back(c_Multiple_17::suc());
        if(flag_multiple||c_Multiple_19::ck(global))
            accom.push_back(c_Multiple_19::suc());
        if(flag_multiple||c_Multiple_23::ck(global))
            accom.push_back(c_Multiple_23::suc());
        if(flag_multiple||c_Multiple_29::ck(global))
            accom.push_back(c_Multiple_29::suc());
        if(flag_multiple||c_Multiple_31::ck(global))
            accom.push_back(c_Multiple_31::suc());
        
        if(flag_power||c_square::ck(global))
            accom.push_back(c_square::suc());
        if(flag_power||c_cubed::ck(global))
            accom.push_back(c_cubed::suc());
        if(flag_power||c_5_power::ck(global))
            accom.push_back(c_5_power::suc());
        if(flag_power||c_6_power::ck(global))
            accom.push_back(c_6_power::suc());
        if(flag_power||c_7_power::ck(global))
            accom.push_back(c_7_power::suc());
        if(flag_power||c_8_power::ck(global))
            accom.push_back(c_8_power::suc());
        if(flag_power||c_9_power::ck(global))
            accom.push_back(c_9_power::suc());
        if(flag_power||c_10_power::ck(global))
            accom.push_back(c_10_power::suc());
        if(flag_power||c_11_power::ck(global))
            accom.push_back(c_11_power::suc());
        if(flag_power||c_12_power::ck(global))
            accom.push_back(c_12_power::suc());
        if(flag_power||c_13_power::ck(global))
            accom.push_back(c_13_power::suc());
        if(flag_power||c_17_power::ck(global))
            accom.push_back(c_17_power::suc());
        if(flag_power||c_19_power::ck(global))
            accom.push_back(c_19_power::suc());
        //-------------------------------------------------------------------
		if(flag_end_0||c_end_0::ck(global))
			accom.push_back(c_end_0::suc());
		if(flag_end_0||c_end_00::ck(global))
			accom.push_back(c_end_00::suc());
		if(flag_end_0||c_end_000::ck(global))
			accom.push_back(c_end_000::suc());
		if(flag_end_0||c_end_0000::ck(global))
			accom.push_back(c_end_0000::suc());
		if(flag_end_0||c_end_00000::ck(global))
			accom.push_back(c_end_00000::suc());
        
		if(flag_end_5||c_end_5::ck(global))
			accom.push_back(c_end_5::suc());
		if(flag_end_5||c_end_50::ck(global))
			accom.push_back(c_end_50::suc());
		if(flag_end_5||c_end_500::ck(global))
			accom.push_back(c_end_500::suc());
		if(flag_end_5||c_end_5000::ck(global))
			accom.push_back(c_end_5000::suc());
		if(flag_end_5||c_end_50000::ck(global))
			accom.push_back(c_end_50000::suc());
		if(flag_end_5||c_end_500000::ck(global))
			accom.push_back(c_end_500000::suc());
        //-------------------------------------------------------------------
		if(flag_digit_size||c_six_digit::ck(global))
			accom.push_back(c_six_digit::suc());
		if(flag_digit_size||c_five_digit::ck(global))
			accom.push_back(c_five_digit::suc());
		if(flag_digit_size||c_four_digit::ck(global))
			accom.push_back(c_four_digit::suc());
		if(flag_digit_size||c_three_digit::ck(global))
			accom.push_back(c_three_digit::suc());
		if(flag_digit_size||c_two_digit::ck(global))
			accom.push_back(c_two_digit::suc());
		if(flag_digit_size||c_one_digit::ck(global))
			accom.push_back(c_one_digit::suc());
		return;
	}
	
	bool rarity_cmp(rval x,rval y){ return x.r>y.r; }
}


#endif
