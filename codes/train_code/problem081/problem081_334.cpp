#include <bits/stdc++.h>
using namespace std;

#define int           long long
#define S             second
#define F             first
#define pb            push_back
#define all(c)        (c).begin(),(c).end()
#define rall(c)       (c).rbegin(),(c).rend() 
#define lb            lower_bound
#define si(c)         (int)((c).size())
#define lcm(a, b)      (a * (b / __gcd(a,b)))  
#define inf           (long long)(1e15)
//#define endl          '\n'
#define mp            make_pair
#define time(s)       (double(clock()-s)/double(CLOCKS_PER_SEC))
#define debug(args...)    _F(#args, args)
#define vi            std::vector<int>
#define pii           pair<int, int> 
#define vpi           vector<pii>

clock_t start;
mt19937_64 rng(chrono::system_clock::now().time_since_epoch().count());

template<typename T> void _F(const char *name, T arg1){
    cerr << name << " = " << arg1 << endl;
}template<typename T, typename... Args> void _F(const char *names, T arg1, Args... args){
    const char *name = strchr(names, ',');
    cerr.write(names, name-names) << " = " << arg1 << endl;
    _F(name+2, args...);
}
template<typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2> &q){
    in >> q.F >> q.S; return in;
}template<typename T1, typename T2> ostream& operator<<(ostream& out, pair<T1, T2> &q){
    out << q.F << " " << q.S; return out;
}template< typename T1, typename T2> pair<T1, T2> operator+(pair<T1, T2> p1, pair<T1, T2> p2){
    return {p1.F+p2.F, p1.S+p2.S};
}template< typename T1, typename T2> pair<T1, T2> operator-(pair<T1, T2> p1, pair<T1, T2> p2){
    return {p1.F-p2.F, p1.S-p2.S};
}

const int mod = 1e9+7;

int modPow(int x, int p){
    int ans = 1;
    while(p){
        if(p&1)ans = (ans*x)%mod;
        x = (x*x)%mod;
        p >>= 1;
    }
    return ans;
}

void solve(){
    int n, k;
    cin >> n >> k;
    int ans[k+1];
    int res = 0;
    memset(ans, 0, sizeof(ans));
    for(int i = k; i >= 1; i--){
        for(int j = 2*i; j <= k; j += i)
            ans[i] = (ans[i]-ans[j]+mod)%mod;
        ans[i] = (ans[i]+modPow(k/i, n))%mod;
        res = (res+ans[i]*i)%mod;
    }
    cout << res << endl;
}

signed main(){

    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);   

    int t = 1;
    start = clock(); 

    cout << fixed << setprecision(12);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    // #endif

    //cin >> t;

    for(int i = 1; i <= t; ++i){
        //cout << "Case #" << i << ": ";
        solve();
        //cout << endl;
    }
    //cerr << time(start);
    return 0;
}