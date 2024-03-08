#include <bits/stdc++.h>
// #include <atcoder/all>
#define ll long long int
#define ld long double
#define yorn(f) cout<<((f)?"Yes":"No")<<endl;
#define YORN(f) cout<<((f)?"YES":"NO")<<endl;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define repi(i, n) for (ll i = 1; i < (ll)(n); i++)
#define all(x) (x).begin(), (x).end()
#define put(x) cout << x << endl;
#define println(x) cout << x << endl;
using namespace std;
// using namespace atcoder;
void Main()
{
    ll n, K;
    cin >> n >> K;

    vector<ll> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];
    
    vector<ll> dict;
    rep(i, n) {
        dict.push_back(x[i]);
        dict.push_back(x[i]-1);
        dict.push_back(x[i]+1);
        dict.push_back(y[i]);
        dict.push_back(y[i]-1);
        dict.push_back(y[i]+1);
    }

    sort(all(dict));

    // 圧縮
    vector<ll> u(n), v(n);
    rep(i, n) {
        u[i] = lower_bound(all(dict), x[i]) - dict.begin();
        v[i] = lower_bound(all(dict), y[i]) - dict.begin();
    }

    ll m = dict.size();
    vector<vector<ll> > S(m, vector<ll>(m));

    rep(i, n) {
        S[v[i]][u[i]]++;
    }

    rep(y, m) {
        repi(x, m) {
            S[y][x] = S[y][x-1] + S[y][x];
        }
    }
    
    rep(x, m) {
        repi(y, m) {
            S[y][x] = S[y-1][x] + S[y][x];
        }
    }

    // S[y][x] (x,y)までの領域に含まれる個数
    ll res = -1;

    auto us = u;
    auto vs = v;
    sort(all(us));
    sort(all(vs));

    for (ll i = 0; i < n - 1; i++) {
        for (ll j = i + 1; j < n; j++) {
            for (ll iy = 0; iy < n - 1; iy++) {
                for (ll jy = iy + 1; jy < n; jy++) {
                    ll l = us[i];
                    ll r = us[j];
                    ll b = vs[iy];
                    ll t = vs[jy];
                    ll cnt = S[t][r] - S[b-1][r] - S[t][l-1] + S[b-1][l-1];

                    if (cnt >= K) {
                        ll L = dict[l];
                        ll R = dict[r];
                        ll B = dict[b];
                        ll T = dict[t];
                        ll area = (R - L) * (T - B);
                        if (res < 0) {
                            res = area;
                        }
                        else {
                            res = min(area, res);
                        }
                    }
                   
                }
            }
        }
    }

    put(res);
}
signed main(){ Main();return 0;}