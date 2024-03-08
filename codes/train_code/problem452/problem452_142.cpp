#include <iostream>
#include <ios>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <utility>
#include <typeinfo>
#include <tuple>
#include <iterator>
using namespace std;

#define MOD 1000000007
#define INF 1e9+7
#define INF_LONG 1e18
#define rep(i, n) for(int i=0; i<n; ++i)
#define rep1(i, n) for(int i=1; i<=n; ++i)
#define rrep(i, m, n) for(int i=m; i<n; ++i)
#define countof(array) (sizeof(array) / sizeof(array[0]))
typedef long long ll;

#define MAX_N 100000
#define MAX_M 100000
#define MAX_V 100
#define MAX_E 100
#define MAX_Q 100000

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

int ddx[] = {-1, 0, 1, 0, -1, 1, -1, 1};
int ddy[] = {0, -1, 0, 1, 1, 1, -1, -1};

string ab = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
string as = {"abcdefghijklmnopqrstuvwxyz"};

ll gcd(ll x, ll y) {
  if(y==0) return x;
  else return gcd(y, x%y);
}

ll lcm(ll x, ll y) {
  return (x*y)/gcd(x, y);
}

void yes() {
  cout << "Yes" << endl;
}

void no() {
  cout << "No" << endl;
}

void print_array(int array[], int len) {

  for(int i=0; i<len; ++i) {
    cout << array[i] << endl;
  }

}

ll absolute(ll x) {
  return (x<0)? (-1)*x : x;
}

//g++ AtCoder.cpp -o AtCoder
//AtCoder

//--------------------------
//提出するときC++に帰る
//--------------------------

ll n, k, a, b;
map<ll, ll> m;
vector<ll> v;
vector<ll> w;

int main() {

  cin >> n >> k;
  rep(i, n) {
    cin >> a >> b;
    m[a] += b;
  }

  for(auto it : m) {
    if(v.empty()) {
      v.push_back(it.first);
      w.push_back(it.second);
    }else {
      v.push_back(it.first);
      w.push_back(it.second+w[w.size()-1]);
    }
  }

  vector<ll>::iterator itr = lower_bound(w.begin(), w.end(), k);
  cout << v[distance(w.begin(), itr)] << endl;

  return 0;
}
