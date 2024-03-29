#include<bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)
#define rrep(i,n) for(int i = (n)-1; i >= 0; i--)
#define rep1(i,n) for(int i = 1; i <= (n); i++)
#define rrep1(i,n) for(int i = (n); i > 0; i--)

#define ll long long
#define pi pair<int, int>
#define pll pair<ll, ll>

#define MOD 1000000007
#define INF 1000000000000000LL

using namespace std;

int main(){
  int n,k;cin>>n>>k;
  vector<int>p(n);
  rep(i, n){ cin>>p[i]; p[i]--; }
  vector<ll>c(n);
  rep(i, n)cin>>c[i];

  ll result = -INF;
  rep(i, n){
    vector<ll>scores;
    int now=p[i];
    int lc = 1;
    scores.push_back(0);
    scores.push_back(c[now]);
    while(now!=i){
      now = p[now];
      scores.push_back(scores[lc] + c[now]);
      lc++;
    }

//rep1(j, lc)cout<<scores[j]<<' ';cout<<endl;cout<<lc<<endl;

    rep1(j, lc){
      if(k<j)continue;
      ll total = scores.back();
      ll loopcount = (k-j)/lc;
      if(loopcount<0 || total<0)loopcount=0;
//cout<<result<<' '<<total<<' '<<loopcount<<' '<<scores[j]<<endl;
      result = max<ll>(result, total * loopcount + scores[j]);
    }
  }

  cout<<result<<endl;

  return 0;
}
