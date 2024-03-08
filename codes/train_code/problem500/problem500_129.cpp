#include <bits/stdc++.h>

using namespace std;
using ll =long long;

#define SORT(a) sort((a).begin(),(a).end())
#define rSORT(a) reverse((a).begin(),(a).end())
#define For(i, a, b)    for(int i = (a) ; i < (b) ; ++i)
#define rep(i, n)       For(i, 0, n)
#define debug(x)  cerr << #x << " = " << (x) << endl;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
void coY() {cout <<"Yes"<<endl;}
void coN(){cout <<"No"<<endl;}

const ll INF = 1LL << 60;

//Write From this Line

const int mod = 1e9+7;
int main()
{
	string s ;
	cin>> s ;
	int n = s.size();
	int l = 0 , r = n -1 ;
	int ans = 0 ;
	bool flag = true;
	while(flag){
		if(l == r || l > r  ) break;
		char cl = s[l] , cr = s[r];
		if(cl == cr){
			l ++ ;
			r -- ;
		}else if(cl == 'x' || cr == 'x'){
			if(cl == 'x' ){
				l++;
			}else{
				r -- ;
			}
			ans ++ ;
		}else{
			flag = false;
			cout << -1 << endl;
			return 0 ;
		}
	}
	cout << ans << endl;
}
