#include <bits/stdc++.h> 
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define size_of_array(array) (sizeof(array)/sizeof(array[0]))
#define MAX 100005
#define DEBUG 0 
#define LIMIT (LONG_MAX / 10)
#define POSITIVE_LAST_D (LONG_MAX % 10)
using ll =long long;
using namespace std;
using Graph=vector<vector<int>>;

int main(){
    ll a,b,k;
    cin>>a>>b>>k;
    if(a>=k){
        cout<<a-k<<" "<<b<<endl;
    }else{
        ll c = b-(k-a);
        cout<<0<<" "<<((c<0)?0:c);
    }
    cout<<endl;
    return 0;
}