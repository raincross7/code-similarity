#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(i = 0;i < n;++i)
#define all(v) v.begin(), v.end()
using ll = long long;

struct UnionFind{
    public:
        UnionFind(int n): _n(n), parent_or_size(n, -1){}

        void unite(int a, int b){
            int x = root(a), y = root(b);
            if(x == y) return;
            if(-parent_or_size[x] < -parent_or_size[y]) swap(x, y);
            parent_or_size[x] += parent_or_size[y];
            parent_or_size[y] = x;
            return;
        }

        bool same(int a, int b){
            return root(a) == root(b);
        }

        int root(int a){
            if(parent_or_size[a] < 0) return a;
            return parent_or_size[a] = root(parent_or_size[a]);
        }

        int get_size(int a){
            return -parent_or_size[root(a)];
        }

        std::vector<std::vector<int>> groups(){
            std::vector<int> leader_buf(_n), group_size(_n);
            for (int i = 0; i < _n; i++) {
                leader_buf[i] = root(i);
                group_size[leader_buf[i]]++;
            }
            std::vector<std::vector<int>> result(_n);
            for (int i = 0; i < _n; i++) {
                result[i].reserve(group_size[i]);
            }
            for (int i = 0; i < _n; i++) {
                result[leader_buf[i]].push_back(i);
            }
            result.erase(
                std::remove_if(result.begin(), result.end(),
                            [&](const std::vector<int>& v) { return v.empty(); }),
                result.end());
            return result;
        }

    private:
        int _n;
        //root node: -1*component size
        //otherwise: parent
        vector<int> parent_or_size;
};

int main()
{
    ll i,j;
    ll n, q;
    cin >> n >> q;
    UnionFind uf(n);
    rep(i,q){
        ll c;
        cin >> c;
        ll u,v;
        cin >> u >> v;
        if(c) cout << uf.same(u, v) << endl;
        else uf.unite(u,v);
    }

    return 0;
}