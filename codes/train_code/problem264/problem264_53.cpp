/*!enjoy karo yaar!*/

//CF,CC,AtC,SPOJ: hp1999
//HE: hemant269
//HR: hemant2132

// ref: 1. https://img.atcoder.jp/nomura2020/editorial.pdf
//      2. https://atcoder.jp/contests/nomura2020/submissions/13727054

// crux: (try to) think simple!

#include<bits/stdc++.h>
using namespace std;

#define     int             long long int
#define     fast()          ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define     all(x)          begin(x),end(x)
#define     rz(x)           resize(x)
#define     asn(x,y)        assign(x,y)
#define     mem(a,b)        memset(a,b,sizeof(a))
#define     sz(x)           ((int)size(x))
#define     eb              emplace_back
#define     pb              push_back
#define     pf              push_front
#define     pob             pop_back
#define     pof             pop_front
#define     ins             insert
#define     vi              vector<int>
#define     pii             pair<int,int>
#define     mii             map<int,int>
#define     F               first
#define     S               second
#define     remax(a,b)      a=max(a,b)
#define     remin(a,b)      a=min(a,b)
#define     bitcount(x)     __builtin_popcountll(x)
#define     iceil(n,x)      (((n)-1)/(x)+1)
#define     dbug(x)         cout<<#x<<": "<<(x)<<"\n"
#define     flush           fflush(stdout)
#define     show(x)         for(auto zz:x)cout<<zz<<" ";cout<<"\n";
#define     show2(x)        for(auto zz:x)cout<<zz.F<<" "<<zz.S<<"\n";

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ld pi=acos(-1);
const ll inf=1e18,M=1e9+7;
const int N=1;

void solve()
{
    int n;
    cin>>n;

    vi a(n+1);
	for(int i=0;i<n+1;++i)
        cin>>a[i];

	int cur=1,tot=0;

	vi sum(n+1);
	sum[n]=a[n];
	for(int i=n-1;i>=0;--i)
        sum[i]=a[i]+sum[i+1];

	for(int i=0;i<n;++i)
    {
		tot+=cur;

		if(cur<a[i])
		{
			cout<<-1;
			return;
		}

		cur-=a[i];
		if(2*cur<sum[i+1])
			cur=2*cur;
		else if(sum[i+1]<cur)
		{
			cout<<-1;
			return;
		}
		else
            cur=sum[i+1];
	}

	if(cur==a[n])
        tot+=cur;
	else
        tot=-1;

	cout<<tot;
}

int32_t main()
{
    fast();

    int t=1;
    //cin>>t;
    for(int z=1;z<=t;++z)
    {
        solve();
        //cout<<"\n";
    }

    return 0;
}

