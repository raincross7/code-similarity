#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
	string s;
	cin >> s;
	int n = s.size();
	int a = 0;
	int b = 0;
	rep(i, n){
		if(s.at(i) == '0'){
			a++;
		}else{
			b++;
		}
	}
	cout << min(a, b)*2 << endl;
	return 0;
}