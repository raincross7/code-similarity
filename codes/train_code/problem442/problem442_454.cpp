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
ll containsDigit(ll number, ll digit){while (number != 0){int curr_digit = number % 10;if (curr_digit == digit) return 1;number /= 10;}return 0;}
ll soltn(ll x, ll n) {if(x>=0) return x%n;    else return n+x%n;}
ll pd(ll x,ll y){if(x%y==0) return x/y;else return x/y+1;}
ll coda(ll n,ll d){ll count=0;while(n!=0){if(n%10==d)count++;n/=10;}return count;}
ll mdls(ll x){return max(x,-x);}
ll pow1(ll n,ll p){if(p==0)return 1;ll x=pow1(n, p/2);x=(x%MOD*x%MOD)%MOD;if(p%2==0) return x;else return (x*n)%MOD;}
ll isSubstr(string s1, string s2) {   ll M = s1.length();    ll N = s2.length();  for (ll i = 0; i <= N - M; i++) { ll j; for (j = 0; j < M; j++) if (s2[i + j] != s1[j])  break;         if (j == M) return i;   } return -1; } 
//s2>s1;if(not) rtrn -1;
// Driver Program to test above function 
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);	
	  ll tt=1;
//int N=1000001;

//SieveOfEratosthenes
	//   cin>>tt;
	      while(tt--)
{
/*
erasedream*/
ll n,m,i;
string s;
cin>>s;
n=s.length();
ll f=1;
ll rem=n;
for(i=0;i<n;i++)
{
	if(rem>7&&s[i+6]=='a'&&s[i]=='d'&&s[i+1]=='r'&&s[i+2]=='e'&&s[i+3]=='a'&&s[i+4]=='m'&&s[i+5]=='e'&&s[i+6]=='r')
	{
		i+=4;
		rem-=5;
//		cout<<"a";
	}
	else if(rem>=7&&s[i+7]!='a'&&s[i]=='d'&&s[i+1]=='r'&&s[i+2]=='e'&&s[i+3]=='a'&&s[i+4]=='m'&&s[i+5]=='e'&&s[i+6]=='r')
	{
		i+=6;
		rem-=7;
//	cout<<"b";
}
	else if(rem>6&&s[i+6]=='a'&&s[i]=='e'&&s[i+1]=='r'&&s[i+2]=='a'&&s[i+3]=='s'&&s[i+4]=='e'&&s[i+5]=='r')
	{
		i+=4;
		rem-=5;
//		cout<<"c";
	}
	else if(rem>6&&s[i+6]!='a'&&s[i]=='e'&&s[i+1]=='r'&&s[i+2]=='a'&&s[i+3]=='s'&&s[i+4]=='e'&&s[i+5]=='r')
	{
		i+=5;
		rem-=6;
//		cout<<"d";
	}
	else if(rem>=6&&s[i]=='e'&&s[i+1]=='r'&&s[i+2]=='a'&&s[i+3]=='s'&&s[i+4]=='e'&&s[i+5]=='r')
	{
		i+=5;
		rem-=6;
//		cout<<"e";
	}
	else if(rem>=5&&s[i]=='e'&&s[i+1]=='r'&&s[i+2]=='a'&&s[i+3]=='s'&&s[i+4]=='e')
	{
		i+=4;
		rem-=5;
//		cout<<"f";
	}
	else if(rem>=5&&s[i]=='d'&&s[i+1]=='r'&&s[i+2]=='e'&&s[i+3]=='a'&&s[i+4]=='m')
	{
		i+=4;
		rem-=5;
//		cout<<"g";
	}	
	else
	f=-1;
}
if(f==-1)
NN;
else
YY;
ee;

}
return 0;
}













