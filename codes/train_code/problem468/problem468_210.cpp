#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//cout << fixed << setprecision(15);
vector<int> forintinput(int n) {
	vector<int> x;
	for(int i = 0;i < n;i++){
		int ia;
		cin >> ia;
		x.push_back(ia);
	}
	return x;
}
int main(){
	int x,a;
	cin >> x >> a;
	if(x < a){
		cout << 0 << endl;
	}else{
		cout << 10 << endl;
	}
}