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
#define Yy cout<<"Yes"
#define Nn cout<<"No"
#define yy cout<<"yes"
#define nn cout<<"no"
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
ll pow1(ll n,ll p){if(p==0)return 1;ll x=pow1(n, p/2);x=(x%MOD*x%MOD)%MOD;if(p%2==0) return x;else return (x*n)%MOD;}
ll isSubstr(string s1, string s2) {   ll M = s1.length();    ll N = s2.length();  for (ll i = 0; i <= N - M; i++) { ll j; for (j = 0; j < M; j++) if (s2[i + j] != s1[j])  break;         if (j == M) return i;   } return -1; } 
//s2>s1;if(not) rtrn -1;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);	
	  ll tt=1;

//	   cin>>tt;
	      while(tt--)
{
	ll n,p,m,i,j,k,c=0,ans=MOD,ma=0,mi=MOD;
/*
84 97 66
79 89 11
61 59 7
7
89
7
87
79
24
84
30*/
ll M[3][3];
fo(i,3)
{
	fo(j,3)
	cin>>M[i][j];
}
mpl a;
cin>>n;
fo(i,n)
{cin>>j;
	a[j]=1;
}
ll f=-1;
if(a[M[0][0]]==a[M[0][1]]&&a[M[0][1]]==a[M[0][2]]&&a[M[0][2]]==1)
f=1;
if(a[M[1][0]]==a[M[1][1]]&&a[M[1][1]]==a[M[1][2]]&&a[M[1][2]]==1)
f=1;
if(a[M[2][0]]==a[M[2][1]]&&a[M[2][1]]==a[M[2][2]]&&a[M[2][2]]==1)
f=1;
if(a[M[0][0]]==a[M[1][1]]&&a[M[1][1]]==a[M[2][2]]&&a[M[2][2]]==1)
f=1;
if(a[M[2][0]]==a[M[1][1]]&&a[M[1][1]]==a[M[0][2]]&&a[M[0][2]]==1)
f=1;
if(a[M[0][0]]==a[M[1][0]]&&a[M[1][0]]==a[M[2][0]]&&a[M[2][0]]==1)
f=1;
if(a[M[0][1]]==a[M[1][1]]&&a[M[1][1]]==a[M[2][1]]&&a[M[1][1]]==1)
f=1;
if(a[M[0][2]]==a[M[1][2]]&&a[M[1][2]]==a[M[2][2]]&&a[M[2][2]]==1)
f=1;
/*fo(i,3)
{
	fo(j,3)
	cout<<a[M[i][j]]<<" ";
	ee;
}*/
if(f==1)
Yy;
else
Nn;
ee;
}
return 0;
}







