//雪花飄飄北風嘯嘯
//天地一片蒼茫

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/rope>
using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;
#define ll long long
#define ii pair<ll,ll>
#define iii pair<ii,ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << " is " << x << endl;

#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()

ll MAX(ll a){return a;}
ll MIN(ll a){return a;}
template<typename... Args>
ll MAX(ll a,Args... args){return max(a,MAX(args...));}
template<typename... Args>
ll MIN(ll a,Args... args){return min(a,MIN(args...));}

#define indexed_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>

mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

int n;
int arr[200005];

bool can(int i){
	if (i==0) return false;
	
	vector<ii> v; //pos and value
	
	rep(x,1,n){
		if (arr[x-1]>=arr[x]){
			if (i==1) return false;
			while (!v.empty() && v.back().fi>arr[x]) v.pop_back();
			
			int curr=arr[x];
			while (true){
				if (curr==0) return false;
				if (v.empty() || v.back().fi!=curr){
					v.push_back(ii(curr,1));
					break;
				}
				else{
					v.back().se++;
					if (v.back().se==i){
						curr--;
						v.pop_back();
					}
					else{
						break;
					}
				}
			}
		}
	}
	
	return true;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	rep(x,0,n) cin>>arr[x];
	
	int lo=0,hi=200005,mi;
	while (hi-lo>1){
		mi=hi+lo>>1;
		
		if (can(mi)) hi=mi;
		else lo=mi;
	}
	
	cout<<hi<<endl;
}
