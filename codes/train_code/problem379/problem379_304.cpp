#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define endl '\n'
#define first F
#define second S
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int x, y; cin>>x>>y;
	bool flag = true;
	for(int i=0; i<=x && flag; i++){
		int b = x-i;
		int op = (2*i) + (4*b);
		if(op == y){
			cout<<"Yes"<<endl;
			flag = false;
			break;
		}
	}
	if(flag)cout<<"No"<<endl;
}
