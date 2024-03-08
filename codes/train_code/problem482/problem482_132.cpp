#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define vi vector<int>
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
	int H,W;
	while(1){
		cin >> H >> W;
		if(H==0&&W==0) break;
		REP(i,H){
			REP(j,W){
				if(i==0||i==H-1) cout << "#";
				else if(j==0||j==W-1) cout << "#";
					else cout << ".";
			}
			cout << endl;
		}
		cout << endl;
	}
}