#include <bits/stdc++.h>
using namespace std;


void solve(long long a, long long b){
    cout << ((a * b % 2 == 0) ? "Even" : "Odd") << endl;
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long a;
    scanf("%lld",&a);
    long long b;
    scanf("%lld",&b);
    solve(a, b);
    return 0;
}
