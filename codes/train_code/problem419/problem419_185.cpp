#include <bits/stdc++.h>
using namespace std;
//型に気を付けよう
//a=0x61=97 '0'=0x30=48
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long  ll;
typedef long double  ld;
typedef string str;
typedef pair<int,int> pairii;
typedef vector<int> veci;
const double pi=3.1415926535;
const ll  mod=1000000007;
//桁数指定　cout << fixed << setprecision(2)
int main() {
  char a,b,c;str s;
  int mi=9999;
  cin>>s;
  int n=s.size();
  int cur=0;
  rep(i,n-2){
    a=s[i];b=s[i+1];c=s[i+2];
    a-=48;b-=48;c-=48;
    cur=100*a+10*b+c;cerr<<cur<<' ';
    mi=min(abs(cur-753),mi);
  }
  cout<<mi;
}