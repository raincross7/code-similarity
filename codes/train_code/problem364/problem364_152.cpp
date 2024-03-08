#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <numeric>
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <bitset>
#include <queue>
#include <map>
#include <utility>
#include <functional>
#include <iomanip>
#include <unordered_map>
#include <set>
using namespace std;
using ull = unsigned long long;
using  ll =long long ;
using  prll =pair<ll, ll>;
static const ll MOD = 1000000007;           //10億　= 10^9になってる
static const ll mINF = -922337200085470000; //llのmax-1桁の小さい方
static const ll pINF = 1LL << 60;
static const ull uINF=  1844674407399900000; //ullのmax-1桁してる
static const double  pi = 3.1415926535897932384;
static const ll juu = 100000;             //10万 10e5
static const ll hyaku = 1000000;         //100万　10e6
static const ll dx[4] = {0,0,1,-1}; //上下左右のベクトル
static const ll dy[4] = {1,-1,0,0}; //上下左右のベクトル
#define all(v) v.begin(), v.end()
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
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
 
/*intで収まる範囲であってくれ*/
ll nCr(ll n, ll r)
{
    ll val = 1;
    ll i;
    if (r == 0)
        return 1;
    for (i = 0; i < n - r; i++)
    {
        val *= (n - i);
        val /= (i + 1);
    }
    return val;
}
/*intで収まる範囲であってくれ*/
ll nPr(ll n, ll r)
{
    ll val = 1;
    ll i;
    for (i = 0; i < r; i++)
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
    ll n, k, m,l;
    ll ans = 0;
    ll sum = 0;
    vector<ll> v;
    ll a,b;
    cin>>k>> a >>b;
    if((b-a)%2 ==0){
    	cout <<"Alice";
    	return 0;
    	}
    else{
    	cout << "Borys";
    	return 0;
    	}
    return 0;
}

