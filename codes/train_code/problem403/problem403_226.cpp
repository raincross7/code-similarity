#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dbl;
#define sqr(int) (int * int)
#define sqr3(int) (int * int * int)
#define pi M_PI
#define nl "\n"
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define vd vector<dbl>
#define vf vector<float>
#define vs vector<string>

void solve(){
	int a,b;
	cin >> a >> b;
	if(a >= b){
		for(int i = 0; i<a; i++){
			cout << b;
		}
	}
	else if(b >= a){
		for(int i = 0; i<b; i++){
			cout << a;
		}
	}
	
}







int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
 }


