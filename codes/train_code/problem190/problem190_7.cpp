#include<iostream>
#include<stdio.h>
using namespace std;
using ll=long long;
#include<algorithm>
#include<set>
#include<vector>
#define rep(i,n) for(int i=0;i<(n);i++)
using P=pair<int,int>;

//auto

int main(){
int n;
string s,t;
cin>>n>>s;
t=s.substr(0,n/2);
t=t+t;
if(t==s)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}

