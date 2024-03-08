#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iomanip>
#include <string.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define ALL(a)  (a).begin(),(a).end()

typedef long long lint;

using namespace std;

int main(){
  int R,G,B;
  cin>>R>>G>>B;
  int K;
  cin>>K;
  int t=0;
  while(G<=R){
    t++;
    G*=2;
  }
  while(B<=G){
    t++;
    B*=2;
  }
  if(t<=K)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
