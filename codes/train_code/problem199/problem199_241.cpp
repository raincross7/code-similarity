

  /********************************************************
  **░██████╗██╗░░░░░░█████╗░██╗░░░██╗██╗░█████╗░░██████╗░**
  **██╔════╝██║░░░░░██╔══██╗██║░░░██║██║██╔══██╗██╔════╝░**
  **╚█████╗░██║░░░░░███████║╚██╗░██╔╝██║██║░░╚═╝██║░░██╗░**
  **░╚═══██╗██║░░░░░██╔══██║░╚████╔╝░██║██║░░██╗██║░░╚██╗**
  **██████╔╝███████╗██║░░██║░░╚██╔╝░░██║╚█████╔╝╚██████╔╝**
  **╚═════╝░╚══════╝╚═╝░░╚═╝░░░╚═╝░░░╚═╝░╚════╝░░╚═════╝░**
  *********************************************************/

#include <bits/stdc++.h>
using namespace std;


#define ll                          long long
#define ld                          long double

#define forn(i,n)                   for(int i=0;i<n;++i)
#define all(v)                      v.begin(), v.end()
#define rall(v)                     v.rbegin(),v.rend()
#define isSubstring(s1,s2)          s1.find(s2) != std::string::npos
	
#define pb                          push_back
#define pf                          push_front
#define mp                          make_pair
#define fr                          first
#define sc                          second

#define vpi                         vector<pair<int,int>>
#define vi                          vector<int>
#define sz(a)                       (int)a.size()

#define   endl                       "\n"
#define     nl                       cout<<"\n";
#define fastio                       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define  MN                           INT_MIN
#define  MX                           INT_MAX
#define int long long
bool isPrime(ll n){if(n<2)return false;for(ll x = 2;x*x <=n;x++){if(n%x == 0)return false;}return true;}
bool isPerfectSquare(long double x){long double sr=sqrt(x);return((sr-floor(sr))==0);}
int gcd(int a, int b){if(a==0)return b;if(b==0) return a;if(a==b)return a;if(a>b)return gcd(a-b,b);return gcd(a,b-a);}

int32_t main()
{
	int n,m;
	cin >> n >> m;
	int a[n];
	priority_queue<int> q;
	for(int i=  0;i<n;i++){
		cin >> a[i];
		q.push(a[i]);
	}
	while(m >  0){
		int need = q.top();
		q.pop();
		m--;
		q.push(need / 2);
	}
	int ans = 0;
	while(!q.empty()){
		ans+= q.top();
		q.pop();
	}
	cout << ans << endl;
}