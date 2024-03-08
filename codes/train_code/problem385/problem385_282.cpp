#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> p_ll;
typedef vector<pair<ll, ll>> vec_p; //vector<pair<ll, ll>> pairs(n) ,pairs.at(i) = make_pair(i*i, i)

#define ture ture
#define flase false
#define falg flag

#define REP(i, x) for (ll i = 0; i < (ll)(x); i++)
#define REPS(i, x) for (ll i = 1; i <= (ll)(x); i++)
#define RREP(i, x) for (ll i = ((ll)(x)-1); i >= 0; i--)
#define RREPS(i, x) for (ll i = ((ll)(x)); i > 0; i--)
#define all(x) (x).begin(), (x).end()

const ll MOD = pow(10, 9) + 7;
const ll LLINF = pow(2, 61) - 1;//llの最大9*10^18
const int INF = pow(2, 30) - 1;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll N;
    string S;
    cin >> N;
    vector<ll> B(N-1);
    REP(i,N-1){
        cin >> B.at(i);
    }
    vector<ll> A(N);
    A.at(0) = B.at(0);
    REPS(i,N-2){
        A.at(i) = min(B.at(i - 1), B.at(i));
    }
    A.at(N - 1) = B.at(N - 2);

    ll ans = 0;
    REP(i, N)
    {
        ans += A.at(i);
    }
    cout << ans << endl;
}
