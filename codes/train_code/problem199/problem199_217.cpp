# include <bits/stdc++.h>
typedef long long lint;
using namespace std;

lint gcd(lint x, lint y) {
  if(x == 0) { return y; }
  else { return gcd(y%x,x); }
}

lint lcm(lint x, lint y) { return x/gcd(x,y)*y; }

lint C(lint n, lint k) {
  if(n == k) { return 1; }
  else if(n < k) { return 0; }
  else if(k == 0) { return 1; }
  else if(k == 1) { return n; }
  else return C(n-1,k-1) + C(n-1,k);
}

lint P(lint n, lint k) {
  if(k == 1) { return n; }
  return (n*(P(n-1,k-1)%1000000007)%1000000007);
}


int main() {
  lint n,m; cin >> n >> m;
  priority_queue<lint> pq;

  for(lint i=0;i<n;i++) {
    lint a; cin >> a;
    pq.push(a);
  } // init priority queue

  for(lint i=0;i<m;i++) {
    lint a=pq.top();
    pq.pop();
    pq.push(a/2);
  }

  lint ans=0;
  for(lint i=0;i<n;i++) {
    ans += pq.top();
    pq.pop();
  }

  cout << ans << endl;
  return 0;
}
