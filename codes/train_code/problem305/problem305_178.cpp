//#include<cstdio>
//#include<cassert>
//#include<iostream>
//#include<cstring>
//#include<algorithm>
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define MAX ((int)1e9 + 5)
#define MAXL ((ll)3e18 + 7)
#define MAX_X ((ll)1e5 + 2)
#define pi (2.0*acos(0))
#define M ((int)1e6 + 7)
#define MOD ((int)1e9 + 7)
#define NN ((int)3e6 + 7)
#define N ((int)1e5 + 5)
#define eps (0)
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define logn 29
#define endl "\n"
#define mp make_pair
#define BUCK 105
#define RIG ((idx<<1)|1)
#define LEF (idx<<1)
//#define int ll


using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

/*fast io
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/




typedef tree < int,  null_type,  less < int >,  rb_tree_tag,  tree_order_statistics_node_update > o_set;
/// o_set s;
/// s.order_of_key(k) : Number of items strictly smaller than k .
/// *(s.find_by_order(k)) : K-th element in a set (counting from zero).

ll arr[N] , brr[N];


int main()
{
    fastio;
    int n ;
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        cin>>arr[i]>>brr[i];
    }
    ll ans = 0;
    for(int i = n ; i>0 ; i--){
        arr[i] += ans;
        ll tmp = (arr[i]+brr[i]-1)/brr[i];
        tmp *= brr[i];
        ans += tmp-arr[i];
    }
    cout<<ans<<endl;
    return 0;
}
