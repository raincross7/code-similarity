#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++) 
using namespace std;
typedef long long ll;

int main(){
	int r; cin>>r;
	if(r<1200) cout << "ABC" << endl;
	else if(r>=1200&r<2800) cout << "ARC" << endl;
	else cout << "AGC" << endl;	
}