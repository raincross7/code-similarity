#include<bits/stdc++.h>
using namespace std;
#define int long long

int a[500+50];
int x[100000+50],l[100000+50];
vector <pair <int,int> > v;
signed main(){
    ios::sync_with_stdio(false);
    
	int n,k,s;
	cin>>n>>k>>s;
	int other=(s%1000000000)+1;
	for(int i=0;i<n;i++){
		if(i<k){
			cout<<s<<" ";
		}
		else{
			cout<<other<<" ";
		}
	}
	

}
/*

Mistakes to take care of-

1. For string s, s+=a is similar to appending to s. s = s + a takes O|s| + O|a| time. 
Relevant problem where I made mistake - https://codeforces.com/contest/1326/problem/D2

2. Try using constant value of N to declare arrays, etc. Else you might get hacked / FST.
Relevant problem where I made a mistake - https://codeforces.com/contest/1307/problem/D

3. While exponentiation, avoid modding the exponent. Or mod with mod-1.
Relevant problem where I made a mistake - https://codeforces.com/contest/1332/problem/E

4. modulo operator (%) in c++ returns the sign of the divisor.
Eg. (-1%8) = -1
Relevant problem where I made a mistake - https://codeforces.com/contest/1345/submission/79809463
*/