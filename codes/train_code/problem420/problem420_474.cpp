#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define inf 1001001001001001001
#define mod 1000000007
#define mod2 998244353
#define pi acos(-1)
#define all(v) v.begin(),v.end()
int main(){
    string s1,s2;cin>>s1>>s2;
    if(s1.at(0)==s2.at(2) && s1.at(1)==s2.at(1) && s1.at(2)==s2.at(0)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
