#include <bits/stdc++.h>
#include <math.h>
#define _GLIBCXX_DEBUG
#define _LIBCPP_DEBUG 0

using namespace std;
#define ll long long
#define rep(i,n) for (int i = 0; i < n; i++)
#define rrep(i,n) for (int i = n-1; i >= 0; i--)
#define MOD (1000000007)
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define vvi vector<vi>
#define vvl vector<vl>
#define pii pair<int, int>
#define pli pair<ll, int>a
#define pb push_back

#define mp make_pair
#define all(a) (a).begin(),(a).end()

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

ll keta(ll n){
  string s = to_string(n);
  ll num = s.size();
  return num;
}

const ll INF = 1LL << 60;

const int dh[4] = {1,0,-1,0};
const int dw[4] = {0,1,0,-1};

struct Edge{
  int to;
  int weight;
  Edge(int t, int w) : to(t), weight(w){}
};
using Graph = vector<vector<Edge>>;
using P = pair<ll, int>;


int main(){
  int n; cin >> n;

  int l = 0, r = n-1;
  string l_str, r_str;
  cout << l << endl;
  cin >> l_str;
  if(l_str == "Vacant") return 0;
  
  cout << r << endl;
  cin >> r_str;
  if(r_str == "Vacant") return 0;

  while(true){
    int mid = (r+l)/2;
    string mids;
    cout << mid << endl;
    cin >> mids;
    if(mids == "Vacant") return 0;

    if((l%2 == mid%2) == (l_str == mids)){
      l = mid;
      l_str = mids;
    }
    else{
      r = mid;
      r_str = mids;
    }
  }
}