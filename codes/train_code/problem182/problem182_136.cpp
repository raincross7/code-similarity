#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
using P = pair<int,int>;
const int MOD = 1000000007;
#define inf 1e9

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a+b>c+d) cout<<"Left"<<endl;
    else if(a+b==c+d) cout<<"Balanced"<<endl;
    else cout<<"Right"<<endl;
} 
