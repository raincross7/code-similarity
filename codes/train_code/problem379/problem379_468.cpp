
#include<bits/stdc++.h>
using namespace std;
/**
******************* Author:Bisnu sarkar ****************************
**/
/*
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
*/
#define fRead(x)       freopen(x,"r",stdin)
#define fWrite(x)      freopen (x,"w",stdout)
#define ull            unsigned long long
#define ll             long long
#define pii            pair<int,int>
#define sit            set<int> :: iterator
#define vrit           vector<int> :: reverse iterator
#define ff             first
#define ss             second
#define endl           '\n';
#define sz(s)          (int)s.size()
#define all(s)         s.begin(),s.end()
#define IO             ios_base::sync_with_stdio(false),cin.tie(NULL);  
#define what_is(x)     cerr << #x << " is " << x << endl;
///*....Debugger....*///
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {cout << endl;}
template<typename T, typename... Args> void err(istream_iterator<string> it, T a, Args... args) {
  cerr << *it << " = " << a << ", ";
  err(++it, args...);
}
///*....Input....*///
template <typename T> inline void Int(T &n) {
  n = 0; int f = 1; register int ch = getchar();
  for (; !isdigit(ch); ch = getchar()) if (ch == '-') f = -1;
  for (; isdigit(ch); ch = getchar()) n = (n << 3) + (n << 1) + ch - '0';
  n = n * f;
}
 
template <typename T, typename TT> inline void Int(T &n, TT &m) { Int(n); Int(m); }
template <typename T, typename TT, typename TTT> inline void Int(T &n, TT &m, TTT &l) { Int(n, m); Int(l);}
double ind(){double x; scanf("%lf",&x);return x;}

///*....Bitmask....*///
int set_1(int n,int pos){return n = (n | (1<<pos));}
int reset_0(int n,int pos){return n= n & ~(1<<pos);}
bool check_bit(int n,int pos){return n = n & (1<<pos);}

int dx[8]= {1,0,-1,0,-1,-1,1,1};
int dy[8]= {0,1,0,-1,-1,1,-1,1};

///*....Constraints....*///
const int N = (int) 1e6 + 5;
const int M = (int) 1e9 + 7;
const double pi=2* acos(0.0);
const double eps=1e-9;


int main()
{
    int t=1,te=0;
    //Int(t);
    while(t--){
        int x,y;
        Int(x,y);
        bool f=false;
        for(int i=0;i<=x;++i){
            int tot = i*2 + (x-i)*4;
            if(tot == y)f=true;
        }
        if(f)printf("Yes\n");
        else{
            printf("No\n");
        }

        //printf("Case %d: ",++te);
    }
    return 0;
}




