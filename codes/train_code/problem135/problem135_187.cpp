#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>
#include<cfloat>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define EPS (1e-10)
using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef complex<double> P; /* ツ点 */

#define PI (3.1415926535)
#define EPS (1e-10)

int main(){
  stack<int> s;
  int n;
  while(cin>>n){
    if(n==0){
      cout << s.top() << endl;
      s.pop();
    }else
      s.push(n);
  }
  return 0;
}