		
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ALL(a)              a.begin(), a.end()
#define ALLN(a, n)          (a, a+n)
#define MAX                 10000007
#define MIN                 -10000007



              
int main()
{
  ios::sync_with_stdio(0);
    cin.tie(0);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
      
    int t;
    t=1;
     //  cin>>t;
    while(t--){
        	int a,b,c,l,j=0;
        	bool flag=false;
        	cin>>a>>b>>c>>l;
        	while(a>=b){b*=2;j++;}
        	while(b>=c){c*=2;j++;}
       
       		if(j<=l) cout<<"Yes";
       		else cout<<"No";


             }
             cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}
