#include <bits/stdc++.h>
#define arep(a,i,n) for(ll i=(a);i<(n);i++)
#define rep(i,n) for(ll i=0;i<(n);i++)
#define cinf(x,n) for(ll i=0;i<(n);i++)cin>>x[i];
#define coutf(x,n) for(ll i=0;i<(n);i++)cout<<x[i]<<endl;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

using namespace std;

int main(){
	string s;
	cin >> s;
	int i=0;
	while(true){
		if(i==s.length())
			break;
		else if(s[i]==',')
			cout << " ";
		else
			cout << s[i];
		i++;
	}
	cout << endl;
}