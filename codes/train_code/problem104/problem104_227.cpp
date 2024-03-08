#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(n);
  for(int i=0; i<n; i++) {
    cin >> a.at(i) >> b.at(i);
  }
  vector<int> c(m);
  vector<int> d(m);
  for(int i=0; i<m; i++) {
    cin >> c.at(i) >> d.at(i);
  }
  for(int i=0; i<n; i++) {
    int mindis = 1000000000;
    int ans = 0;
    for(int j=0; j<m; j++) {
      int x = c.at(j) - a.at(i);
      if(x<0) x = -x;
      int y = d.at(j) - b.at(i);
      if(y<0) y = -y;
      int dis = x + y;
      if(dis < mindis) {
        mindis = dis;
        ans = j+1;
      }
    }
    cout << ans << endl;
  }
}