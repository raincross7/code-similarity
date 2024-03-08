/**
*    author:  yuya1234
*    created: 17.07.2020 13:29:55
**/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
long double eps = 1.0E-14;

#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
#define FORV(i,v) for(auto i=v.begin(); i!=v.end();i++)

#define SORT(s) sort((s).begin(),(s).end())
#define SORTD(s) sort((s).rbegin(),(s).rend())
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );

#define SZ(x) ((int)(x).size())
#define MEMSET(v, h) memset((v), h, sizeof(v))

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
template<class T>T gcd(T a,T b){return b?gcd(b,a%b):a;}
template<class T>T lcm(T a,T b){return gcd(a,b)*(a/gcd(a,b))*(b/gcd(a,b));}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  //std::cout << std::fixed << std::setprecision(15);

  int n;
  cin>>n;

  int a[n],b[n];
  ll a_sum,b_sum;
  a_sum=b_sum=0;
  REP(i,n)
  {
    cin>>a[i];
    a_sum+=a[i];
  }
  vector<int> v1;
  vector<int> v2;
  REP(i,n)
  {
    cin>>b[i];
    b_sum+=b[i];
    if(a[i]>=b[i])v1.emplace_back(a[i]-b[i]);
    else v2.emplace_back(b[i]-a[i]);
  }

  if(a_sum<b_sum)
  {
    cout<<-1<<endl;
    return 0;
  }

  if(SZ(v2)==0)
  {
    cout<<0<<endl;
    return 0;
  }

  SORTD(v1);
  SORTD(v2);
  int idx=0;

  for(auto vv:v2)
  {
    while(vv!=0)
    {
      if(vv>=v1[idx])
      {
        vv-=v1[idx];
        idx++;
      }
      else
      {
        v1[idx]-=vv;
        vv=0;
      }
    }
  }

  cout<<SZ(v2)+idx+1<<endl;


  return 0;
}