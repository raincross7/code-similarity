#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
int main(){
  string s;
  while(cin>>s,s!="-"){
    int n;cin>>n;
    rep(i,n){
      int in;cin>>in;
      s=s.substr(in)+s.substr(0,in);
    }
    cout<<s<<endl;
  }
}