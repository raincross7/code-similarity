#include <bits/stdc++.h>
#define rep(i,m,n) for(int i=m;i<n;i++)
#define fix(n) cout<<fixed<<setprecision(n)
#define co(n) cout<<n<<endl
#define all(n) (n).begin(),(n).end()
using namespace std;
typedef long long ll;
const ll mod=1000000007;
double pi=3.1415926535;

int main(){
  string s;
  cin>>s;
  int c=0;
  rep(i,0,s.size()){
    if(s[i]=='x') c++;
  }
  if(c>=8) co("NO");
  else co("YES");
  
  return 0;
}