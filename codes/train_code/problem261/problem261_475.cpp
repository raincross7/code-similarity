#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
	int n;
	cin >> n;
	while(1){
		string s;
		s = to_string(n);
		if(s[0] == s[1] && s[1] == s[2]){
			cout << n << endl;
			return 0;
		}
		n++;
	}
}