#include <bits/stdc++.h>
using namespace std;


void solve(long long n, std::vector<long long> a){
  deque<long long> tmp;

  for(long long i = 0; i < n; i++) {
    if(i%2==0) tmp.push_back(a[i]);
    else tmp.push_front(a[i]);
  }

  if(n % 2 == 1) reverse(tmp.begin(), tmp.end());

  for(long long i = 0; i < (n-1); i++){
    cout << tmp[i] << " ";
  }

  cout << tmp[n-1] << endl;
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long n;
  scanf("%lld",&n);
  std::vector<long long> a(n);
  for(int i = 0 ; i < n ; i++){
    scanf("%lld",&a[i]);
  }
    solve(n, std::move(a));
    return 0;
}
