#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(int)(n); i++)
#define rep1(i, n) for(int i=1; i<=(int)(n); i++)
#define reprange(i, a) for(int i : vector<int>a)
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> wi;
typedef vector<ll> vl;
const ll inf=1LL << 60;
const ll mod=1e9+7;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  int ans=1000;
  cin >> s;
  int n=s.size();
  rep(i, n-2){
    int m=(s[i]-'0')*100+(s[i+1]-'0')*10+(s[i+2]-'0');
    ans=min(ans, abs(m-753));
  }

  cout << ans << endl;

  return 0;
}