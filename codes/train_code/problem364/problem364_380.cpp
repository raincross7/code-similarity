#include<bits/stdc++.h>
using namespace std;
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define ALL(A) A.begin(),A.end()
#define RALL(A) A.rbegin(),A.rend()
typedef long long ll;
typedef pair<ll,ll> P;
const ll mod=1000000007;
const ll LINF=1LL<<60;
const int INF=1<<30;

int main(){
	int n,a,b;cin>>n>>a>>b;
	if ((b - a) % 2 == 0){
		cout << "Alice" << endl;
	}
	else{
		cout << "Borys" << endl;
	}
	return 0;
}