#include<iostream>
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <iomanip>//setprecision
#include<math.h>
#include <functional>
#include<climits>
using namespace std;
#define ll  long long 
#define rep(i, n)        for(ll i=0; i<(ll)(n); ++i)
#define mod 1000000007
  vector<ll>to[1000005];
int main(){
  ll a,b;cin>>a>>b;
  vector<ll>c(a);
  rep(i,a)cin>>c[i];
  rep(j,b){
    vector<ll>d(a+1);
    rep(i,a){
      ll e=max((ll)(0),i-c[i]),f=min(i+c[i]+1,a);
      d[e]++;d[f]--;
    }
    rep(o,a)d[o+1]+=d[o];
    d.pop_back();
    if(c==d)break;
    else c=d;
  }
  rep(i,a)cout<<c[i]<<endl;
}