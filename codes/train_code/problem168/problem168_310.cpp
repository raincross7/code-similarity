#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <queue>
#include <map>
#include <numeric>
#include <unordered_map>
#include <iomanip>
#include <functional>
#include <bitset>
#include <complex>
#include <stack>



#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define all(x) (x).begin(),(x).end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

typedef long long ll;

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n,z,w;
  cin>>n>>z>>w;
  vector<int>a(n);
  a.resize(n);
  rep(i,n)cin>>a[i];
  if(n==1){cout<<abs(w-a[n-1])<<endl;return 0;}
  cout<<max(abs(w-a[n-1]),abs(a[n-2]-a[n-1]))<<endl;



  return 0;

}
