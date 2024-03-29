#include<bits/stdc++.h>
using namespace std;
struct UnionFind{
  vector<int> r,p;
  UnionFind(){}
  UnionFind(int size){init(size);}
  void init(int size){
    r.resize(size,0);
    p.resize(size,0);
    for(int i=0;i<size;i++) r[i]=1,p[i]=i;
  }
  int find(int x){
    return (x==p[x]?x:p[x]=find(p[x]));
  }
  bool same(int x,int y){
    return find(x)==find(y);
  }
  void unite(int x,int y){
    x=find(x);y=find(y);
    if(x==y) return;
    if(r[x]<r[y]) swap(x,y);
    r[x]+=r[y];
    p[y]=x;
  }
};
int main(){
  int n,q,i,a,b,c;cin>>n>>q;
  UnionFind u(n);
  for(i=0;i<q;i++){
    cin>>a>>b>>c;
    if(a) cout<<u.same(b,c)<<endl;
    else u.unite(b,c);
  }
  return 0;
}