#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

vector<vector<int>> g;
vector<int> o;
map<int, int> ad;
vector<ll> c;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if(abs(a-c) <= d || (abs(a-b) <= d && abs(b-c) <= d)){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}