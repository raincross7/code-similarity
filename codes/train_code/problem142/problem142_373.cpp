#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define repone(i,n) for(int i=1;i<(int)(n);++i)
#define repo(i,o,n) for(int i=o;i<(int)(n);++i)
#define Rep(j,n) for(int j=0;j<(int)(n);++j)
#define Repo(j,o,n) for(int j=o;j<(int)(n);++j)
#define Repone(j,n) for(int j=1;j<(int)(n);++j)
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define int long long
#define pb(a) push_back(a)
#define eraser(v,i) (v).erase(v.begin()+(i))
#define pbpair(a,b) push_back(make_pair(a,b))
#define MOD 1000000007
#define INF 9223372036854775807
#define pairint pair<int,int>
signed main(){
  int x=0,y=0,z=0;
  string s;
  std::cin >> s;
  rep(i,s.size()){
    if(s[i]=='o')x++;
    else y++;
  }
  if(x>=8)std::cout << "YES" << '\n';
  else if(x+15-s.size()>=8)std::cout << "YES" << '\n';
  else std::cout << "NO" << '\n';

}
