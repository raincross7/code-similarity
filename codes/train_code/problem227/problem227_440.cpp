#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define M 1000000007
 
int gcd(int a,int b){
	if(b==0){
		return(a);
	}
	return(gcd(b,a%b));
} 
 
signed main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
	
	int a,b;
	cin >> a >> b;
	cout << (a*b)/(gcd(a,b));
}