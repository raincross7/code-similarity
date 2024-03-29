#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;

void solve(long long N, std::vector<long long> P){
    set<ll> s;
    s.insert(-1);
    s.insert(N);
    map<ll,ll> mp;
    for(int i=0;i<N;i++){
        mp[P[i]] =i;
    }
    s.insert(mp[N]);
    ll ans =0;
    for(int i=N-1;i>0;--i){
        ll t = mp[i];
        auto itr = s.upper_bound(t);
        // cerr <<"t=" <<t  <<"*itr=" << *itr << endl;
        ll r1 = *itr;
        itr++;
        ll r2;
        if(itr == s.end()){
            r2 = r1;
        }else{
            r2 = *itr;
        }
        itr = s.upper_bound(t);
        itr--;
        ll l1 = *itr;
        ll l2;
        if(itr == s.begin()){
            l2 = l1;
        }else{
            itr--;
            l2 = *itr;
        }
        // cerr <<"r2= " << r2 <<"r1="<<r1 << endl;
        // cerr <<"l1= "<<l1 <<"l2=" << l2 << endl;
        ll rightV = (r2-r1) *(t-l1);
        ll leftV = (l1-l2) * (r1-t);
        // cerr <<"rightV=" << rightV <<"leftV=" << leftV << endl;
        ans += (rightV+leftV)*i;
        s.insert(t);
    }
    cout << ans << endl;

}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> P(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&P[i]);
    }
    solve(N, std::move(P));
    return 0;
}
