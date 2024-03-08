	#include <cstdio>
	#include <cstdlib>
	#include <cmath>
	#include <cstring>
	#include <numeric>
	#include <string>
	#include <complex>
	#include <algorithm>
	#include <iostream>
	#include <vector>
	#include <bitset>
	#include <deque>
	#include <queue>
	#include <map>
	#include <utility>
	#include <functional>
	#include <iomanip>
	#include <unordered_map>
	#include <set>
	using namespace std;
	using ull = unsigned long long;
	using ll = long long;
	using prll = pair<ll, ll>;
	constexpr ll MOD = 1000000007;           //10億　= 10^9になってる
	constexpr ll mINF = -922337200085470000; //llのmax-1桁の小さい方
	constexpr ll pINF = 1LL << 60;
	constexpr ull uINF = 1844674407399900000; //ullのmax-1桁してる
	constexpr double pi = 3.1415926535897932384;
	constexpr ll juu = 100000;          //10万 10e5
	constexpr ll hyaku = 1000000;       //100万　10e6
	constexpr ll dx[4] = {0, 0, 1, -1}; //上下左右のベクトル
	constexpr ll dy[4] = {1, -1, 0, 0}; //上下左右のベクトル
	#define all(v) v.begin(), v.end()
	#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
	#define Debug(xx) cerr << " DEBUG:"<< xx <<endl;

	ll factor[300];
	ll memory[300];
	/*素朴法で計算
	factorは必ずmemset(factor,0,sizeof(factor));
	グローバルであるmemoryに個数を書き込む
	memory配列の走査にはfactorの要素を使う*/
	void primefac(ll num)
	{
	    int i = 0, kosuu = 0;
	    while (*(factor + i) != 0)
	    {
	        while (num % *(factor + i) == 0)
	        {
	            num /= *(factor + i);
	            memory[*(factor + i)] += 1;
	        }
	        if (num == 1)
	            break;
	        i++;
	    }
	}
	/*グローバルにあるfactorに素数書き込む.個数を返すので配列は-1しろforは<*/
	int elast(ll number)
	{
	    ll tmp = 0;
	    int flag = 0;
	    *factor = 2;
	    for (int i = 3; i <= number; i++)
	    {
	        flag = 0;
	        for (int j = 0; j <= tmp; j++)
	        {
	            if (i % (*(factor + j)) == 0)
	            {
	                flag = 1;
	                break;
	            }
	        }
	        if (flag)
	            continue;
	        tmp += 1;
	        *(factor + tmp) = i;
	    }
	    return tmp + 2;
	}
	//繰り返し二乗。掛けられる数、回数、mod
	ll powpow(ll n, ll p)
	{
	    if (p == 1)
	        return n % MOD;
	    if (p % 2 == 1)
	    {
	        return (n * powpow(n, p - 1)) % MOD;
	    }
	    ll dob = powpow(n, p / 2);
	    return (dob * dob) % MOD;
	}
	//MODとn、rが互いに素である事が確定していないとこれは出来ない。小定理、またchild,parentでおかしくなる。 mod取った後にそれら同士で割り算するとおかしくなるから逆元使う。（合同式の性質考えろ）
	ll nCrMod(ll n, ll r)
	{
	    ll child = 1;
	    ll parent = 1;
	    if (r == 0)
	        return 1;
	    for (ll i = 0; i < r; ++i)
	    {
	        child = child * (n - i) % MOD;
	        parent = parent * (r - i) % MOD;
	    }
	    ll ans = child * powpow(parent, MOD - 2);
	    return ans % MOD;
	}
	ll nCr(ll n, ll r)
	{
	    ll val = 1;
	    ll i;
	    if (r == 0)
	        return 1;
	    for (i = 0; i < r; ++i)
	    {
	        val *= (n - i);
	        val /= (r - i);
	    }
	    return val;
	}
	ll nPr(ll n, ll r)
	{
	    ll val = 1;
	    ll i;
	    for (i = 0; i < r; ++i)
	    {
	        val *= (n - i);
	    }
	    return val;
	}
	template <typename T>
	bool chmin(T &a, const T b)
	{
	    if (a > b)
	    {
	        a = b;
	        return true;
	    }
	    return false;
	}
	template <typename T>
	bool chmax(T &a, const T b)
	{
	    if (a < b)
	    {
	        a = b;
	        return true;
	    }
	    return false;
	}
	
	/*ソートして被りを無くす*/
	template <typename T>
	void eraseSame(T &a)
	{
	    sort(all(a));
	    a.erase(unique(all(a)), a.end());
	}
	
	/*aとbで大きい方を後ろにする。変更なしならtrue、ありならfalse */
	template <typename T>
	bool swapmax(T &a, T &b)
	{
	    T temp;
	    temp = a;
	    if (a > b)
	    {
	        a = b;
	        b = temp;
	        return false;
	    }
	    return true;
	}
	ll gcd(ll x, ll y) { return (x % y) ? gcd(y, x % y) : y; }
	ll lcm(ll x, ll y) { return x / gcd(x, y) * y; }
	
	/*一行に入力が何個あるかを1,ぶち込むvectorを2*/
	template <typename T>
	void splitIn(ll N, vector<T> &array)
	{
	    T temp;
	    int i = 0;
	    if (N == 0)
	    {
	        return;
	    }
	    array.resize(N);
	    while (cin >> temp)
	    {
	        array[i] = temp;
	        i++;
	        if (i >= N)
	        {
	            break;
	        }
	    }
	    return;
	}
	int main()
	{
	    ios::sync_with_stdio(false);
	    cin.tie(0);
	    //setprecision(15);
	    ll n, k, m, l=0,
	    	ans = 0,
	    	sum = 0;
	    ll a= 0,b=0,c=0;
	    vector<double> v;
	    cin >> n >>m >> l;
	    splitIn(n,v);
		sort(all(v));
		for(auto &o:v){
			if(o <=m)a++;
			else if(o >= m+1 && o <= l)b++;
			else c++;
			}
		
		cout << min(a,min(b,c));
	    return 0;
	}
