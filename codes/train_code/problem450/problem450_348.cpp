#include<bits/stdc++.h>

typedef  long long ll;
//forループ
//引数は、(ループ内変数,動く範囲)か(ループ内変数,始めの数,終わりの数)、のどちらか
//Dがついてないものはループ変数は1ずつインクリメントされ、Dがついてるものはループ変数は1ずつデクリメントされる
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=ll(b);i--)
//
//
#define int long long

using namespace std;

int ctoi(char c) {
 switch (c) {
 case '0': return 0;
 case '1': return 1;
 case '2': return 2;
 case '3': return 3;
 case '4': return 4;
 case '5': return 5;
 case '6': return 6;
 case '7': return 7;
 case '8': return 8;
 case '9': return 9;
 default: return 0;
 }
}


 ll a,b,c,s,t,x,y,z;
 ll A,B,C,S,T,X,Y,Z;

 ll cnt;

 long double pi=3.14159265358979323846;

 string N,M;

unsigned long long D;

signed main(){
	bool wo=true;

	cin>>a>>b;

	vector<int> f(b);

	REP(i,b) cin>>f[i];

	x=0;
	REP(i,b+1){
		if(i%2==0) x=a+i/2;
		if(i%2==1) x=a-(i+1)/2;
		REP(i,b) if(x==f[i]) wo=false;
		if(wo==true){
			break;
		}
		wo=true;
	}

	cout<<x;

	return 0;

}
