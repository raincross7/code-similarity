#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REPLL(i, n) for (ll i = 0; i < (ll)(n); i++)
using namespace std;
template<class T>inline bool chmax(T &a, const T &b){if(a < b){a = b; return 1;}return 0;}
template<class T>inline bool chmin(T &a, const T &b){if(a > b){a = b; return 1;}return 0;}
typedef long long ll;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S; cin >> S;
  if(S == "A"){
    cout << "T" << endl;
  }else if(S == "T"){
    cout << "A" << endl;
  }else if(S == "C"){
    cout << "G" << endl;
  }else{
    cout << "C" << endl;
  }
}