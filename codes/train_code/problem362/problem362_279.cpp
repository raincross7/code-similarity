/*input
100 100 100
*/
#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops,no-stack-protector")
#pragma GCC target("sse,sse2,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define watch(x) cout << (#x) << " is " << (x) << endl
#define debug cout << "hi" << endl

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

const int MOD = 1e9 + 7;
const int INF32 = 1<<30;
const ll INF64 = 1LL<<60;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a(3);
    vector<int> d;
    for(int i = 0; i < 3; i++) cin >> a[i];
    for(int i = 0; i < 3; i++) for(int j = i + 1; j < 3; j++) d.push_back(abs(a[i] - a[j]));
    sort(d.begin(), d.end());
	cout << d[0] + d[1];

    return 0;
}