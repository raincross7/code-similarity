#include<bits/stdc++.h>
using namespace std;

#define                                 pai                                         acos(-1)
#define                                 ll                                          long long
#define                                 pb                                          push_back
#define                                 mp                                          make_pair
#define                                 pll                                         pair<ll,ll>
#define                                 sz(a)                                       (ll)a.size()
#define                                 endl                                        "\n"
#define                                 gcd(a, b)                                   __gcd(a, b)
#define                                 lcm(a, b)                                   (((a)*(b))/gcd(a,b))
#define                                 all(vec)                                    vec.begin(),vec.end()
#define                                 ms(a, b)                                    memset(a,b,sizeof(a))
#define                                 TEST_CASE(t)                                for(int www=1;www<=t;www++)
#define                                 PRINT_CASE                                  printf("Case %d: ",z)
#define                                 fii                                         freopen("input.txt","r",stdin);
#define                                 foo                                         freopen("output.txt","w",stdout);
#define                                 fast                                        ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

const ll mod  = 1e9 +07;
const ll mxn  = 1e6 +10;

int  main()
{
    ll i,j,k,a,b,c,d=0,n,m,t,h,u,v,x,y,z;
    cin>>n>>m;
    set<ll>st;
    while(m--)
    {
        cin>>t;
        while(t--)
        {
            cin>>h;
            st.insert(h);
        }
    }
    ll cnt=0;
    for(i=1;i<=n;i++)
    {
        if(st.find(i)==st.end())
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


