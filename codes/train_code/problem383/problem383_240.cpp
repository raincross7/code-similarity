#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)  FOR(i,0,n)
#define pai 3.14159265358979323846
const int INF = 1001001001;
typedef long long ll;
int A[3][3], N;
bool punched[3][3];
bool ok[3][3];
int a[3][3],n;
using Graph = vector<vector<int>>;
vector<vector<int>> field;
vector<bool> seen;

const int MOD = 1000000007;
typedef pair<int,int> P;

int gcd(int a,int b){
	if (a%b == 0){
		return b;
	}
	else{
		return gcd(b,a%b);
	}

}
int lcm(int a,int b){
	return a /gcd(a,b) * b;
}







int main(){
 
int n,m;
map <string,int> cnt;
cin >> n;
string s[n+1],t;

rep (i,n){
  cin >> s[i];
  cnt[s[i]]++;
}

cin >> m;
rep (i,m){
  cin >> t;
  cnt[t]--;
}

int ma = 0;

for (auto x : cnt){
  ma = max(ma,x.second);
}
cout << ma << endl;

}
