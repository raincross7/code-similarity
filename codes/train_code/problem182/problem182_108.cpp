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
  int l = a+b;
  int r = c+d;
  if(l==r){
    cout << "Balanced" << endl;
  }else if(l>r){
    cout << "Left" << endl;
  }else{
    cout << "Right" << endl;
  }
}
