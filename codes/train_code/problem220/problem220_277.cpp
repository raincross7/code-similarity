#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define INF 1e9
#define PI 3.14159265359
#define MOD 1000000007
#define ALL(v) v.begin(),v.end()
#define ALLR(v) v.rbegin(),v.rend()
typedef long long ll;
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};
//isPrime
//modpow modinv
//getDigit
int main() {
  cout << fixed << setprecision(10);
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  bool p = (abs(a-b)<=d)&&(abs(b-c)<=d);
  bool q = abs(a-c)<=d;
  if(p||q){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}