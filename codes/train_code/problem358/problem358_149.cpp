#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#pragma GCC optimize("Ofast")
//*********************************************DO IT NOW****************************************************************
#include<bits/stdc++.h> 
#include<random>
#define int long long   
#define pp pair<int,int> 
#define ss second 
#define ff first 
#define pb push_back
#define mod 1000000009
#define pi 3.14159265359
#define mk(arr,n,type)  type *arr=new type[n];
#define sl s1.length();
#define yes cout<< "YES"<<endl
#define no  cout<< "NO"<<endl
#define all(v) (v).begin(),(v).end()
#define s(v)   sort(v,v+n)
#define  mt mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define read(a,n) for(int i=0;i<n;i++)cin>>a[i]
#define print(a,n) for(int i=0;i<n;i++)cout<<a[i]<<" "
#define for1(i,a,n)  for(int i=0;i<n;i++)
#define rep(i, c) for(int i = 0; i < (int)c; i++)
using namespace std;
//**********************************************DO IT NOW***************************************************************
void fastio()
{  
  #ifndef ONLINE_JUDGE
  freopen("INPUT.txt","r",stdin);
  freopen("OUTPUT.txt","w",stdout); 
  #endif
  ios_base :: sync_with_stdio(false); 
  cin.tie(NULL) ; 
  cout.tie(NULL);
}
int dp[101][1001],ans1=1e9,dp1[1000001];
int num[10];
signed main()
{   
    fastio();
    int t=1;
   // cin>>t;
    while(t--)
    { 
       string s;
       cin>>s;
       if(s[2]==s[3] && s[4]==s[5] && s[0]!=s[1])
       cout<<"Yes";
       else
       cout<<"No";
       
    }
}

    
// 🍪 🍪 🍪