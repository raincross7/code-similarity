#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <bitset>
#include <cmath>
#include <functional>
#define vv(a, b, c, d) vector<vector<d> >(a, vector<d>(b, c))
#define vvi vector<vector<int> >
#define vvl vector<vector<ll> >
#define vll vector<ll>
#define rep(c, a, b) for(ll c=a;c<b;c++)
#define re(c, b) for(ll c=0;c<b;c++)
#define all(obj) (obj).begin(), (obj).end()
typedef long long int ll;
typedef long double ld;
using namespace std;
int main(int argc, char const *argv[]) {
  string s;std::cin >> s;
  if(s.size()>=4&&s[0]=='Y'&&s[1]=='A'&&s[2]=='K'&&s[3]=='I') std::cout << "Yes" << '\n';
  else std::cout << "No" << '\n';
}
