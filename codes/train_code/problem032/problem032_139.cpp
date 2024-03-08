#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define pi 3.141592653589793238
#define int long long
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// mt19937 gen_rand_int(chrono::steady_clock::now().time_since_epoch().count());
// mt19937_64 gen_rand_ll(chrono::steady_clock::now().time_since_epoch().count());
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

long long power(long long a, long long b,long long m) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a %m;
        a = a * a %m;
        b >>= 1;
    }
    return res;
}

int pp[50];
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);  
cout.tie(0);   

#ifndef ONLINE_JUDGE
    if(fopen("INPUT.txt","r"))
    {
    freopen ("INPUT.txt" , "r" , stdin);
    freopen ("OUTPUT.txt" , "w" , stdout);
    }
#endif  

    pp[0]=1;
    for(int i=1;i<=35;i++)
        pp[i]=(pp[i-1]*2);
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    int mx=0;
    for(int j=0;j<n;j++)
    {
        if((k&a[j])==a[j])
            mx+=b[j];        
    }

    for(int i=0;i<31;i++)
    {
        if(k&(pp[i]))
        {
            int tot=0;
            for(int j=0;j<n;j++)
            {
                int z=(k&a[j]);
                z=a[j]-z;
                if(z<pp[i] && (a[j]&pp[i])==0)
                {
                    tot+=b[j];
                }
            }
            mx=max(mx,tot);
        }
    }
    cout<<mx;
  
} 
    
