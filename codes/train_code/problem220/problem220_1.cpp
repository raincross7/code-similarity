#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
using P = pair<int,int>;
const int MOD = 1000000007;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (abs(c-a)<=d||(abs(b-a)<=d&&abs(c-b)<=d)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}