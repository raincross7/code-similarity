//#define _GLIBCXX_DEBUG//実行時、何も出なかったらこれを使う
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<numeric>
#include<climits>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

template <class A, class B> inline bool chmax(A &a, const B &b) { return b > a && (a = b, true); }
template <class A, class B> inline bool chmin(A &a, const B &b) { return b < a && (a = b, true); }

int dy[] = {1,0,-1,0,1,-1,-1,1}; //次に行くところ
int dx[] = {0,1,0,-1,1,1,-1,-1}; //上に同じ



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n,kum = INT_MAX,cnt = 0;
  cin >> n;
  vector<int> p(n),a(n);
  
  for (int i = 0; i < n; i++){
    cin >> p[i];
    if (p[i] <= kum){
      kum = p[i];
      cnt++;
    }
  }
  
  cout << cnt << '\n'; 
  return 0;
}