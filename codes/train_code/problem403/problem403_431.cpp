#include <bits/stdc++.h>

using namespace std; 
 
#define int long long
#define M 1000000007
 
signed main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
	
	int n,m;
	cin >> n >> m;
	if(n<=m){
		for(int i=0;i<m;i++){
			cout << n;
		}
	}
	else{
		for(int i=0;i<n;i++){
			cout << m;
		}
	}
}
