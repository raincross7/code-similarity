#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i < n; i++)
#define repd(i, n) for (int i = n-1; i > -1; i--)
#define repran(i, a,b) for (int i = a; i<b;i++)
#define all(x) (x).begin(), (x).end()
#define v(T) vector<T>
#define vv(T) vector<v(T)>
typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
int main()
{
    long double n, m, d;
    cin >> n >> m >> d;
    long double p;
    if (d == 0) {p = 1/n;}
    else p = 2*(n-d)/(n*n);
    cout << fixed << setprecision(7) << (m-1)*p << endl;
}
