#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define mt              make_tuple
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define test            int t; cin>>t; while(t--)
#define io             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 


int32_t main(){
  io ; 

      int ans = INT_MIN;
      int cnt = 0;

      string str;
      cin >> str;
      int n = str.size(); 

      int i = 0; 
      while(i<n){
        if(str[i]=='R'){
            cnt++;
            if(i==n-1){
                ans = max(ans, cnt); 
            } 
        }else{
            ans = max(ans, cnt);
            cnt = 0; 
        }
        i++;
    }
    cout << ans << "\n"; 
}