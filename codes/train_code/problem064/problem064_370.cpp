#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int a,b;
    char op;
    cin>>a>>op>>b;
    if(op=='+')cout<<a+b<<endl;
    else cout<<a-b<<endl;

    return 0;
}
