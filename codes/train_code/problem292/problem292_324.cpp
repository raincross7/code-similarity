#include <bits/stdc++.h>

using namespace std;
using ll =long long;
typedef pair<int,int> P;
#define SORT(a) sort((a).begin(),(a).end())
#define rSORT(a) reverse((a).begin(),(a).end())
#define For(i, a, b)    for(int i = (a) ; i < (b) ; ++i)
#define rep(i, n)       For(i, 0, n)
#define debug(x)  cerr << #x << " = " << (x) << endl;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
//Write From this Line

int main()
{
	string s;
	cin >> s;
	int n = 3;
	bool A = false;
	rep(i,n){
		if(s[i] == 'A'){
			A = true;
		}
	}
	rep(i,n){
		if(A){
			if(s[i] == 'B'){
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
}
