#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <iomanip>
#include <cmath>
#include <queue>
#include <bitset>
#include <numeric>
#include <array>
#include <cstring>
#include <random>
#include <chrono>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define make_unique(x) sort(all((x))); (x).resize(unique(all((x))) - (x).begin())
typedef long long ll;
typedef long double ld;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int main() {

  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  ll n, m;

  cin >> n >> m;

  if(n == 1 || m == 1) {
    cout << 1;
    return 0;
  }

  cout << (n % 2 == 0 ? (m * n / 2) : (m * (n - 1) / 2 + (m / 2) + (m % 2)));

  return 0;
}
/*
x
x
x
*/
