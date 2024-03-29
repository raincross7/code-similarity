#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007
#define EPS 1e-10
#define MAX_N 20000
#define MAX_M 16

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

string l = "qwertasdfgzxcvb";
string s;

int main(){
	while (cin >> s&&s != "#"){
		bool f = 1;
		int co = 0;
		if (l.find(s[0]) != -1)f = 0;
		REP(i, s.size()){
			if (f){
				if (l.find(s[i]) != -1){
					co++;
					f = 0;
				}
			}
			else{
				if (l.find(s[i]) == -1){
					co++;
					f = 1;
				}
			}
		}
		cout << co << endl;
	}
}