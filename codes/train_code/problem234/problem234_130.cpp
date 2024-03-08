#include<cstdio>
#include<iostream>
#include<string>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include<stack>
#include<deque>
#include<tuple>
#include<algorithm>
#include<numeric>
#include<limits>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
#define BEGIN ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define END return EXIT_SUCCESS
#define up(I,A,B) for(auto I=(A);I<=(B);++I)
#define dw(I,A,B) for(auto I=(A);I>=(B);--I)
#define rep(I,N) up(I,0,N-1)
#define all(C) (C).begin(),(C).end()
#define rall(C) (C).rbegin(),(C).rend()
#define ft first
#define sd second
#define mp make_pair
#define mt make_tuple
#define pf push_front
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define rs resize
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
template<class T>inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}return 0;}
template<class T>inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
template<class T>inline void                                      in(T &p){cin>>p;}
template<class T1,class T2>inline void                            in(T1 &p1,T2 &p2){cin>>p1>>p2;}
template<class T1,class T2,class T3>inline void                   in(T1 &p1,T2 &p2,T3 &p3){cin>>p1>>p2>>p3;}
template<class T1,class T2,class T3,class T4>inline void          in(T1 &p1,T2 &p2,T3 &p3,T4 &p4){cin>>p1>>p2>>p3>>p4;}
template<class T1,class T2,class T3,class T4,class T5>inline void in(T1 &p1,T2 &p2,T3 &p3,T4 &p4,T5 &p5){cin>>p1>>p2>>p3>>p4>>p5;}
template<class T>inline void                                      ins(T &p){for_each(all(p),in<decltype(p[0])>);}
template<class T>inline void                             out(T p){cout<<p<<"\n";}
template<class T1,class T2>inline void                   out(T1 p1,T2 p2){cout<<p1<<" "<<p2<<"\n";}
template<class T1,class T2,class T3>inline void          out(T1 p1,T2 p2,T3 p3){cout<<p1<<" "<<p2<<" "<<p3<<"\n";}
template<class T1,class T2,class T3,class T4>inline void out(T1 p1,T2 p2,T3 p3,T4 p4){cout<<p1<<" "<<p2<<" "<<p3<<" "<<p4<<"\n";}
inline void                                              out(ld p){printf("%.12Lf\n",p);}
template<class T>inline void outml(T p){for_each(all(p),out<decltype(p[0])>);}//ml=multi line
template<class T>inline void outol(T V){auto n=V.size();rep(i,n)cout<<V[i]<<" \n"[i==n-1];}//ol=one line
int d[1<<18];
map<int,pair<int,int>>m;
int H,W,D;
int a;
int q;
int l,r;
inline void solve(void){
  in(H,W,D);
  rep(i,H){
    rep(j,W){
      in(a);
      m[a]={i,j};
    }
  }
  up(i,1,H*W)d[i+D]=d[i]+abs(m[i].ft-m[i+D].ft)+abs(m[i].sd-m[i+D].sd);
  in(q);
  while(q--){
    in(l,r);
    out(d[r]-d[l]);
  }
}
int main(void){
  BEGIN;
  solve();
  END;
}
