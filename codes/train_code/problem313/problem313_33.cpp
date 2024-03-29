#include <bits/stdc++.h>
using namespace std;

struct UnionFind{
// 同値関係をサポートするデータ構造
// 併合,所属する同値類の代表元: O(a(n)), 集合の分割はNG
// (a(n): アッカーマン関数A(m,n)について,f(n)=A(n,n)としたときの逆関数)
  vector<int> m_root;
  vector<int> m_size;

  UnionFind(int N)
  : m_root(N)
  , m_size(N,1)
  { iota(m_root.begin(), m_root.end(), 0); }

  int find(int a){
    if(m_root.at(a)==a){
      return a;
    }
    else{
      return m_root.at(a)= find(m_root.at(a));
    }
  }

  void unify(int a, int b){
    int r_a= find(a);
    int r_b= find(b);

    if(r_a != r_b){
      if(m_size.at(r_a) < m_size.at(r_b)){
        m_root.at(r_a)= r_b;
        m_size.at(r_b)+= m_size.at(r_a);
        return;
      }
      else{
        m_root.at(r_b)= r_a;
        m_size.at(r_a)+= m_size.at(r_b);
        return;
      }
    }
  }
  
  bool are_comrade(int a, int b){
    return find(a)==find(b);
  }

  int get_size(int a){
    return m_size.at(find(a));
  }
};

int main(){
  int N,M;
  cin >> N >> M;

  vector<int> perm(N);
  for(int i=0; i<N; i++){
    cin >> perm.at(i);
    perm.at(i)--; // 1-indexed -> 0-indexed
  }

  UnionFind uf(N);
  int buf1,buf2;
  for(int j=0; j<M; j++){
    cin >> buf1 >> buf2;
    buf1--; buf2--; // 1-indexed -> 0-indexed
    uf.unify(buf1, buf2);
  }

  int ans= 0;
  for(int i=0; i<N; i++){
    if(uf.are_comrade(i, perm.at(i))){ ans++; }
  }
  
  cout << ans << endl;
}