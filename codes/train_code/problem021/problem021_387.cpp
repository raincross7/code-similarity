#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
	int a,b;
	cin >> a >> b;
	if(a == 1 && b == 2) cout << 3 << endl;
	if(a == 2 && b == 1) cout << 3 << endl;
	if(a == 1 && b == 3) cout << 2 << endl;
	if(a == 3 && b == 1) cout << 2 << endl;
	if(a == 3 && b == 2) cout << 1 << endl;
	if(a == 2 && b == 3) cout << 1 << endl;
}