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
    string a,b,c;cin>>a>>b>>c;
    if(a.at(a.size()-1)==b.at(0) && b.at(b.size()-1)==c.at(0)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
