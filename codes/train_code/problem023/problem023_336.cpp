#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,a,b) for (int i = (a); i < (b); ++i)


int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a != b && b != c && c != a) cout<<3<<endl;
    else if(a == b && b == c) cout<<1<<endl;
    else cout<<2<<endl;

    return 0;
}

