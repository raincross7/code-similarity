#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)



int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
	string x,y;
  cin >> x >> y;
  if(x==y) cout << "=" << endl;
  else if(x>y) cout << ">" << endl;
  else cout << "<" << endl;

  return 0;
    

}