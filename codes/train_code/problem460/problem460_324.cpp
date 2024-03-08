#include<bits/stdc++.h>
#include<bitset>

using namespace std;

#define M 1000000007
#define pb push_back
#define f first
#define s second
#define rep(i, st, ed) for(int i=st; i<ed; i++)
#define repn(i, st, ed) for(int i=st; i<=ed; i++)
#define repb(i, ed, st) for(int i=ed; i>=st; i--)

typedef long long ll;
typedef unsigned long long int llt;
typedef long double ld;

const long double PI  =3.141592653589793238463;
const int N = 5e5 + 10;

vector<int> g[N];
bool viss[N];
int vis[N];

// Normal DFS
void dfs(int curr, int par)
{
  for(auto x: g[curr])
    if(x != par)
      dfs(x, curr);
}

// DFS with visiting status
void dfs1(int curr, int par)
{
  viss[curr] = 1;
  for(auto x: g[curr])
    if(!viss[x])
      dfs1(x, curr);
}

// DFS with strongly connected component
void dfs2(int curr, int par, int num)
{
  vis[curr] = num;
  for(auto x: g[curr])
    if(vis[x] == 0)
      dfs2(x, curr, num);
}

// XOR from 0 to n
ll fxor(ll n)
{
  if(n < 0) return 0;
  if(n % 4 == 3) return 0;
  else if(n % 4 == 0) return n;
  else if(n % 4 == 1) return n^(n-1);
  else if(n%4 == 2) return n^(n-1)^(n-2);
}

// Power in logn with mod 1000000007
llt ppow(llt x, llt y)
{
  llt res = 1;
  while(y > 0){
    if(y&1)
      res = (res * x)%M;
    y = y >> 1;
    x = (x * x)%M;
  }
  return res;
}

// Factorial with dp
llt factdp[N];
llt fact(llt x)
{
  if(x == 0) return 1;
  if(x == 1) return 1;
  if(factdp[x] != -1) return factdp[x];
  return factdp[x] = (x*fact(x-1))%M;
}

// String return to base b
string ansConv ="";
void convert10tob(llt N, int b)
{
     if (N == 0)
        return;
     int x = N % b;
     N /= b;
     if (x < 0)
        N += 1;
     convert10tob(N, b);
     ansConv += to_string(x);
     return;
}

// Convert string to num wiht base b
llt convertstrtob(string a, int b)
{
  llt aa = 0;
  llt mul = 1;
  for(int i=a.length()-1; i>=0; i--)
  {
    int curr = a[i] - '0';
    aa += (curr * mul);
    mul *= b;
  }
  return aa;
}

// Union Find algo with array
// Find()
int findpar(int curr, int arr[])
{
  while(arr[curr] != curr) curr = arr[curr];
  return curr;
}
// Union()
void Union(int b, int spa, int arr[])
{
  while(arr[b] != b)
  {
    int c = arr[b];
    arr[b] = spa;
    b = c;
  }
  arr[b] = spa;
}

// Main Code


int main()
{
  ll h, w;
  cin>>h>>w;
  ll a1 = (h%3==0?0:1)*w;
  ll a2 = (w%3==0?0:1)*h;
  ll x = min(h, w);
  ll xx = x / 2;
  ll y = max(h, w);
  ll yy = y / 2;
  ll a3 = LONG_MAX;
  rep(i, 1, y)
  {
    ll a = x * i;
    ll b = xx * (y - i);
    ll c = (x - xx)*(y - i);
    ll aa = max(a, max(b, c));
    ll bb = min(a, min(b, c));
    ll area = abs(aa - bb);
    a3 = min(a3, area);
  }
  rep(i, 1, x)
  {
    ll a = y*i;
    ll b = yy*(x-i);
    ll c = (y - yy)*(x - i);
    ll aa = max(a, max(b, c));
    ll bb = min(a, min(b, c));
    ll area = abs(aa - bb);
    a3 = min(a3, area);
    //cout<<i<<" "<<area<<endl;
  }
  cout<<min(a3, min(a1, a2))<<endl;
  return 0;
}
