#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define set_bits(a) __builtin_popcount(a)
#define pb push_back
#define pf push_front
#define mod 1000000007
#define M 998244353
#define fi first
#define se second
#define endl '\n'
#define INF 1e18
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main()
{
     ll a,b;
     cin>>a>>b;
     ll i,ct=0;

     ll x=a;
     while(x<=b)
     {
         x = x*2;
         ct++;
     }
     cout<<ct<<endl;
}
