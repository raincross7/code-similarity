#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<cmath>


using namespace std;

#define rep(i,N) for(int i=0;i<N;i++) //0から
#define REP(i,N) for(int j=i;j<N;j++) //iから

typedef long long ll;




ll binary_search(vector<ll> a, ll n, ll key){
    ll right = n, left = -1;
    ll md = (right + left) / 2;

    while(right - left > 1){
        if(a[md] <= key){
            right = md;
        }else{
            left = md;
        }
        md = (right + left) / 2;
    }
    if(left == -1) return -1; //無い場合
    return right;
}

vector<ll> prime;
void Prime(ll n){ //線形篩,素数列挙
    vector<ll> p(n,0);
    p[0]=1;
    p[1]=1;
    for(ll i=2;i<n;i++){
        if(p[i]==0){
            prime.push_back(i);
            p[i]=i;
        }
        ll k=prime.size();
        for(ll j=0;j<k && i*prime[j]<n && prime[j]<=p[i];j++){
            p[i*prime[j]]=prime[j];
        }
    }
}

#define MOD ((ll)1e+7 + 9)



//cout<<fixed<<setprecision(10);
int main(){
    ll n,k;
    cin>>n>>k;

    vector<ll> cnt(n,0);
    ll p,m=0;;
    rep(i,n){
        p=i+1;
        while(p<k){
            p*=2;
            cnt[i]++;
        }
        m=max(m,cnt[i]);
    }
    p=0;
    rep(i,n){
        p+=pow(2,m-cnt[i]);
    }
    n*=pow(2,m);
    cout<<fixed<<setprecision(10);
    double ans=(double)p / (double)n;
    cout<<ans<<endl;

    return 0;
}

