#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll GCD(ll a, ll b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
}

ll LCM(ll a,ll b){
    return (a*b/GCD(a,b));
}

int main(){
    ll A,B;
    cin>>A>>B;
    cout<<LCM(A,B);
}