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
	string s;cin>>s;
	int m=stoi(s.substr(5, 2));
	int d=stoi(s.substr(8,2));
	
	if(m<=4&&d<=30) {
		cout << "Heisei";
	}else {
		cout << "TBD";
	}
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
