#include <bits/stdc++.h>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(string N){
  if("000" == N.substr(0,3) || "000" == N.substr(1,3)) {
    cout << YES << endl;
    return;
  }

  for(long long i = 111; i <= 999; i+=111) {
    if(to_string(i) == N.substr(0,3) || to_string(i) == N.substr(1,3)) {
      cout << YES << endl;
      return;
    }
  }
  cout << NO << endl;
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    string N;
    cin >> N;
    solve(N);
    return 0;
}
