#include<bits/stdc++.h>
using namespace std;
#define arep(i,x,n) for(int i=int(x);i<(int)(n);i++)
#define rep(i,n) for(long long i = 0;i < n;++i)
#define pi 3.141592653589793
#define eps 0.00000001
#define INF 1e9+7  
using ll = long long; 
using P=pair<int,int>;
using lP=pair<ll,ll>;
using fP=pair<double,double>;


int main(){
    char t;
    cin>>t;
    if(t=='A')cout<<"T"<<endl;
    if(t=='T')cout<<"A"<<endl;
    if(t=='C')cout<<"G";
    if(t=='G')cout<<"C";
    return 0;
}