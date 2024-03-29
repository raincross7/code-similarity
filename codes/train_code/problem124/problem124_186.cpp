#include<bits/stdc++.h>

using namespace std;

#define LCM(a,b)                (a / __gcd(a,b) ) *b
#define GCD(a,b)                __gcd(a,b)
#define dist(x1,y1,x2,y2)       sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define distl(x1,y1,x2,y2)      sqrtl((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define fRead(x)                freopen(x,"r",stdin)
#define fWrite(x)               freopen (x,"w",stdout)
#define LL                      long long
#define ULL                     unsigned long long
#define pb                      push_back
#define tcase                   cout<<"Case "<<C++<<": ";
#define all(a)                  a.begin(),a.end()
#define Unique(a)               sort(all(a)),a.erase(unique(all(a)),a.end
#define ABS(x)                  ((x)<0?-(x):(x))
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define PI                      acos(-1.0)
#define ff                      first
#define ss                      second
#define SP(x,y)                 fixed<<setprecision((y))<<(x)
#define FastRead                ios_base::sync_with_stdio(0);cin.tie(NULL);
#define FOR(x, l, r)            for (int x = l; x<=r; ++x)
#define REP(x,r)                for (int x = 0; x <r; ++x)
#define NN                      cout<<"\n";
#define NNN                     cout<<"\n------------------------------\n";
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
//***********************************************************************//
//                      SHAHED AHMED, CSE'15, IUT                        //
//***********************************************************************//

LL lim[20020];
LL fix[20020];
LL val[20020];
LL up[20020];

int main()
{
    LL n;
    cin>>n;

    vector<LL> t(n);
    vector<LL> v(n);

    for(LL i=0;i<n;i++) cin>>t[i];
    for(LL i=0;i<n;i++) cin>>v[i];

    LL pos = 0;
    for(LL i=0;i<t.size();i++)
    {
        lim[pos] = min(lim[pos],v[i]);
        up[pos] = v[i];
        while(t[i]--)
        {
            lim[++pos]= v[i];
            up[pos] = v[i];
        }
    }

    fix[0]=1;
    fix[pos]=1;

    double tot=0;
    
    LL increase = 111;

    while(increase--)
    {
        for(LL i=1;i<=pos;i++)
        {
            if(val[i]==val[i-1]+1 && fix[i-1]==1) fix[i]=1;
        }

        for(LL i=pos;i>=1;i--)
        {
            if(val[i]==val[i+1]+1 && fix[i+1]==1) fix[i]=1;
        }

        for(LL i=1;i<=pos;i++)
        {
            if(fix[i]!=1)
            {
                val[i]++;
                tot+=1.0;
                if(val[i]==lim[i]) fix[i]=1;
            }
        }
    }

    for(LL i=1;i<=pos;i++)
    {
        if(val[i]==val[i-1] && val[i]<up[i-1])
        {
            tot+=0.25;
        }
    }

    cout<<SP(tot,20)<<"\n";

}
