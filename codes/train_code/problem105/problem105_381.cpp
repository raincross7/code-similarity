#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef long long ll;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define fi first
#define se second

ll dobi(string s)
{
    ll n = (s[0]-'0')*100;
    n += (s[2]-'0')*10;
    n += (s[3]-'0');
    return n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll res = 0LL;
    ll a;
    cin >> a;
    string s;
    cin >> s;
    ll b = dobi(s);
    res = (a * b) / 100;
    cout << res << '\n';
}
