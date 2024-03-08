#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(long long N, long long K, std::vector<long long> t, std::vector<long long> d){
    vector<pair<ll,ll >> sushi(N); //(val,id)
    for (ll i=0;i<N;i++){
        sushi[i] = make_pair(d[i],t[i]);
    }
    vector<bool> used(N+1,false);
    vector<ll> surplus_sushi;
    ll count = 0;
    ll value_sum = 0;
    sort(sushi.begin(),sushi.end());
    for (int i=0;i<K;i++){

        if(!used[sushi[N-1-i].second]){
            used[sushi[N-1-i].second] = true;
            value_sum += sushi[N-1-i].first;
            count++;
        }else{
            value_sum += sushi[N-1-i].first;
            surplus_sushi.push_back(-sushi[N-1-i].first);
        }
    }
    sort(surplus_sushi.begin(),surplus_sushi.end());
    ll id = K;
    ll maximum = value_sum + count *count;
    while(!surplus_sushi.empty()&& (N-1-id >= 0)){
        if (!used[sushi[N-1-id].second]){
            used[sushi[N-1-id].second]=true;
            value_sum+=surplus_sushi.back() + sushi[N-1-id].first;
            surplus_sushi.pop_back();
            count++;
            maximum = max(maximum,value_sum+count*count);
        } 
        id++;
    }
    printf("%lld\n",maximum);


}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> t(N);
    std::vector<long long> d(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&t[i]);
        scanf("%lld",&d[i]);
    }
    solve(N, K, std::move(t), std::move(d));
    return 0;
}