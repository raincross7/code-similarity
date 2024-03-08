#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;
typedef pair<ll,ll> lll;

const ll MOD = 1000000007;
const ll INF = 1e9+5;
const double eps = 1e-7;
const double PI = acos(-1.0);

#define FOR(i,a,b) for(long long i = (long long)(a); i < (long long)(b); i++)
#define RFOR(i,a,b) for(long long i = (long long)(a); i >= (long long)(b); i--)
#define ull unsigned long long
#define deb(x )     cerr << #x << " = "<< x << endl;
#define endl    "\n"
#define coud(a,d) cout << fixed << showpoint << setprecision(d) << a;
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define fill(x, y) memset(x, y, sizeof(y))
#define all(x) (x).begin(), (x).end()
#define bitcount(x) __builtin_popcount(x)
#define cps CLOCKS_PER_SEC
#define verify(x) if(x >= MOD) x -= MOD;

inline void debug_vi(vi a) {FOR(i, 0, a.size()) cout<<a[i]<<" ";}
inline void debug_vll(vll a) {FOR(i, 0, a.size()) cout<<a[i]<<" ";}
inline void print_case(int tn) {cout<<"Case #"<<tn<<": ";}

template<typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

template<typename T>
using maxpq = priority_queue<T>;
/*----------------------------------------------------------------------*/

int main(){
    std::ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n,k; cin>>n>>k;
    vi arr[2]; arr[0].resize(n + 1); arr[1].resize(n + 1);
    FOR(i, 0, n) cin>>arr[0][i];
    int turn = 1;
    FOR(kk, 0, k) {
        FOR(i, 0, n) {
            arr[turn][i] = 0;
        }
        
        FOR(i, 0, n) {
            int l = max(0LL, i - arr[1 - turn][i]);
            int r = min(n - 1LL, i + arr[1 - turn][i]);

            arr[turn][l]++;
            arr[turn][r + 1]--;
        }

        FOR(i, 1, n) {
            arr[turn][i] += arr[turn][i - 1];
        }

        bool br = true;
        FOR(i, 0, n) {
            if(arr[turn][i] != arr[1 - turn][i]) {
                br = false; break;
            }
        }

        if (br || kk == k - 1) {
            FOR(i, 0, n) {
                cout<<arr[turn][i] << " ";
            }
            break;
        }

        turn = 1 - turn;
    }

    return 0;
}