//Radhe Radhe
#include<bits/stdc++.h>
#define godspeed  ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define mod 1000000007 //1e9+7
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
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
    ll  i,j,n,k,ans,cnt=0;
    string s;
    cin>>n>>k;
    ll a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
                cnt++;
        }
    }
    ans=cnt*(k%mod);
    cnt=0;
    for(i=0; i<n; i++)
    for(j=0; j<n; j++)
            if(a[i]>a[j])
                cnt++;

      k=(k*(k-1)/2%mod);
    ans+=cnt%mod*k;
    cout<<ans%mod<<endl;
    return 0;
}


