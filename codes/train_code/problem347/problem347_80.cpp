#include<iostream>
#include<algorithm>
#include <iostream> 
#include <algorithm> 
#include<string>
#include<queue>
#include<utility>
#include<fstream>
#include<queue>
#include<set>
#include<stack>
#include<map>
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define I(a) scanf("%d",&a)
#define I2(a,b) scanf("%d%d",&a,&b)
#define I3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define L(a) scanf("%lld",&a)
#define L2(a,b) scanf("%lld%lld",&a,&b)
#define L3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define PI(a) printf("%d",a)
#define PL(a) printf("%lld",a)
#define PT(t) printf("Case %d: ",t)
#define PB push_back
#define x first
#define y second
#define xx first.first
#define xy first.second
#define yx second.first
#define yy second.second
#define SC scanf
#define PC printf
#define NL printf("\n")
#define SET(a) memset(a,0,sizeof a)
#define SETR(a) memset(a,-1,sizeof a)
#define SZ(a) ((int)a.size())-1
#define f(i,a,b) for(int i=a;i<=b; i++)
#define fr(i,a,b) for(int i=a;i<=b; i++)
#define frr(i,a,b) for(int i=a;i>=b; i--)
#define frv(i,a)  for(int i=0;i<a.size();i++)
#define pi 2.0*acos(0.0)
#define R(a) freopen(a, "r", stdin);
#define W(a) freopen(a, "w", stdout);
#define CB(x) __builtin_popcount(x)
#define STN(a) stringtonumber<ll>(a)
#define lol printf("BUG\n")
#define Endl "\n"
#define mk make_pair
using namespace std;
template <class T> inline T BM(T p, T e, T M)
{
    ll ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    }
    return (T)ret;
}
template <class T> inline T gcd(T a, T b)
{
    if(b == 0)return a;
    return gcd(b, a % b);
}
template <class T> inline T mdINV(T a, T M)
{
    return BM(a, M - 2, M);
}
template <class T> inline T PW(T p, T e)
{
    ll ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p);
        p = (p * p);
    }
    return (T)ret;
}
 
 
template <class T>bool ISLEFT(T a, T b, T c)
{
    if(((a.xx - b.xx) * (b.yy - c.yy) - (b.xx - c.xx) * (a.yy - b.yy)) < 0.0)return 1;  //Uporer dike //A,b,c, x okkher ordera sorted
    else return 0;
}
 
 
typedef pair<int,int >P;
//////////////////////////
/////////////////////////
int main(){
   int mt[] = {0, 2, 5, 5, 4, 5, 6, 3 , 7, 6};

   int n,m;
   I2(n,m);
   pair<int,int> ar[m+2];
   for(int i =1;i<=m;i++){
       I(ar[i].x);
       ar[i].y = mt[ar[i].x];
   }
   int DP[n+2];
   SETR(DP);
   DP[0] = 0;
   sort(ar + 1, ar + m+ 1);
   int ans = 0;
   int in = 0;
   
   for(int j = 1;j<=n;j++){
       for(int i = 1;i<=m;i++){
           if(j- ar[i].y >= 0 && DP[j-ar[i].y] != -1){
               DP[j] = max(DP[j], DP[j-ar[i].y] + 1);
               ans= max(ans, DP[j]);
           }
       }
   }

   in = n;
   while(in){
       for(int j = m;j>=1;j--){
           if(in- ar[j].y >= 0 && DP[in] == DP[in - ar[j].y] + 1){
               cout<<ar[j].x;
               in -= ar[j].y;
               break;
           }
       }
   }
   cout<<endl;
    return 0;
}