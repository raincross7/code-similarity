#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
using P  = pair<ll,ll>;
using vi = vector<ll>;
using vv = vector<vi>;

int main(){
    int s,w;
    cin >> s >> w;
    if(s<=w)cout<<"unsafe"<<endl;
    else cout<<"safe"<<endl;
    return 0;
}