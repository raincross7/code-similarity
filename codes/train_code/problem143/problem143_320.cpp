#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<list>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
using namespace std;
typedef long long ll;
#define fi first
#define se second
#define mp make_pair
#define mt make_tuple
#define pqueue priority_queue
const int inf=1e9+7;
const ll mod=1e9+7;
const ll mod1=998244353;
const ll big=1e18;
const double PI=2*asin(1);

int main() {
  int N;
  cin>>N;
  map<int, ll> amap;
  int A[N];
  vector<int> arr;
  for(int i=0;i<N;++i) {
    cin>>A[i];
    if(amap[A[i]]==0) arr.push_back(A[i]);
    amap[A[i]]++;
  }
  ll ans = 0;
  for(int i=0;i<arr.size();++i) {
    ans += amap[arr[i]]*(amap[arr[i]]-1)/2;
  }
  ll tmp;
  for(int i=0;i<N;++i) {
    cout<<ans-amap[A[i]]+1<<endl;
  }
}

