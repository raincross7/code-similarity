#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <iomanip>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
int main(){
  ll n,d,x;
  cin >> n >> d >> x;
  //vector<ll> a(n);
  ll res = 0;
  res += x;
  for(int i = 0;i < n;i++){
    ll in;
    cin >> in;
    for(int j = 0;j < d;j++){
      if(j % in == 0)res++;
    }
    //cout << in << endl;
  }
  cout << res << endl;
}