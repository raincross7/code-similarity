#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define fbo find_by_order
#define ook order_of_key

typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<int> vi;
typedef long double ld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

const long long mod = 1000000007;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a,b;
    cin>>a>>b;
    if(a%3==0 && a>0){
        cout<<"Possible"<<endl;
    }
    else if(b%3==0 && b>0){
        cout<<"Possible"<<endl;
    }
    else if((a+b)%3==0 && a+b>0){
        cout<<"Possible"<<endl;
    }
    else{
        cout<<"Impossible"<<endl;
    }
    return 0;
}