#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll i,j,k,l,m,n;

    cin >> n;

    ll ar[n+10],fir[n+10];

    for(i= 0 ; i <= n; i++)
        cin>>ar[i];

    ll ekn = 0,sum = 0;

    fir[n] = ar[n];

    for(i = n-1 ; i >= 0 ; i--)fir[i] = ar[i] + fir[i+1];

    for(i=0; i<=n; i++)
    {

       if(!i)ekn = 1;
       else
       {
           ekn = ekn*2;
       }
       ekn = min(ekn,fir[i]);
       sum += ekn;

       ekn -= ar[i];

       if(ekn < 0)return cout << -1 << endl,0;

    }

    cout << sum << endl;


}
