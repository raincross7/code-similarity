#include <bits/stdc++.h>
#include <chrono>
#include <math.h>
using namespace std;
using ll = long long;
using ld = long double;
using namespace std::chrono; 
#define fo(i,z,n) for(int i = z;i<n;i++)
#define Fo(i,z,n) for(ll i = z;i<n;i++)
#define INT_BITS 32
#define mod 1000000007
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int> >
#define vvl vector<vector<ll> > 
#define pb push_back
#define f first
// #define s second
#define int long long
#define all(c) (c).begin(), (c).end()
#define endl '\n'
// auto start = high_resolution_clock::now(); 
// auto stop = high_resolution_clock::now(); 
// auto duration = duration_cast<microseconds>(stop - start); 
 
// cout << duration.count() << endl; 


int32_t main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     cout.tie(0);
//      int t;
//      cin >> t; 
//      while(t--){
     	
// }


     string s;
     cin >> s;
     fo(i,0,s.length()){
     	if(s[i] == '7'){
     		cout << "Yes" << endl;
     		return 0;
     	}
     }
     cout << "No" << endl;
     


return 0;
}
