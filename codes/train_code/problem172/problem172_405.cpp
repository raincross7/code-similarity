/*
    Author: Aryan Yadav
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define f(i, a, b) for (long long i = a; i < b; i++)
#define rep(i, a, b) for (long long i = a; i <= b; i++)
#define fm(i, a, b) for (long long i = a; i > b; i--)
#define repm(i, a, b) for (long long i = a; i >= b; i--)
#define vi vector<int>
#define vl vector<long long>
#define vs vector<string>
#define pqmaxi priority_queue<int>
#define pqmaxl priority_queue<ll>
#define pqmini priority_queue<int, vi, greater<int>>
#define pqminl priority_queue<ll, vl, greater<ll>>
#define all(x) x.begin(), x.end()
#define test     \
    ll test;     \
    cin >> test; \
    while (test--)
#define pb(i) push_back(i)
#define mp(i, j) make_pair(i, j)
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fast;
    ll n;
    cin >> n;
    vl v(n);
    f(i, 0, n)
    {
        cin >> v[i];
    }
    ll min1 = mod;
    ll max1 = -mod;
    f(i, 0, n)
    {
        min1 = min(min1, v[i]);
        max1 = max(max1, v[i]);
    }
    ll ans = mod;
    f(j, min1, max1 + 1)
    {
        ll cst = 0;
        f(i, 0, n)
        {
            cst += (v[i] - j) * (v[i] - j);
        }
        ans = min(ans, cst);
    }
    cout << ans;
}