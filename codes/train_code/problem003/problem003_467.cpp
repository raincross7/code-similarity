#include <bits/stdc++.h>
#define sz(v)   ((int)(v).size())
#define  all(v)    ((v).begin()),((v).end())
#define  allr(v)    ((v).rbegin()),((v).rend())
#define   pb         push_back
#define   mp         make_pair
#define    clr(v,d)      memset( v, d ,sizeof(v))
#define     PI                       acos(-1)
typedef  long long     ll ;
typedef  unsigned long long ull;
const double eps= (1e-9);
using namespace std;
int dcmp(long double a,long double b){   return fabsl(a-b)<=eps ? 0: (a>b)? 1:-1  ;}
int getBit(ll num, int idx) {return ((num >> idx) & 1ll) == 1;}
int setBit1(int num, int idx) {return num | (1<<idx);}
ll setBit0(ll num, int idx) {return num & ~(1ll<<idx);}
ll flipBit(ll num, int idx) {return num ^ (1ll<<idx);}
void GO(){ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
int countNumBit1(int mask) {int ret=0; while (mask) 	{mask &= (mask-1);++ret;	}return ret;}
const int N=1000000+9;
int solve(int x){

   if(x>=400&&x<=599) return 8;
   if(x>=600&&x<=799) return 7;
   if(x>=800&&x<=999) return 6;
   if(x>=1000&&x<=1199) return 5;
   if(x>=1200&&x<=1399) return 4;
   if(x>=1400&&x<=1599) return 3;
   if(x>=1600&&x<=1799) return 2;
   if(x>=1800&&x<=1999) return 1;

}
int main(){
    GO();
    int T;
   // cin>>T;
   T=1;
    while(T--){

        int x;
        cin>>x;
        cout<<solve(x)<<"\n";





    }

}


































































