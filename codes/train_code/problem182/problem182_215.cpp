#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int main(void){
    int a, b, c, d; cin >> a >> b >> c >> d;
  if(a + b > c + d) cout << "Left" << endl;
  else if(a + b < c + d) cout << "Right" << endl;
  else cout << "Balanced" << endl;
    return 0;
}
