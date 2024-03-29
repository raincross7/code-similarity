#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<complex>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<utility>
using namespace std;
typedef long long ll;
typedef unsigned int ui;
const ll mod = 1000000007;
typedef long double ld;
const ll INF = 1e+14;
typedef pair<int, int> P;
#define stop char nyaa;cin>>nyaa;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
typedef complex<ld> Point;
const ld eps = 1e-8;
const ld pi = acos(-1.0);
typedef pair<ld, ld> LDP;
typedef pair<ll, ll> LP;
#define fr first
#define sc second
#define all(c) c.begin(),c.end()
#define pb push_back

void Yes(){
	cout<<"Yes"<<endl;
	exit(0);
}
 
void No(){
	cout<<"No"<<endl;
	exit(0);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
    int N; cin >> N;
    string s; cin >> s;
    s += s[0];
    vector<char> T(N + 2);
    rep(i, 4) {
        if(i == 0) {
            T[0] = 'S'; T[1] = 'S';
        }
        if(i == 1) {
            T[0] = 'S'; T[1] = 'W';
        }
        if(i == 2) {
            T[0] = 'W'; T[1] = 'S';
        }
        if(i == 3) {
            T[0] = 'W'; T[1] = 'W';
        }
        Rep(j, 2, N + 2) {
            if(s[j - 1] == 'o' && T[j - 1] == 'S') {
                T[j] = T[j - 2];
            }
            else if(s[j - 1] == 'o' && T[j - 1] == 'W') {
                T[j] = (T[j - 2] == 'S' ? 'W' : 'S');
            }
            else if(s[j - 1] == 'x' && T[j - 1] == 'W') {
                T[j] = T[j - 2];
            }
            else {
                T[j] = (T[j - 2] == 'S' ? 'W' : 'S');
            }
        }
        if(T[N] == T[0] && T[N + 1] == T[1]){
            rep(k, N) {
                cout << T[k];
            }
            cout << endl;
            return 0;
        }
    }
    cout << -1 << endl;
	return 0;
}