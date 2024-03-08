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
	int data[100];
	int n;
	cin >> n;
	int cnt = 0;
	REP(i,n) cin >> data[i];
	REP(i,n-1){
		int minp,mindata;
		minp = i;
		mindata = data[i];
		FOR(j,i+1,n){
			if(mindata>data[j]){
				minp = j;
				mindata = data[j];
			}
		}
		if(data[i]!=mindata){
			cnt++;
			swap(data[i],data[minp]);
		}
	}
	REP(i,n){
		cout << data[i];
		if(i!=n-1) cout << " ";
	}
	cout << endl;
	cout << cnt << endl;

}