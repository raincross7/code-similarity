#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1LL<<62
#define inf 1000000007
ll dp[100][2][5];
int main() {
	string s;
	cin>>s;
	ll k;
	cin>>k;
	dp[0][0][0]=1;
	for(ll i=0;i<s.size();i++){
		for(ll j=0;j<=9;j++){
			if(s[i]-'0'==j){
				if(j==0){
					//cout << i<< " "<<j;
					for(ll l=0;l<4;l++){
						dp[i+1][0][l]+=dp[i][0][l];
						dp[i+1][1][l]+=dp[i][1][l];
					}
				//	cout << " "<<dp[1][0][1]<< " "<<dp[1][1][1]<<endl;
				}
				else{
					for(ll l=0;l<4;l++){
						dp[i+1][0][l+1]+=dp[i][0][l];
						dp[i+1][1][l+1]+=dp[i][1][l];
					}
				}
			}
			else{
				if(j==0){
					for(ll l=0;l<4;l++){
						dp[i+1][1][l]+=dp[i][0][l];
						dp[i+1][1][l]+=dp[i][1][l];
					}
				}
				else{
					for(ll l=0;l<4;l++){
						if(s[i]-'0'>j){
							dp[i+1][1][l+1]+=dp[i][0][l];
						}
						dp[i+1][1][l+1]+=dp[i][1][l];
					}
				}
			}
		}
	}
	cout << dp[s.size()][0][k]+ dp[s.size()][1][k];
	// your code goes here
	return 0;
}