// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
// #include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REPR(i, n) for(ll i = n;i >= 0;i--)
#define FOR(i, m, n) for(ll i = m;i < n;i++)
#define ALL(n) begin(n),end(n)
#define IN(a, x, b) (a<=x && x<b)
#define INIT std::ios::sync_with_stdio(false);std::cin.tie(0);
template<class T> inline T CHMAX(T & a, const T b) { return a = (a < b) ? b : a; }
template<class T> inline T CHMIN(T & a, const T b) { return a = (a > b) ? b : a; }

const long double EPS = 1e-10;
const long long INF = 1e18;
const long double PI = acos(-1.0L);
const long long MOD = 1000000007;

    ll a[2020];
    ll left_num[2020];
    ll right_num[2020];
    ll ans;
    ll right_mul;
    ll left_mul;

long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m; 
    if (u < 0) u += m;
    return u;
}


int main(void){
    ll n;
    ll k;
    cin >> n >> k;
    REP(i,n){
        cin >> a[i];
    }

    if(k==1){
        right_mul = 0;
        left_mul = 1;
    }else{
        right_mul = k*(k+1);
        right_mul %= MOD;
        right_mul *= modinv(2, MOD);
        right_mul %= MOD;

        left_mul = (k-1)*(k);
        left_mul %= MOD;
        left_mul *= modinv(2, MOD);
        left_mul %= MOD;
    }

    REP(base,n){
        REP(target,n){
            if(base == target ){continue;}
            if(base > target){
                if(a[base] > a[target]){
                    left_num[base]++;
                }
            }else{
                if(a[base] > a[target]){
                    right_num[base]++;
                }
            }
        }
    }

    REP(i,n){
        ll tmp;
        //右は x(1+2+...+n)
        tmp = right_num[i] * right_mul;
        ans += (tmp %= MOD);
        ans %= MOD;
        //左は y(1+2+...+n-1)
        tmp = left_num[i] * left_mul;
        ans += (tmp %= MOD);
        ans %= MOD;
        
//        cout << ans << endl;
    }

    cout << ans << endl;

    return 0;
}