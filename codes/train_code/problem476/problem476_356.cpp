#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;

// GCD, LCM
// https://youtu.be/8lm8o8L9Bmw?t=2285
// https://youtu.be/XI8exXVxZ-Q?t=3595
// https://youtu.be/F2p_e6iKxnk?t=843
ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { 
    if(a==1 || b==1){
        return max(a,b);
    }
    return a/gcd(a,b)*b;
}

void solve(long long N, long long M, std::vector<long long> a){
    ll num = a[0]/2;
    
    for(int i=0;i<N;i++){
        // cerr <<"i="<<i <<endl;
        ll t = a[i];
        t/=2;
        ll old = num;
        
        num = lcm(num,t);
        
        // cerr <<"num=" << num <<"old="<<old <<"t="<<t<<endl;
        (num/old)%2;
        
        if(num>M){
            cout << 0<<endl;
            return;
        }
        // cerr <<"p" << endl;
        // cerr <<num/t <<endl;
        if((num/t)%2==0|| (num/old) %2 ==0 ){
            cout << 0 <<endl;
            return;
        }

    }
    
    cout <<  1 + (M-num)/(2*num) << endl;

}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> a(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&a[i]);
    }
    solve(N, M, std::move(a));
    return 0;
}
