#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

#define mp make_pair
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

void setIO(string name = ""){
    freopen((name+".in").c_str(), "r", stdin); 
    freopen((name+".out").c_str(), "w", stdout);
}

int main(){
 	ios_base::sync_with_stdio(0); cin.tie(0); 
	// setIO();
	int x,a; cin >> x >> a;
	if(x<a)
		cout << 0 << "\n";
	else
		cout << 10 << "\n";
	
    
}



