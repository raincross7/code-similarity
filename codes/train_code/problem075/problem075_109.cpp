#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define repo(i,n) for(int i = 1; i < (int)(n); i++)
#define pb push_back
#define np next_permutation
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define mod 1000000007
#define pi acos(-1.0)
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }
ll lcm(ll x, ll y) { return x / gcd(x, y) * y; }
//cout << fixed << setprecision (20);   小数点以下2０桁まで
//intの最大値2147483647 ≒ 2×10^9
//long longの最大値9223372036854775807 ≒ 9×10^18
//'0'+=16;        で大文字に
//'大文字'+=32;    で小文字に
//s[i]-'0'でchar文字→int数に;
//string s = to_string(int数);
//int n = stoi(string文字列)
//実行時間制約2秒では２×10^8回くらいまで計算できる


int main() {
  int x;
  cin >> x;
  
  if(x>=9900) {
  cout << 1 << endl;
  return 0;
  }
  
  rep(i,100){
    rep(j,(x-100*i)/101+1){
      rep(k,(x-100*i-101*j)/102+1){
        rep(l,(x-100*i-101*j-102*k)/103+1){
          rep(m,(x-100*i-101*j-102*k-103*l)/104+1){
            if((x-100*i-101*j-102*k-103*l-104*m)%105==0){
            cout << 1 << endl;
            return 0;
            }
          }
        }
      }
    }
    if(i==99) cout << 0 << endl;
  }
  
}