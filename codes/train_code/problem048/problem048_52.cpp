#include <bits/stdc++.h>
#define fi first
#define se second
#define m_p make_pair
#define p_b push_back
#define e_b emplace_back
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
using namespace std;
using ll = long long;
using ld = long double;
template<class T> bool chmax(T &a,T b){if(a<b){a=b;return true;}return false;}
template<class T> bool chmin(T &a,T b){if(a>b){a=b;return true;}return false;}

int main(){
  ios_base::sync_with_stdio(false);cin.tie(0);
  int N,K;
  cin >> N >> K;
  vector<int> A(N);
  for(int i=0;i<N;i++)  cin >> A.at(i);

  for(int i=0;i<K;i++){
    vector<int> imos(N+1,0);
    for(int j=0;j<N;j++){
      int l=max(0,j-A.at(j));
      int r=min(N-1,j+A.at(j));
      imos.at(l)++;
      imos.at(r+1)--;
    }
    for(int j=1;j<N+1;j++)  imos.at(j)+=imos.at(j-1);
    for(int j=0;j<N;j++)  A.at(j)=imos.at(j);

    bool flag=true;
    for(int j=0;j<N;j++){
      if(A.at(j)<N) flag=false;
    }
    if(flag)  break;
  }

  for(int i=0;i<N;i++)  cout << A.at(i) << " ";
  cout << endl;

  return 0;
}