////////////////////////// Author
////////////////////////// Nasim Hossain Rabbi
////////////////////////// JU-CSE28
////////////////////////// CF - imnasim3.1415
////////////////////////// UVA - imnasim3.1415
////////////////////////// Mail - imnasim3.1415@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sz size()
#define mk make_pair
#define clr clear()
#define B begin()
#define E end()
#define EM empty()
#define mem(a,b) memset(a,b,sizeof(a))
#define rep(i,n) for(i=0;i<n;i++)
#define Rep(i,n) for(i=1;i<=n;i++)
#define all(cont) cont.begin(),cont.end()
#define pb push_back
string en="\n";
string t="hello";
#define sqr(a) ((a) * (a))
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define pi 3.1415926535897932384626433832795
#define vi vector<int>
#define vl vector<long long>
#define vs vector<string>
#define vp(vi,x) cin>>x; vi.pb(x);
#define LB(a,x) (lower_bound(all(a),x)-a.B)
#define UB(a,x) (upper_bound(all(a),x)-a.B)
typedef long long LL;
typedef unsigned long long ULL;
bool isprm(LL a){for(LL i=2;i*i<=a;i++){if(a%i==0)return false;}return true;}
bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}
int toInt(string s){int sm;stringstream ss(s);ss>>sm;return sm;}
template<typename T>inline T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
template<typename T>inline T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/gcd(a,b));}
int main()
{
//    fast;
    LL i,j,k,n,m,l,s=0,x,y,tc=1;
    while(cin>>n>>m)
    {
        s=0;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++)
            {
                k=m-i-j;
                    if(k>=0 && k<=n) s++;
            }
        }
        cout<<s<<en;
    }
}
