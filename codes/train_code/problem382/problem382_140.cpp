#include <vector>
#include <iostream>
using namespace std;

struct UnionFind{
private:
  vector<int> data;
public:
  int N;
  UnionFind(int n) : data(n, -1), N(n){}
  bool unite(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return false;
    --N;
    if(data[y] < data[x]) swap(x,y);
    data[x] += data[y];
    data[y] = x;
    return x != y;
  }
  bool same(int x, int y){ return find(x) == find(y); }
  int find(int x){
    if(data[x] < 0) return x;
    return data[x] = find(data[x]);
  }
  int size(int x){ return -data[find(x)]; }
};

int main(){
  int N, Q;
  cin >> N >> Q;
  UnionFind uf(N);
  while(Q--){
    int t, u, v;
    cin >> t >> u >> v;
    if(t){
      cout << uf.same(u,v) << '\n';
    }else{
      uf.unite(u,v);
    }
  }
}
