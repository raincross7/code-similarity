#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <set>
using namespace std;
typedef long long int ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define yes cout << "yes" << endl
#define NO cout << "NO" << endl
#define No cout << "No" << endl
#define no cout << "no" << endl

const int INF = 1001001001;
const int mod = 1000000007;
#define PI 3.14159265359;

void P(int x) {cout << x << endl;}
void P(long x) {cout << x << endl;}
void P(double x) {cout << x << endl;}
void P(ll x) {cout << x << endl;}
void P(string x) {cout << x << endl;}
void P(char x) {cout << x << endl;}

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  string s;
  cin >> s;
  int flag[3];
  rep (i, 3) {
    flag[i] = 0;
  }
  rep (i, 3) {
    if (s[i] == 'a') flag[0] = 1;
    if (s[i] == 'b') flag[1] = 1;
    if (s[i] == 'c') flag[2] = 1;
  }
  int flagA = 1;
  rep (i, 3) {
    if (flag[i] == 0) flagA = 0;
  }

  if (flagA) Yes;
  else No;
  return 0;
}
