#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<min(a,b)+min(c,d)<<endl;
    return 0;
}