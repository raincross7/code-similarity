#include <bits/stdc++.h>
using namespace std;
//型に気を付けよう
//a=0x61=97 '0'=0x30=48
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long  ll;
typedef long double  ld;
typedef string str;
typedef pair<int,int> pairii;
typedef vector<bool> veci;
const double pi=3.1415926535;
const ll  mod=1000000007;
//桁数指定　cout << fixed << setprecision(2)
int main() {
  string s;
  veci v(26,0);
  cin>>s;
  rep(i,s.size()){
    v[s[i]-97]=1;
  }
  rep(j,26){
    if(!(v[j])){cout<<(char)(j+97)<<endl;return 0;}}
    cout<<"None"<<endl;
}