#include<iostream>
#include<string.h>
#include<string>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<bitset>
#include<math.h>
#include<stack>
#include<queue>
#include<set>
#include<map>
using namespace std;
typedef long long ll;
typedef long double db;
typedef vector<int> vi;
typedef pair<int,int> pii;
const int N=100000+100;
const db pi=acos(-1.0);
#define lowbit(x) ((x)&(-x))
#define sqr(x) (x)*(x)
#define rep(i,a,b) for (register int i=a;i<=b;i++)
#define per(i,a,b) for (register int i=a;i>=b;i--)
#define go(u,i) for (register int i=head[u],v=sq[i].to;i;i=sq[i].nxt,v=sq[i].to)
#define fir first
#define sec second
#define mkp make_pair
#define pb push_back
#define maxd 998244353
#define eps 1e-8
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while ((ch<'0') || (ch>'9')) {if (ch=='-') f=-1;ch=getchar();}
    while ((ch>='0') && (ch<='9')) {x=x*10+(ch-'0');ch=getchar();}
    return x*f;
}

inline ll readll()
{
    ll x=0;int f=1;char ch=getchar();
    while ((ch<'0') || (ch>'9')) {if (ch=='-') f=-1;ch=getchar();}
    while ((ch>='0') && (ch<='9')) {x=x*10+(ch-'0');ch=getchar();}
    return x*f;
}

string s;
bool vis[30];

int main()
{
    cin >> s;
    int n=s.size();
    if (n<26)
    {
        rep(i,0,n-1) vis[s[i]-'a']=1;
        rep(i,0,26)
        {
            if (!vis[i])
            {
                cout << s;putchar('a'+i);
                break;
            }
        }
    }
    else
    {
        per(i,n-1,0)
        {
            int p=-1,ch=s[i]-'a';
            rep(j,0,25)
                if ((vis[j]) && (ch<j)) {p=j;break;}
            if (p!=-1)
            {
                rep(j,0,i-1) putchar(s[j]);
                putchar('a'+p);return 0;
            }
            vis[ch]=1;
        }
        puts("-1");
    }
    return 0;
}

    