#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <stdio.h>
#include <list>
#include <numeric>
#include <stack>
#include <queue>
#include <tuple>
#include <bitset>
#include <map>
#include <math.h>
//ceil(a/b)   (a + (b - 1))/ b
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
typedef long long ll;
typedef pair<int,int> P;
const int inf=1000000007;
const ll mod=1000000007;
const double PI=3.14159265358979323846;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

ll gcd(ll a, ll b){
  if (b==0) return a;
  else return gcd(b,a%b);
}

int cans(bool f){
  if(f) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}


vector<vector<int>> s(11);
int p[11];
int k[11];

int main(){
  int N,M;
  cin >> N >> M;
  rep(i,M) {
	cin >> k[i];
	rep(j,k[i]) {
	  int a;
	  cin >> a;
	  a--;
	  s[i].push_back(a); 
	}
  }  
  rep(i,M) cin >> p[i];


  // rep(i,M) {
  // 	for(auto itr : s[i]) cout << itr;
  // 	cout << endl;
  // }
  
  int ans = 0;	  
  vector<int> v;
  for(int bit=0; bit < (1 << N); bit++) { //点灯電球は決め打たれる
	vector<bool> isturn(11,0);
	for(int i = 0; i < N; i++) {
	  if(bit & (1 << i)) {
		isturn[i] = true;
	  }
	}

	// for (auto itr : isturn) cout << itr;
	// cout << endl;

	
	bool f = true;
	rep(i,M) {
	  int mo = 0;
	  rep(j,k[i]) {
		if(isturn[s[i][j]]) {
		  mo++;
		}
	  }
	  if(mo%2 != p[i]) {
		f = false;
		break;
	  }
	}
	if(f) ans++;
  }
  cout << ans << endl;
  

  
  
  
  

  return 0;
}

