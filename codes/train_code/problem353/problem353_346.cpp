//Author : Sukarna Paul

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>
#include<ext/pb_ds/detail/standard_policies.hpp>
#define pi acos(-1)
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MAX 300005
#define INF 0x3f3f3f3f
template <class T> inline T bigmod(T p,T e,T M){ll ret = 1LL;for(; e > 0LL; e >>= 1LL){if(e & 1LL) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}

using namespace std;
using namespace __gnu_pbds;

typedef trie<string,null_type,trie_string_access_traits<>,pat_trie_tag,trie_prefix_search_node_update>pref_trie;
typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;
typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;


ll arr[100005];

int main(){
    IOS
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<ll>vec;

    for(int i=0;i<n;i++){
        cin>>arr[i];vec.pb(arr[i]);
    }
    sort(vec.begin(),vec.end());

    unordered_map<ll,int>pos;

    for(int i=0;i<n;i++){
        pos[vec[i]]=i;
    }
    int ans =0;
    for(int i=0;i<n;i++){
        if(i%2!=pos[arr[i]]%2)ans++;
    }
    cout<<ans/2<<"\n";
}
