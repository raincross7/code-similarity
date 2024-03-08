#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
#define inputInt(a) int a; cin >> a; 
#define inputInt2(a,b) int a; int b; cin >> a >> b; 
#define inputInt3(a,b,c) int a; int b; int c; cin >> a >> b >> c;
#define inputLong(a) long a;cin >> a; 
#define inputIntArray(a,N) int a[N];for(int i=0;i<N;i++){cin >> a[i];}
#define inputLongArray(a,N) long a[N];for(int i=0;i<N;i++){cin >> a[i];}
#define inputIntArray2(a,b,N) int a[N]; int b[N]; for(int i=0;i<N;i++){cin >> a[i] >> b[i];}
#define output(answer) cout << answer << endl;
#define fN(i,N)    for(int i=0; i<N; i++)
#define fSE(i,s,e) for(int i=s; i<=e; i++)
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FOR(i,N) for(int i=0; i<N; i++)
#define cinv(v,N) vector<int> v(N); for(int i=0; i<N; i++){ cin >> v[i]; }
#define mt make_tuple
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define all(v) (v).begin(),(v).end()
const ll MOD2 = 998244353;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
  //input
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  ll N, K; cin >> N >> K;
  vll a(N); FOR(i,N){ cin >> a[i]; a[i]--; a[i] %= K; }
    
  //main
  ll ans = 0;
  vll s(N+1); s[0] = 0; FOR(i,N){ s[i+1] = (s[i]+a[i])%K; }
  //FOR(i,N+1){ cout << s[i]; } cout << endl;
  
  map<ll,ll> mp;
  FOR(i,N+1){
    mp[s[i]] ++;
    if(i>=K){
      mp[s[i-K]] --; 
    }
    ans += (mp[s[i]]-1);
    //cout << (mp[s[i]]-1) << endl;
  }
  
  // output
  cout << ans << endl;

  return 0;
}