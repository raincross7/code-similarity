#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

template<typename T>
ostream& operator<<(ostream &os, vector<T> &v){
	string sep = " ";
	if(v.size()) os << v[0];
	for(int i=1; i<v.size(); i++) os << sep << v[i];
	return os;
}

template<typename T>
istream& operator>>(istream &is, vector<T> &v){
	for(int i=0; i<v.size(); i++) is >> v[i];
	return is;
}

#ifdef DBG
void debug_(){ cout << endl; }
template<typename T, typename... Args>
void debug_(T&& x, Args&&... xs){
	cout << x << " "; debug_(forward<Args>(xs)...);
}
#define dbg(...) debug_(__VA_ARGS__)
#else
#define dbg(...)
#endif

int main() {
	ios_base::sync_with_stdio(false);
	cout << setprecision(20) << fixed;

	int x; cin >> x;

	if(x<600) cout << 8 << endl;
	else if(x<800) cout << 7 << endl;
	else if(x<1000) cout << 6 << endl;
	else if(x<1200) cout << 5 << endl;
	else if(x<1400) cout << 4 << endl;
	else if(x<1600) cout << 3 << endl;
	else if(x<1800) cout << 2 << endl;
	else cout << 1 << endl;
	return 0;
}
