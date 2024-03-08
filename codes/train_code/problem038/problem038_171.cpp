#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <sstream>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef vector <vector <int>> vii;
typedef vector <long long> vll;
typedef vector <string> vs;
typedef vector <char> vc;
typedef set <int> si;
typedef set <string> ss;
typedef queue <int> qi;
typedef queue <long long> qll;
typedef queue <string> qs;
typedef queue <char> qc;
typedef struct board board;
typedef pair <int, int> pi;
typedef pair <long long, long long> pll;
typedef pair <int, pair<int, int>> pii;

#define eb emplace_back
#define ppb pop_back
#define clr(a) a.clear()
#define F first
#define S second
#define mkp make_pair

#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()

#define left(x) x * 2
#define right(x) x * 2 + 1

#define meme(a, b, c) fill(a + 1, a + 1 + b, c)

#define max(a, b) (a > b ? a : b)
#define min(a, b) (a > b ? b : a)
#define abs(a) (a > 0? a : -(a))

#define move(s) s += "#"

#define eprintf(...) fprintf(stderr, __VA_ARGS__);

template <typename T>
void printArr(const T * arr, int s, int fn) {
    for (int i = s; i <= fn; ++ i) cout << arr[i] << " ";
    cout << '\n';
}

template <typename T>
long long minArr(const T * arr, int s, int fn) {
    ll res = 1e16 + 1;
    for (int i = s; i <= fn; ++ i) {
        res = min(res, arr[i]);
    }
    return res;
}

template <typename T>
void printVec(const T * arr) {
    for (int i = 0; i < sz(arr); ++ i) cout << arr[i] << " ";
    cout << '\n';
}

template <class T>
bool uax(T&a, const T& b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

template <class T>
bool uin (T&a, const T& b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

void to_pray() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

const int N = 4e6 + 10;
const int NN = 1e3 + 10;
const int NNN = 2e3 + 9;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 7;
const ll LLINF = 1e12 + 7;
const ll P = 53;
const int EPS = 1e-9 - 8;
const int vN = 2e4 + 10;
const int sz = (1 << 22) - 1;
const double PI = acos(-1);

ll ans = 1;

int cnt[N];

main () {
    to_pray();
    
    string s;
    cin >> s;

    for (int i = 0; i < sz(s); ++ i) {
        ans += i;
        ans -= cnt[s[i] - 'a']++;
    }

    cout << ans;
	
    //eprintf("%.18lf seconds\n", (double)clock() / CLOCKS_PER_SEC);

    return 0;
}