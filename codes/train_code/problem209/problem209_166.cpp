#include "bits/stdc++.h"
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

class union_find {
    private:
        vector<int> par;
        vector<int> ran;
        vector<ll> size;
    public:
        union_find(int n);
        int find(int x);
        void unite(int x, int y);
        bool same(int x, int y);
        ll show_size(int x);
};

union_find::union_find(int n){
    par.resize(n);
    ran.resize(n);
    size.resize(n);
    rep(i,n) par[i] = i;
    rep(i,n) ran[i] = 0;
    rep(i,n) size[i] = 1;
};

int union_find::find(int x) {
    if(par[x] == x) return x;
    else return par[x] = find(par[x]);
};

void union_find::unite(int x, int y) {
    x = find(x);
    y = find(y);
    if(x == y) return;
    ll t = show_size(x)+show_size(y);
    size[x] = size[y] = t;
    if(ran[x] < ran[y]){
        par[x] = y;
        //size[y] += size[x];
    }
    else{
        par[y] = x;
        //size[x] += size[y];
        if(ran[x] == ran[y]) ran[x]++;
    }
};

ll union_find::show_size(int x) {
    if(par[x] == x) return size[x];
    return show_size(par[x] = find(par[x]));
}

bool union_find::same(int x, int y) {
    return (find(x) == find(y));
};

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	union_find uf(n);
	rep(i,m){
		int a, b;
		cin >> a >> b;
		--a; --b;
		uf.unite(a, b);
	}
	int ans = 0;
	rep(i,n){
		chmax(ans, (int)uf.show_size(i));
	}
	cout << ans << endl;
	return 0;
}
