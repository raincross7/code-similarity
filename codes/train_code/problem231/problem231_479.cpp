#include <bits/stdc++.h>
#define ll long long
#define ls id << 1
#define rs id << 1 | 1
#define mem(array, value, size, type) memset(array, value, ((size) + 5) * sizeof(type))
#define memarray(array, value) memset(array, value, sizeof(array))
#define pb(x) push_back(x)
#define st(x) (1LL << (x))
#define pii pair<int, int>
#define mp(a, b) make_pair((a), (b))
#define Flush fflush(stdout)
using namespace std;
const int N = 500050;
const int inf = 0x3f3f3f3f;
const ll llinf = 0x3f3f3f3f3f3f;
const ll mod = 998244353LL;
const double PI = acos(-1.0);
clock_t TIME__START, TIME__END;
void program_end()
{
#ifdef ONLINE
    printf("\nTime used: %.6lf(s)\n", ((double)TIME__END - TIME__START) / 1000);
    system("pause");
#endif
}
int red, green, blue, k;

void solve()
{
    scanf("%d%d%d%d", &red, &green, &blue, &k);
    int cnt = 0;
    while (green <= red)
        green <<= 1, cnt++;
    while (blue <= green)
        blue <<= 1, cnt++;
    if (cnt > k)
        puts("No");
    else
        puts("Yes");
}

int main()
{
    TIME__START = clock();
    int Test = 1;
    // scanf("%d", &Test);
    while (Test--)
        solve();
    TIME__END = clock();
    program_end();
    return 0;
}