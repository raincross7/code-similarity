
#include <bits/stdc++.h>
#define int long long
#define ALL(v) (v).begin(),(v).end()
#define Vi vector<int>
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repr(i,a,b) for(int i=a;i>b;i--)
#define leng(n) (int)(log10(n)+1)
#define INF 9000000000000000000
#define MOD 1000000007
using namespace std;

int gcd(int a,int b){return b?gcd(b,a%b):a;}  //  最大公約数gcd
int lcm(int a,int b){return a/gcd(a,b)*b;}  //  最小公倍数lcm

signed main() {
  string s;
  cin >> s;
  s += "zzzz";
  if(s[0]=='Y'&&s[1]=='A'&&s[2]=='K'&&s[3]=='I') cout << "Yes" << endl;
  else cout << "No" << endl;
}