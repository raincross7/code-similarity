/*                                 ___ _____ 
  ___  _ __ ___   ___  __ _  __ _ / _ \___  |
 / _ \| '_ ` _ \ / _ \/ _` |/ _` | | | | / / 
| (_) | | | | | |  __/ (_| | (_| | |_| |/ /  
 \___/|_| |_| |_|\___|\__, |\__,_|\___//_/   
                      |___/            
*/
// Getting better at it ! ! !
#include <bits/stdc++.h>
#include <string.h>
#define int long long
#define MAX (int)(1e7+5)
#define MAX2D (int)(1e3+5)
#define itn int
#define inf 5e18
#define MOD (int)(1e9 + 7)
#define pb push_back
#define mk make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(),x.rend()
#define sitr set<int>::iterator
#define mitr map<int, int>::iterator
#define pii pair<int, int>
#define vii vector<pii>
#define vi vector<int>
#define vll vector<unsigned int>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define fast                       \
    ios_base ::sync_with_stdio(0); \
    cin.tie(NULL);                 \
    cout.tie(NULL)
using namespace std;

void __print(int x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define see(x...)                 \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define see(x...)
#endif
/*
int a[(int)MAX];
vi v;
void sieve(int max = (int)1e7) {
    for(int i=0;i<=max;i++) a[i] = 1;
    a[0] = a[1] = 0;
    for(int i=2;i<=(int)sqrt(max);i++) {
        if(a[i] == 1) {
            for(int j=i*i;j<=max;j+=i) a[j] = 0;
            v.pb(i);
        }
    }
    for(int i=(int)sqrt(max)+1;i<=max;i++) {
        if(a[i] == 1) v.pb(i);
    }
}
*/
int SPF[(int)MAX];
void spf(int max = (int)1e7) {
    for(int i=0;i<=max;i++) SPF[i] = 1;
    SPF[0] = SPF[1] = 0;
    for(int i=2;i<=sqrt(max);i++) {
        if(SPF[i] == 1) {
            for(int j = i;j<=max;j+=i) if(SPF[j] == 1) SPF[j] = i;
        }
    }
    for(int i=sqrt(max)+1;i<=max;i++) if(SPF[i] == 1) SPF[i] = i;
}


//calculate factorial...
//vi f(MAX); void fact(int max = (int)1e7){f[0] = 1, f[1] = 1;for (int i = 2; i <= max; i++)f[i] = (i * f[i - 1]) % MOD;}

//int nCrMODm(int n, int r, int m = MOD){fact();if(r == 0) return 1; int x = f[n], y = f[n - r], z = f[r]; return (x * mod__inverse(y) % m * mod__inverse(z) % m + m) % m;}
//int I_fpow(int x,int y,int p = MOD){int res = 1;x = x % p;while (y > 0){if (y & 1) res = (res * x) % p;y = y >> 1;x = (x * x) % p;} return res;}

//int palindrome (string s){int x; if(!(s.length()%2)) x = s.length()/2 - 1; else x = s.length()/2; for(int i=0;i<=x;i++) {if(s[i] != s[s.length()-1-i]) return 0; } return 1; }
//int palindrome (int n){int x;string s = tostring(n); if(!(s.length()%2)) x = s.length()/2 - 1; else x = s.length()/2; for(int i=0;i<=x;i++) {if(s[i] != s[s.length()-1-i]) return 0; } return 1; }
//int toint(const string &s) {stringstream ss; ss << s; int x; ss >> x; return x;}
//string tostring ( int number ){stringstream ss; ss<< number; return ss.str();}
// Addition of 2 strings ... based on the addition performed with the help of carry.
//string add2strings(string s1,string s2){if(s1.length()>s2.length())swap(s1,s2);int n = s1.length();int m = s2.length();int carry = 0;reverse(all(s1));reverse(all(s2));string ans = "";for(int i=0;i<n;i++){int sum = (char)(s1[i]-'0')+(char)(s2[i]-'0')+carry;ans += (char)(sum%10 + '0');carry = sum/10;}for(int i=n;i<m;i++){int sum = (char)(s2[i]-'0')+carry;ans += (char)(sum%10 + '0');carry = sum/10;}if(carry)ans += (char)(carry+'0');reverse(all(ans));return ans;}

//key to euclids extended --> gcd(a,b) = gcd(b,a%b)
//also a%b = a-(a/b)*b;
//hence ax+by = bx1+(a%b)y1.. ax+by = bx1+(ay1-(a/b)*by1)..
//comparing x = y1;
//y = x1-(a/b)*y1
//void extendedEuclid(int a,int b,int &x,int &y){int res;if(b == 0){res = a;x = 1;y = 0;}else{extendedEuclid(b,a%b,x,y);int t = x;x = y;y = t - (a/b)*x;}}

//if m is prime fermats little theorem can be used
//int modInverse(int a,int m){return I_fpow(a,m-2);}

//if not
//In extendedGCD x is the mod mult inverse of a under b and y is the mod mult inverse of b under a
//Inverse exist if a,m is co-prime
//int mod__Inverse(int a,int m){int x,y;extendedEuclid(a,m,x,y); return (x%m+m)%m;}
int rr[] = {-1,0,1,0};
int cc[] = {0,1,0,-1};

signed main()
{
    fast;
    int n;
    cin>>n;
    vector<pair<pii,int>> v(n-1);
    for(int i=0;i<n-1;i++) cin>>v[i].first.first>>v[i].first.second>>v[i].second;
    vi ans(n);
    for(int i=0;i<n-1;i++) {
        int arriveati = v[i].first.second+v[i].first.first;
        for(int j=i+1;j<n-1;j++) {
            if(arriveati > v[j].first.second) {
                int g = arriveati-v[j].first.second;
                int f = 0;
                if(g%v[j].second) f = 1;
                g /= v[j].second;
                if(f) g++;
                g *= v[j].second, g += v[j].first.second;
                arriveati += (g-arriveati);
            } else arriveati += (v[j].first.second-arriveati);

            arriveati += v[j].first.first;
        }
        ans[i] = arriveati;
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<"\n";
    return 0;   
}


/*
max factors number = 720720 --> 240 factors
max factors number = 1441440 -->288 factors
Beautiful program
Please run for me.
I've tried you in BASIC,
FORTRAN and C.
Beautiful program,
You've errors galore.
And each time I run you,
You're swapped out of core.
*/
