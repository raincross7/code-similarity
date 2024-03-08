//////////////////////////
/*      _        ____   */
/*  U  /"\  u U /"___|  */
/*   \/ _ \/  \| | u    */
/*   / ___ \   | |/__   */
/*  /_/   \_\   \____|  */
/*   \\    >>  _// \\   */
/*  (__)  (__)(__)(__)  */
/*  Compro by NULL_CT©  */
//////////////////////////
/*STL Libs*/
#include <algorithm>
#include <array>
#include <bitset>
#include <cctype>
#include <chrono>
#include <cmath>
#include <complex>
#include <cstdint>
#include <cstdlib>
#include <deque>
#include <functional>
#include <iomanip>
#include <ios>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

/*Boost*/
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>

#define REP(i, lower, upper) for (long long i = lower; i < upper; i++)
#define ALL(list) (list.begin()), (list.end())

using namespace std;
using bint = boost::multiprecision::cpp_int;
typedef long long ll;

constexpr int MOD = 10000007;

vector<long long> divisor(long long n) {
  vector<long long> head, tail;
  for (long long i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      head.push_back(i);
      if (i * i != n)
        tail.push_back(n / i);
    }
  }
  head.insert(head.end(), tail.rbegin(), tail.rend());
  return (head);
}

//--------------------------------

void execute() {
  string s;
  cin >> s;
  ll size = s.size();
  vector<ll> ls(s.size() + 1, 0);
  // 0 <(0) 1 <(1) 2

  for (ll i = 0; i < size; i++)
    if (s[i] == '<')
      ls[i + 1] = ls[i] + 1;

  for (ll i = size - 1; i >= 0; i--)
    if (s[i] == '>')
      ls[i] = max(ls[i], ls[i + 1] + 1);

  ll ans = 0;
  for (auto i : ls) {
    ans += i;
  }
  cout << ans << endl;
}

//--------------------------------

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  // cout<<fixed<<setprecision(20);

  execute();

  return (0);
}
