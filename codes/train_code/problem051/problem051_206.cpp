#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
#define ll long long
#define pi pair<int,int>
#define pl pair<ll,ll>
#define pd pair<double,double>
#define ld long double
#define pld pair<ld,ld>
#define lg length()
#define sz size()
#define vi vector<int>
#define vl vector<ll>
#define vp vector<pi>
#define vpl vector<pl>
#define pb push_back
#define INF 1000000005
#define LINF 1000000000000000005

int a,b,c;

int32_t main(){
    /*seed_seq seq{
        (uint64_t) chrono::duration_cast<chrono::nanoseconds>(chrono::high_resolution_clock::now().time_since_epoch()).count(),
        (uint64_t) __builtin_ia32_rdtsc(),
        (uint64_t) (uintptr_t) make_unique<char>().get()
    };
    mt19937 rng(seq);*/
    ios_base :: sync_with_stdio(0); cin.tie(); cout.tie();

    cin >> a >> b >> c;
    if(a==b && b==c) cout << "Yes";
    else cout << "No";
}
