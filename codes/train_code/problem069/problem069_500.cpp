#include <bits/stdc++.h>
#include <math.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<int, int> P;

const int MOD = 1000000007;
const int INF_32 = 1LL << 30;
const int64_t INF_64 = 1LL << 60;

int main()
{
    char b;
    cin >> b;
    char ans;
    if (b == 'A')
        ans = 'T';

    if (b == 'T')
        ans = 'A';

    if (b == 'C')
        ans = 'G';

    if (b == 'G')
        ans = 'C';

    cout << ans << endl;

    return 0;
}