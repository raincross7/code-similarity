#include <bits/stdc++.h>
#define rep(i,N) for (int i = 0; i < (N); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int inf{int(1e9)};
int main(void){
  string A, B;
  cin >> A >> B;

  if (A.length() > B.length()){
    cout << "GREATER" << endl;
  }else if(A.length() < B.length()){
    cout << "LESS" << endl;
  }else{
    if (A > B) cout << "GREATER" << endl;
    else if (A < B) cout << "LESS" << endl;
    else if (A == B) cout << "EQUAL" << endl;
  }
}
