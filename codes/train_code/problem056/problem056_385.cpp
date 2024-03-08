
//   .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------. 
//  | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |
//  | |  ___  ____   | || |      __      | || |     _____    | || |   ________   | || |     ____     | || |  ___  ____   | || | _____  _____ | || |              | || |     ____     | |
//  | | |_  ||_  _|  | || |     /  \     | || |    |_   _|   | || |  |  __   _|  | || |   .'    `.   | || | |_  ||_  _|  | || ||_   _||_   _|| || |              | || |   .'    `.   | |
//  | |   | |_/ /    | || |    / /\ \    | || |      | |     | || |  |_/  / /    | || |  /  .--.  \  | || |   | |_/ /    | || |  | |    | |  | || |              | || |  /  .--.  \  | |
//  | |   |  __'.    | || |   / ____ \   | || |      | |     | || |     .'.' _   | || |  | |    | |  | || |   |  __'.    | || |  | '    ' |  | || |              | || |  | |    | |  | |
//  | |  _| |  \ \_  | || | _/ /    \ \_ | || |     _| |_    | || |   _/ /__/ |  | || |  \  `--'  /  | || |  _| |  \ \_  | || |   \ `--' /   | || |              | || |  \  `--'  /  | |
//  | | |____||____| | || ||____|  |____|| || |    |_____|   | || |  |________|  | || |   `.____.'   | || | |____||____| | || |    `.__.'    | || |   _______    | || |   `.____.'   | |
//  | |              | || |              | || |              | || |              | || |              | || |              | || |              | || |  |_______|   | || |              | |
//  | '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |
//   '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------' 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef map<int,int> mii;
typedef pair<int,int> pii; 
typedef vector<pii> vpii; 
typedef unsigned long long int ulli;

#define int ll
#define F first 
#define S second
#define endl "\n"
#define MP make_pair
#define PB push_back
#define WL(t) while(t --) 
#define SZ(x) ((int)(x).size()) 
#define all(v) v.begin(),v.end()
#define REP(i,n) for (int i = 0; i < n;i++) 
#define FOR(i,a,b) for (int i = a; i < b; i++) 
#define FORD(i,a,b) for (int i = a; i >= b; i--)
#define REPD(i,n) for (int i = n-1; i >= 0;  i--) 
#define PRECISION(x) cout << fixed << setprecision(x);  
#define inrange(i,a,b) ((i>min(a,b)) && (i<max(a,b))) 
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define debug(x) cout << '>' << #x << ':' << x << endl;


const int MAXN = 1000005; 
const int MOD = 1000000007; 
template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);} 
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));} 

 
// typedef unsigned long long int ulli;
bool isPrime(int n);
//                                               <<<  WRITE CODE HERE >>>



bool isTriangle(int a,int b,int c){
    if(a < (b+c) )
        return true;
    return false;
}

void solve()
{   
  int n,k;
  cin >> n >> k;
  vi arr(n);
  for(auto &i:arr)
    cin >> i;
  sort(all(arr));
  int sum = 0;
  FOR(i,0,k)
    sum += arr[i];
  cout << sum;
    
}
signed main()
{   
   FAST_IO
    int t=1;
   // cin>>t;   
    WL(t){ solve(); cout<<endl; }
    return 0;
}



bool isPrime(int n){
    if(n<2)
        return false;
    for(int i=2;i*i<=n;i++)
        if(!(n%i))
            return false;
    return true;
}