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
#define rep(i, n) for(int i=0;i<n;++i)
#define rrep(i, n) for(int i=n;i>=0;--i)
const int inf=1e9+7;
const ll mod=1e9+7;
const ll mod1=998244353;
const ll big=1e18;
const double PI=2*asin(1);

int main() {
  int N;
  cin>>N;
  vector<int> A(N), B(N);
  for(int i=0;i<N;++i) {
    cin>>A[i];
    B[i] = A[i];
  }
  sort(B.begin(), B.end());
  for(int i=0;i<N;++i) {
    if(A[i]==B[N-1]) cout<<B[N-2]<<endl;
    else cout<<B[N-1]<<endl;
  }
}

