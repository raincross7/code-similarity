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
    int N;int M;cin>>N>>M;
    int sum=0;
    rep(i,M){
        int a;
        cin>>a;
        sum+=a;
    }
    if(N>=sum){
        cout<<N-sum<<endl;
    }else{
        cout<<-1<<endl;
    }
}