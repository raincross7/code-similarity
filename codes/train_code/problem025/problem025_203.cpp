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
  int n;
  cin>>n;
  while(n--){
    double x[4];
    double y[4];
    rep(i,4)cin>>x[i]>>y[i];
    if(abs((y[1]-y[0])*(x[3]-x[2])-(y[3]-y[2])*(x[1]-x[0]))<ESP)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}