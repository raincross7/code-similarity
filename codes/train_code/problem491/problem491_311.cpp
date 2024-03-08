#pragma GCC target ("avx2")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("O2")
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define int ll
#define vi vector<int>
#define vb vector<bool>
#define vvb vector<vb >
#define pii pair<int,int>
#define ss second
#define ff first
#define vpii vector<pii>
#define vvi vector<vi >
#define vs vector<string>
#define vvs vector<vs >
#define pqi priority_queue <int>
#define minpqi priority_queue <int, vector<int>, greater<int> >
#define all(x) x.begin(),x.end()
#define mii map<int,int>
#define for0(i,n) for(ll i=0;i<n;i++)
#define for1(i,n) for(ll i=1;i<=n;i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define per1(i,n) for(ll i=n;i>0;i--)
#define repeat(i,start,n) for(ll i=start;i<n;i++)
#define inp(arr,n) ll arr[n];rep(i,n){ cin>>arr[i];}
#define inp1(arr,n) ll arr[n+1];rep1(i,n){ cin>>arr[i];}
#define inp2d(arr,n,m) ll arr[n][m];rep(i,n)rep(j,m)cin>>arr[i][j];
#define inpg(adj,m) rep(i,m){int a,b;cin>>a>>b;adj[a].pb(b);adj[b].pb(a);}
#define print(a,n) for(ll i=0;i<n;i++){ cout<<a[i]<<" ";}
#define print1(a,n) for(ll i=1;i<=n;i++){ cout<<a[i]<<endl;}
#define mod 1000000007
#define maxx 1000000000000000000
#define PI 3.141592653589793238462643383279
#define mmax(a,b,c) max(a,max(b,c))
#define mmin(a,b,c) min(a,min(b,c))
#define init(arr,a) memset(arr,a,sizeof(arr))
#define lb lower_bound
#define ub upper_bound
#define er equal_range
#define maxe *max_element
#define mine *min_element
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
	if(a.ss==b.ss)
		return a.ff<b.ff;
	return (a.second<b.second);
}
string convert_to_bit(int a,int bit){
	string s;
	while(a>0){
		s+=(a%2)+48;
		a/=2;
	}
	while(s.size()<bit)
		s+='0';
	reverse(s.begin(),s.end());
	return s;
}
int to_int(string s)
{
	int ans=0;
	string temp;
	int i=0;
	while(s[i]=='0')
	{
		i++;
	}
	if(i==s.size())
		return 0;
	temp.assign(s,i,s.size());
	int mul=1;
	for(i=temp.size()-1;i>=0;i--)
	{
		int a=temp[i]-'0';
		ans+=mul*a;
		mul*=10;
	}
	return ans;

}
string to_string(int n)
{
	string ans="";
	if(n==0)
		return "0";
	while(n>0)
	{
		int a=n%10;
		n/=10;
		char temp=a+'0';
		ans+=temp;
	}
	reverse(all(ans));
	return ans;
}
int bin_to_dec(int n)
{
	int num = n;
	int dec_value = 0;
	int base = 1;
	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;
		dec_value += last_digit * base;
		base = base * 2;
	}
	return dec_value;
}
int binstr_to_dec(string s)
{
	int ans=0;
	for0(i,s.size())
		if(s[i]=='1')
			ans+=pow(2,s.size()-i-1);
	return ans;
}
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void faltu()
{
	int a=2;
	while(a>0)a--;
}
int power(int x, int y)
{
	if(y==0)return 1;
	int u=power(x,y/2);
	u=(u*u)%mod;
	if(y%2)u=(x*u)%mod;
	return u;

}
int inv(int x)
{
	return power(x%mod,mod-2);
}
int ncr(int n,int r)
{
	if(n<r)return 0;
	if(n==r|r==0)return 1;
	int numerator=1;
	int denominator=1;
	for1(i,r)denominator=(denominator*i)%mod;
	for0(i,r)numerator=(numerator*((n-i)%mod))%mod;
	return (numerator*inv(denominator))%mod;
}
/*freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);*/
//------------------------------------Code Starts here------------------------------------//
int a[100001][4],dp[100001][4],n;
/*int getans(int day,int flag)
{
     if(day==n)return 0;
     if(dp[day][flag]!=-1){return dp[day][flag];}
     int maxi=0;
     if(flag==0)
	{
		maxi=max(maxi,a[day][1]+getans(day+1,1));
		maxi=max(maxi,a[day][2]+getans(day+1,2));
		maxi=max(maxi,a[day][3]+getans(day+1,3));
	}
	else if(flag==1)
	{
		maxi=max(maxi,a[day][2]+getans(day+1,2));
		maxi=max(maxi,a[day][3]+getans(day+1,3));
	}
	else if(flag==2)
	{
		maxi=max(maxi,a[day][1]+getans(day+1,1));
		maxi=max(maxi,a[day][3]+getans(day+1,3));
	}
	else if(flag==3)
	{
		maxi=max(maxi,a[day][1]+getans(day+1,1));
		maxi=max(maxi,a[day][2]+getans(day+1,2));
	}
	return dp[day][flag]=maxi;
}*/
int func(int ind, int flag) {

	if (ind == n) return 0;

	if (dp[ind][flag] != -1) return dp[ind][flag];

	int maxi = 0;
	if (flag == 0) {
		maxi = max(maxi, a[ind][1] + func(ind + 1, 1));
		maxi = max(maxi, a[ind][2] + func(ind + 1, 2));
		maxi = max(maxi, a[ind][3] + func(ind + 1, 3));
	}
	else if (flag == 1) {
		maxi = max(maxi, a[ind][2] + func(ind + 1, 2));
		maxi = max(maxi, a[ind][3] + func(ind + 1, 3));
	}
	else if (flag == 2) {
		maxi = max(maxi, a[ind][1] + func(ind + 1, 1));
		maxi = max(maxi, a[ind][3] + func(ind + 1, 3));
	}
	else {
		maxi = max(maxi, a[ind][1] + func(ind + 1, 1));
		maxi = max(maxi, a[ind][2] + func(ind + 1, 2));
	}

	return dp[ind][flag] = maxi;
}
main()
{
     // n;
     //cin>>n;

     cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= 3; j++) {
			cin >> a[i][j];
		}
	}

	memset(dp, -1, sizeof dp);

	cout << func(0, 0)<<endl;

}
