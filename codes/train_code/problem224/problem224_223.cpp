#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <iomanip>
#include <stack>
#include <list>
#include <map>
#include <unordered_map>
#include <chrono>
#include <numeric>
using namespace std;
using ll = long long;
const ll INF = (ll)1e18+1;
const ll DIV = 1000000007;
//#define TEST

vector<ll> all_divs(ll n){
    vector<ll> ret;
    for(ll i = 1 ; i*i <= n ; ++i){
        if(n%i == 0){
            ret.push_back(i);
            if(i*i != n){
                ret.push_back(n/i);
            }
        }
    }
    return ret;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
#ifdef TEST
    chrono::system_clock::time_point start, end;
    start = chrono::system_clock::now();
#endif
    long A,B,K;
    cin >> A >> B >> K;
    vector<ll> divs_a = all_divs(A);
    sort(divs_a.rbegin(), divs_a.rend());
    vector<ll> divs_b = all_divs(B);
    sort(divs_b.rbegin(), divs_b.rend());
    ll count=0;
    ll common;
    for(auto a : divs_a)
    {
        for(auto b: divs_b)
        {
            if(a == b)
            {
                count++;
                if(count==K) common=a;
                break;
            }
        }
    }
    cout << common << endl;
#ifdef TEST
    end = chrono::system_clock::now();
    cerr << static_cast<double>(chrono::duration_cast<chrono::microseconds>(end - start).count() / 1000.0) << "[ms]" << endl;
#endif
    return 0;
}