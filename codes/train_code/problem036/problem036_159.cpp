#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(long long i=0; i<(int)n; i++)
#define rep2(i,a,n) for(long long i=(a); i<(int)(n); i++)
#define all(vec) vec.begin(),vec.end()
using vi = vector<int>;
using vs = vector<string>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using psi = pair<string, int>;
const int dx[4] = {1, 0,-1, 0};
const int dy[4] = {0, 1, 0,-1};
const int mod = 1e9+7;
int gcd(int a, int b){if(a%b == 0){return(b);}else{return(gcd(b, a%b));}}
int lcm(int a, int b){return a * b / gcd(a, b);}

int N, M, K, H, W, L, R, X;
//string S, T;
int ans;

signed main(){
  cin >> N;
  vi A, B;
  rep(i,N){
    int a; cin >> a;
    if(i%2 == 0 ) A.push_back(a);
    else B.push_back(a);
  }
  
  if(N%2 == 0){
    for(int i = B.size()-1; i>= 0; i--){ cout << B[i] << " ";}
    rep(i, A.size()){
      cout << A[i];
      if(i != A.size()-1) cout << " ";
    }
  }
  else{
    for(int i = A.size()-1; i>= 0; i--){ cout << A[i] << " ";}
    rep(i, B.size()){
      cout << B[i];
      if(i != B.size()-1) cout << " ";
    }
  }
  cout << endl;
  return 0;
}