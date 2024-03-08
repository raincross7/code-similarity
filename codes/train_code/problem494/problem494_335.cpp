

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long

#define all(X) (X).begin(), (X).end()
#define reset(X) memset(X, 0, sizeof(X))
#define mp(a, b) make_pair(a, b)
#define pb push_back
#define endl '\n'
#define fi first
#define se second

using namespace __gnu_pbds;
using namespace std;
const int mod = 1e9 + 7;
// const int mod=998244353;
//const int mod=1e9+9;
//const int INF=4e18+10;
const int INF = 4e18 + 10;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define read(n) \
int n;      \
cin >> n;
#define readv(x, n)   \
vector<int> x(n); \
for (auto &i : x) \
    cin >> i;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;

template <typename T1, typename T2>
void set_min(T1 &a, T2 b)
{
    a = min(a, (T1)b);
}

int multiply(int a, int b, int in_mod) { return (a * b) % in_mod; }
int mult_identity(int a) { return 1; }


auto power(auto a, int b, int in_mod)
{
    auto prod = mult_identity(a);
    auto mult = a % in_mod;
    while (b != 0)
    {
        if (b % 2)
        {
            prod = multiply(prod, mult, in_mod);
        }
        mult = multiply(mult, mult, in_mod);
        b /= 2;
    }
    return prod;
}
int mod_inv(int q, int in_mod)
{

    return power(q, in_mod - 2, in_mod);
}
void solve()
{
    int n, a, b;
    cin>>n>>a>>b;
    if(n+1<a+b)
    {
        cout<<-1<<endl;
        return;
    }

    if(n>1)
    {
        if( a== 1)
        {
            if(b != n)
            {
                cout<<-1<<endl;
                return;
            }
        }
        if(b==1)
            if(a!=n)
            {
                cout<<-1<<endl;
                return;
            }
    }

    if(a>=b)
    {
        int mn = (n+b-1)/b;
        int mx = n - b+1;
        if(a<mn || a>mx)
        {
            cout<<-1<<endl;
        }
        else
        {
            vector<int> storage;
            for(int i= n;i>=1;i--)
                storage.pb(i);
            int parts_left = b;
            int num_left = n;
            for(int part = 0;n - (part)*a>0;part++)
            {
                int left_after_this = num_left -a;
                int parts_left_after_this = parts_left-1;
                if(left_after_this>=parts_left_after_this)
                {

                    sort(storage.begin()+ part*a, storage.begin()+(part+1)*a);
                }
                else
                {
                    int buffer = num_left - parts_left_after_this;
                    sort(storage.begin()+ part*a, storage.begin() + part*a + buffer);
                    break; 
                }
                num_left-=a;
                parts_left--;
            }
            for(auto i:storage)
                cout<<i<<" ";

        }
    }
    if(a<b)
    {
        swap(a,b);
        int mn = (n+b-1)/b;
        int mx = n - b+1;
        if(a<mn || a>mx)
        {
            cout<<-1<<endl;
        }
        else
        {
            vector<int> storage;
            for(int i= 1;i<=n;i++)
                storage.pb(i);
            int parts_left = b;
            int num_left = n;
            for(int part = 0;n - (part)*a>0;part++)
            {
                int left_after_this = num_left -a;
                int parts_left_after_this = parts_left-1;

                if(left_after_this>=parts_left_after_this)
                {

                    reverse(storage.begin()+ part*a, min(storage.begin()+(part+1)*a, storage.end()));
                }
                else
                {
                    int buffer = num_left - parts_left_after_this;
                    reverse(storage.begin()+ part*a, storage.begin() + part*a + buffer);
                    break; 
                }
                num_left-=a;
                parts_left--;
            }
            for(auto i:storage)
                cout<<i<<" ";
        }
    }
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cerr.tie(NULL);
#ifndef ONLINE_JUDGE
    if (fopen("INPUT.txt", "r"))
    {
        freopen("INPUT.txt", "r", stdin);
        freopen("OUTPUT.txt", "w", stdout);
    }
#endif
    auto clk = clock();
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    // -------------------------------------Code starts here---------------------------------------------------------------------

    int t = 1;
    // cin >> t;

    for (int test = 1; test <= t; test++)
    {
        // cout<<"Case #"<<test<<":\n";
        //cout<<"Trip #"<<test<<": ";
        // cout<<endl;
        solve();
        // solveB();

        // cout<<endl;
    }

    // -------------------------------------Code ends here------------------------------------------------------------------

    clk = clock() - clk;
    // cerr << fixed << setprecision(6) << "Time: " << ((long double)clk) / CLOCKS_PER_SEC << "\n";
    return 0;
}
