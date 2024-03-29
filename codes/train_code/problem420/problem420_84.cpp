#include<iostream>
#include<iomanip>
#include<queue>
#include<string>
#include<stack>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<cassert>
#include<ctime>
#include<algorithm>
#include<utility>
#include<map>
#include<set>
#include<vector>
#include<functional>
#include<complex>

using namespace std;

typedef long long            ll;
typedef unsigned             ui;
typedef unsigned long long   ull;
typedef pair<int,int>        i_i;
typedef pair<ll,int>         ll_i;
typedef pair<ll,ll>          ll_ll;
typedef pair<double,int>     d_i;
typedef pair<double,double>  d_d;
typedef vector<int>          vi;
typedef vector<vector<int> > vii;

#ifdef DEBUG
#define dprintf      printf
#define dputs        puts
#define dout(x)      cout<<#x" = "<<(x)<<endl
#define darray(x,n)  {int i;rep(i,n)cout<<#x"["<<i<<"] = "<<*((x)+i)<<endl;}
#define dloop(i,s,g) for(int (i)=(s);(i)<(g);(i)++)
#define drep(i,n)    for(int (i)=0;(i)<(n);(i)++)
#define dstop()      scanf("%*c")
#else
#define dprintf      (1)?0:printf
#define dputs        (1)?0:puts
#define dout(x)
#define darray(x,n)
#define dloop(i,s,g) if(int i=0){}else
#define drep(i,n)    if(int i=0){}else
#define dstop()
#endif

#define F    first
#define S    second
#define pb   push_back
#define mp   make_pair

#define loop(i,s,g) for((i)=(s);(i)<(g);(i)++)
#define rep(i,n)    for((i)=0;(i)<(n);(i)++)
#define all(x)      x.begin(),x.end()
#define in(T,...) T __VA_ARGS__; impl(__VA_ARGS__)
#define array(T,id,n) T id[(n)]; for(int i=0;i<(n);i++)cin>>id[i]
#define putv(n)     cout<<(n)<<endl

//#define int long long
#ifndef int
#define INF __INT32_MAX__
#else
#define INF __INT64_MAX__
#endif

void impl(){};
template <typename T,typename... TS >
void impl(T &head,TS &... tail)
{
  cin>>head;
  impl(tail ...);
}

signed main(void)
{
  in(string, s1);
  in(string, s2);
  if(
     s1[0] == s2[2] &&
     s1[1] == s2[1] &&
     s1[2] == s2[0] ){
    puts("YES");
  }else{
    puts("NO");
  }

  return 0;
}
