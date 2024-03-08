/*                                  /   \                                                                   (Hello)//JSM//*/      
/*                                 /*****\                                                                              */
/*     Jai Shree Mataji           /       \ |\| |_| $ |-| K                                                            */
#include<vector>
#include<iostream>
#include<algorithm>                
#include<string.h>                 
#include<bits/stdc++.h>            
#include<cstring>                  
#include<map>                     
#include<cmath>                  
#include<set>
using namespace std;            
#define ll long long int        
#define ld long double
#define MOD 1000000007 
#define PI 3.1415926535897932384626433832795                                               
#define YY cout<<"YES"
#define NN cout<<"NO"
#define EE cout<<"\n"
#define ee cout<<"\n"
#define ne cout<<"-1"
#define pb push_back 
#define fi first
#define se second
#define mkp make_pair    
#define mkt make_tuple
#define sall(v ) sort(v.begin(), v.end())      
#define all(v )  v.begin(), v.end()      
#define fo(i , n) for(ll i = 0 ; i < n ; i++)
#define vl vector<ll>
#define vc vector<char> 
#define vll vector< pair<ll,ll> > 
#define mps map<string ,ll>
#define mpc map<char ,ll>
#define mpl map<ll, ll>
#define pr pair<ll,ll>
#define tpl tuple<ll,ll,ll>
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) {return (a.second < b.second); }
ll containsDigit(ll number, ll digit){while (number != 0){int curr_digit = number % 10;if (curr_digit == digit) return 1;number /= 10;}return 0;}
ll soltn(ll x, ll n) {if(x>=0) return x%n;    else return n+x%n;}
ll bin_srch(ll L[], ll N,ll item){ll flag=-2;int l=0,u=N-1,m;while(l<=u) {m=(l+u)/2;if(item==L[m]) {flag=m-1; break;} else if(item>L[m]) l=m-1; else u=m+1;} return flag;}
ll pd(ll x,ll y){if(x%y==0) return x/y;else return x/y+1;}
ll coda(ll n,ll d){ll count=0;while(n!=0){if(n%10==d)count++;n/=10;}return count;}
ll minDissame(ll a[], ll n)  {map<ll,ll> hmap; ll minDistance = INT_MAX;  ll previousIndex = 0, currentIndex = 0;  for (ll i = 0; i < n; i++) {  if (hmap.find(a[i])!=hmap.end()) {  currentIndex = i;     previousIndex = hmap[a[i]];   minDistance = min((currentIndex -        previousIndex),minDistance);        }hmap[a[i]] = i;  }    return (minDistance == INT_MAX ? -1 : minDistance);  } 
ll minDistanytwo(ll arr[], ll n, ll x, ll y) {ll p = -1, min_dist = INT_MAX; for(ll i=0 ; i<n ; i++) {if(arr[i]==x || arr[i]==y) {if( p != -1 && arr[i] != arr[p])  min_dist = min(min_dist , i-p); p=i;  }} if(min_dist==INT_MAX) return -1; return min_dist; } 
ll mdls(ll x){return max(x,-x);}
ll pow1(ll n,ll p){if(p==0)return 1;ll x=pow1(n, p/2);x=(x*x);if(p%2==0) return x;else return (x*n);}
string fumn(string s){string p;for(ll i = 0; i < s.length(); i++)if(isalpha(s[i]))p+=toupper(s[i]);return p;}
ll turns(string S,string SS){ ll i,cc=0,l=S.length();fo(i,l){ if(S[i]!=SS[i]) cc++; } return cc/2;}
ll isSubstr(string s1, string s2) {   ll M = s1.length();    ll N = s2.length();  for (ll i = 0; i <= N - M; i++) { ll j; for (j = 0; j < M; j++) if (s2[i + j] != s1[j])  break;         if (j == M) return i;   } return -1; } 
//s2>s1;if(not) rtrn -1;
ll hhh2(unsigned ll n) {   if (n < 1)  return 0; ll res = 1;  ll u=0; for (ll i=0; i<8*sizeof(unsigned ll); i++) {    ll curr = 1 << i; if (curr > n)      break;   u++;  res = curr;} return u; }
ld ldgcd(ld a,ld b){ return a<0.0001?b:ldgcd(fmod(b,a),a);} 
void onesol(ll a,ll b,ll& x,ll& y,ll& g) {if(!b) {g=a;x=1;y=0;} else{onesol(b,a%b,y,x,g);y-=a/b*x;}}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);	


	  ll tt=1;
//	      cin>>tt;
	      while(tt--)
{
/*
9999 10
540 7550
691 9680
700 9790
510 7150
415 5818
551 7712
587 8227
619 8671
588 8228
176 2461*/
ll n,m,i,j;
cin>>n>>m;
ll dp[n+1];
memset(dp,MOD,sizeof(dp));
ll a[m],b[m];
fo(i,m)
cin>>a[i]>>b[i];
dp[0]=0;
fo(i,n+1)
{
	fo(j,m)
	{
		if(i-a[j]>=0)
		{
			dp[i]=min(dp[i],dp[i-a[j]]+b[j]);
		}
		else
		dp[i]=min(dp[i],b[j]);
	}
}
cout<<dp[n];
ee;
}
return 0;
}



