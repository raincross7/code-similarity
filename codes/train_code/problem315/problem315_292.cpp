#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define SP << " " 
#define LLi long long int

using namespace std;

int imax=2147483647;
long long int llimax=9223372036854775807;

//int型vectorを出力
void PV(vector<int> pvv) {
	rep(i, pvv.size()) cout << pvv[i] SP;
	cout << endl;
}

//LLi型vectorを出力
void PVL(vector<LLi> pvv) {
	rep(i, pvv.size()) cout << pvv[i] SP;
	cout << endl;
}

int main(){

	int sz, flag;
	string s, t;
	cin>> s >> t;

	sz=s.size();

	rep(i, sz){
		flag=1;
		rep(j, sz){
			if(s[(i+j)%sz]!=t[j]){
				flag=0;
				break;
			}
		}
		if(flag){
			cout<< "Yes" <<endl;
			return 0;
		}
	}

	cout<< "No" <<endl;
 
	return 0;
}