#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <queue>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <complex>
#include <fstream>
#include <stdio.h>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<double> VEC;
typedef vector<VEC> MAT;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<int, PII> TIII;
typedef long long LL;
typedef vector<LL> VLL;

//container util

//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define MT(a,b,c) MP(a, MP(b, c))
#define T1 first
#define T2 second.first
#define T3 second.second


//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define EPS 1e-8

char s[1111];

int main(){
	while(1){
		cin.getline(s,1111);
		if(!strcmp(s, "."))return 0;
		int n=strlen(s);
		stack<char> st;
		int flag = 0;
		REP(i,n){
			if(s[i]=='('||s[i]=='[')st.push(s[i]);
			else if(s[i]==')'){
				if(!st.empty()&&st.top()=='('){
					st.pop();
				}else{
					flag = 1;
					cout << "no" << endl;
					break;
				}
			}
			else if(s[i]==']'){
				if(!st.empty()&&st.top()=='['){
					st.pop();
				}else{
					flag = 1;
					cout << "no" << endl;
					break;
				}
			}
		}
		if(flag == 1)continue;
		if(st.empty())cout << "yes" << endl;
		else cout << "no" << endl;
	}
}