#include <bits/stdc++.h>
#define rep(i,n) for(long long i=0; i<n; i++)
#define Rep(i,n) for(long long i=1; i<n; i++)
#define ll long long
#include <math.h>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <queue>
#include <set>
#include <vector>


using namespace std;
#define PI acos(-1)
using P =pair<int,int>;

ll ketasu(ll a){
   ll num=1;
   while(a/10){
       num++;
       a/=10;
   }
   return num;
}

ll gcd(ll a,ll b){return b ? gcd(b,a%b) :a;}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}

ll kosuu(ll a){
    ll sum=0;
    for(ll i=1;i*i<=a;i++){
        if(a%i==0){
            if(a!=1&&i*i!=a){
            sum+=2;
            }else{
             sum++;   
            }
        }
    }
    return sum;
}



int main()
{
ll x,n;
cin>>x>>n;
vector<ll>v(101);
ll a;
rep(i,n){
    cin>>a;
    v[a]=1;
}
ll ans=x;
ll tmp=100;
rep(i,102){
    if(v[i]!=1){
        if(llabs(i-x)<tmp){
            tmp=llabs(i-x);
            ans=i;
        }
    }
}
cout<<ans<<endl;
}

