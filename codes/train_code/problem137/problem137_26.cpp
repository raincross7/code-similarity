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
	/*1000????????????????????§long long int ????????????????????????????????§string??§??¨???*/
	/*string????????????????????????????????¨???????????¨char??????????????????????????§-'0'?????????????????¨??°?????¨????????¨??????*/

	string str;
	while(1){
		cin >> str;
		if(str=="0") break;
		ll int sum = 0;
		REP(i,str.size()){
			sum += (int)(str[i]-'0');
		}
		cout << sum  << endl;
	}
}