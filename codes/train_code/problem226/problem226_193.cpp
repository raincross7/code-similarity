#include <bits/stdc++.h>
#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;
#define lli long long int
#define uli unsigned long long int
#define INF 9999999999
#define rep(i,m,n) for(lli i = m;i < n;i++)
#define rrep(i,m,n) for(lli i=m-1;i>=n;i--)
#define pb(n) push_back(n)
#define UE(N) N.erase(unique(N.begin(),N.end()),N.end());
#define Sort(n) sort(n.begin(), n.end())
#define Rev(n) reverse(n.begin(),n.end())
#define Out(S) cout << S << endl
#define NeOut(S) cout << S
#define HpOut(S) cout << setprecision(25) << S << endl
#define Vec(K,L,N,S) vector<L> K(N,S)
#define DV(K,L,N,M,S) vector<vector<L>> K(N,vector<L>(M,S))
#define TV(K,L,N,M,R,S) vector<vector<vector<L>>> K(N,vector<vector<L>>(M,vector<L>(R,S)))
#define pint pair<int,int>
#define paf(L,R) pair<L,R>
#define mod 998244353
#define MAX 10000000
#define ALL(a)  a.begin(),a.end()
#define chmax(a, b) a = (((a)<(b)) ? (b) : (a))
#define chmin(a, b) a = (((a)>(b)) ? (b) : (a))
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli A,B,C,D,E,F,N,M,K,L,X,Y,Z,H,W,sum=0,num=0,flag=0;string S,T;
  cin >> N;
  Vec(P,bool,N,0);//famale-1,male-0
  Out(0);
  cin >> S;
  if(S[0]=='V')return 0;
  else if(S[0]=='F')P[0]=true;
  else P[0]=false;
  Out(N/2);
  cin >> S;
  if(S[0]=='V')return 0;
  else if(S[0]=='F')P[N/2]=true;
  else P[N/2]=false;
  int ok,ng;
  if((P[0]==P[N/2]&&(N/2-1)&1)||(P[0]!=P[N/2]&&(N/2-1)%2==0)){
    ok=N/2;
    ng=N;
  }
  else{
    ok=0;
    ng=N/2;
  }
  while(1){
    int mid=(ok+ng)/2;
    Out(mid);
    cin >> S;
    if(S[0]=='V')return 0;
    else if(S[0]=='F')P[mid]=true;
    else P[mid]=false;
    if((P[ok]==P[mid]&&(mid-ok-1)&1)||(P[ok]!=P[mid]&&(mid-ok-1)%2==0))ok=mid;
    else ng=mid;
  }
}

