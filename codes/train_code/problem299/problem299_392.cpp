#include <bits/stdc++.h>


using namespace std;


#define ll long long
#define mk make_pair
#define pb push_back
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int) (x).size()


ll sum(int n);

void go(){
	ll a,b,k;cin>>a>>b>>k;
	bool turn=true;
	while(k--) {
		if(turn) { 
			if(a%2==1) {
				a--;
			}
			b+=a/2;
			a/=2;
		}else {
			if(b%2==1) {
				b--;
			}
			a+=b/2;
			b/=2;
		}
		turn=!turn;
	}
	cout << a << " " << b;
}
int main(){
   
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   go();

   return 0;
}

ll sum(int n){                
   if(n == 0){
      return n;
   }else{
      return sum(n/10) + n%10;
   }
}
