//Radhe Radhe
#include<bits/stdc++.h>
#define godspeed  ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define mod 1000000007 //1e9+7
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define rep1(i,a,b)    for(ll i=a; i<=b; i++)
#define repVect(i,n)    for(ll i=0; i<sum.size(); i++)
#define fixed cout.setf(ios::fixed);
#define Precise cout.precision(7);
#define yes cout<<"Yes"<<'\n';
#define no cout<<"No"<<'\n';
using namespace std;

int main()
{
    godspeed
    ll  i,j,n,k,x,tk=1000,stock;
    cin>>n;
    vector<ll> v(n);
    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(i=0; i<n-1; i++)
    {
        stock=0;
        if(v[i]<v[i+1]){
           stock=tk/v[i];
        }
        tk+=stock*(v[i+1]-v[i]);
    }
    cout<<tk<<endl;
    return 0;
}
