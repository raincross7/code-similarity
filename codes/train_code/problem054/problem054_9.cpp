#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define vec vector
#define fi first
#define se second
#define eb emplace_back
#define ef emplace_front
#define pof pop_front()
#define pob pop_back()
#define Rep(i,n) for(li i=0,nn=(li)(n);i!=nn;++i)
#define Rep1(i,n) for(li i=1,nn=(li)(n)+1;i!=nn;++i)
#define Size(v) (li)(v.size())
#define SortA(v) sort(v.begin(),v.end())
#define SortD(v) sort(v.rbegin(),v.rend())
#define All(a) (a).begin(),(a).end()
#define Input(a) for(li ii=0,nn=(li)(a.size());ii!=nn;++ii){cin>>(a).at(ii);}
#define Input2(a,b) for(li ii=0,nn=(li)(a.size());ii!=nn;++ii){cin>>(a).at(ii)>>(b).at(ii);}
#define mp make_pair
using li = int64_t;
using intl = int64_t;
using vi = vec<li>;
using vb = vec<bool>;
using vvi = vec<vi>;
using qi = deque<li>;
using pi = pair<li,li>;
using vpi = vec<pi>;
using si = set<li>;
using vsi = vec<si>;
using mii = map<li,li>;
using vmii = vec<mii>;
vec<li> dx = {0, 1, 0, -1, 1, 1, -1, -1};
vec<li> dy = {1, 0, -1, 0, 1, -1, 1, -1};
constexpr li INF = 9223372036854775807;

void Yes(li b){
  if(b)cout<<"Yes";
  else cout<<"No";
}
void yes(li b){
  if(b)cout<<"yes";
  else cout<<"no";
}

int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  cout.precision(16);

  li A,B;
  cin >>A>>B;

  Rep1(i,1250){
  	if(i*8/100 == A&&i/10==B){
  		cout<<i; return 0;
  	}
  }
  cout <<-1;
}
