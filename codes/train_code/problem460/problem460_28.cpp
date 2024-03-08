
// Problem : C - Chocolate Bar
// Contest : AtCoder - AtCoder Beginner Contest 062
// URL : https://atcoder.jp/contests/abc062/tasks/arc074_a
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

//#pragma GCC optimize("Ofast")
//#pragma GCC optimize ("unroll-loops")
//#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
#define eb emplace_back
#define pb push_back
#define size(s) (int)s.size()
#define int long long
#define vi vector<int>
#define vs vector<string>
#define vv vector<vector<int>>
#define pii pair<int,int>
#define m_p(x,y) make_pair(x,y)
#define vp vector<pair<int,int>>
#define setbits(x) __builtin_popcountll(x)
#define f first
#define se second
#define inc(v,n,x) v.assign(n,x)
#define incd(v,n) v.resize(n)
#define iniz(n) memset(n,0,sizeof(n))
#define inin(n) memset(n,-1,sizeof(n))
#define inimi(n) memset(n,0xc0,sizeof(n))
#define inima(n) memset(n,0x3f,sizeof(n))
#define all(v) (v).begin(),(v).end()

using namespace std;

template<typename T1,typename T2>istream &operator>>(istream &is, vector<pair<T1,T2>> &v) { for (pair<T1,T2> &t : v) is >> t.f>>t.se; return is; }
template<typename T>istream &operator>>(istream &is, vector<T> &v) { for (T &t : v) is >> t; return is; }
template<typename T>ostream &operator<<(ostream &os, const vector<T> &v) { for (const T &t : v) {os << t <<" ";} os << '\n'; return os; }

const int N=200001;
double pi=acos(-1.0);
const int md=1e9+7;
const int INF=1e15;
int dx1[]={0,0,-1,1};
int dy1[]={1,-1,0,0};

template<class T>
T abst(T a)
{return a<0?-a:a;}

template<class T>
T max2(T a,T b){return a>b?a:b;}
template<class T>
T min2(T a,T b){return a<b?a:b;}
int calc(int val,int left,int w)
{
	int ans;
		int val2=left*(w/2);
		int val3=left*((w+1)/2);
		int mx=max2(val,max2(val2,val3));
		int mi=min2(val,min2(val2,val3));
		ans=mx-mi;
	int val4=(left/2)*w;
	int val5=(left+1)/2*w;
	mx=max2(val,max2(val4,val5));
	mi=min2(val,min2(val4,val5));
	ans=min2(ans,mx-mi);
	return ans;
}
void solve()
{
int h,w;
cin>>h>>w;
int ans=INF;
for(int i=1;i<=h-1;i++)
{
	ans=min2(ans,calc(i*w,h-i,w));
	//cout<<ans<<" ";
}
//cout<<"\n";
for(int i=1;i<=w-1;i++)
{
	//cout<<ans<<" ";
	ans=min2(ans,calc(i*h,w-i,h));
}
cout<<ans;
}

int32_t main(){
ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
int t=1;
//cin>>t;
for(int i=1;i<=t;i++)
{
    solve();
}
return 0;
}
