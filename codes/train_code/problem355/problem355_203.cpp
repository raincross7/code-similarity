#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma comment(linker, "/stack:200000000")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define fbo find_by_order
#define ook order_of_key

typedef long long ll;
typedef string str;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector <pii> vpii;
typedef vector <pll> vpll;
typedef map <str,int> mapsi;
typedef map <str,int> :: iterator mapsitr;
typedef map <int , int> mint;
typedef map <ll , ll> mll;
typedef set <int> si;
typedef set <ll> sll;
typedef si :: iterator sitr;
typedef si :: reverse_iterator rsitr;
typedef sll :: iterator sltr;
typedef sll :: reverse_iterator rsltr;
#define mset multiset
 
typedef mset <int> msi;
typedef mset <ll> msll;
typedef msi :: iterator msitr;
typedef msi :: reverse_iterator msritr;
typedef msll :: iterator msltr;
typedef msll :: reverse_iterator mslritr;
 
#define mp make_pair
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define fi first
#define se second
#define fs first.second
#define ss second.second
#define ff first.first
#define sf second.first
#define newl '\n'
 
char to_upper (char x){
    if( 97 <= int(x) && int(x) <= 122)return char(x-32);
    else if( 65 <= int(x) && int(x) <= 90)return x;
}
char to_lower (char x){
    if( 97 <= int(x) && int(x) <= 122)return x;
    else if( 65 <= int(x) && int(x) <= 90)return char(x+32);
}
int numerize (char x){
    if(48 <= int(x) && int(x) <= 57)return int(x-'0');
    else if( 97 <= int(x) && int(x) <= 122)return int(x-96);
    else if( 65 <= int(x) && int(x) <= 90)return int(x-64);
}
bool isect (int l1, int r1, int l2, int r2){
    pii p1,p2;
    p1 = mp(l1,r1); p2 = mp(l2,r2);
    if(p1>p2)swap(p1,p2);
    if(p2.fi <= p1.se)return true;
    else return false;
}
ll quickpow (ll num1, ll num2, ll MOD){
    if(num2==0)return 1;
    else if(num2==1)return num1;
    else{
        ll temp = quickpow (num1,num2/2,MOD); ll res = ((temp%MOD) * (temp%MOD))%MOD;
        if(num2%2==1) res = ((res%MOD)*(num1%MOD))%MOD; return res;
    }
}
ll invmod (ll num, ll MOD){return quickpow (num,MOD-2,MOD);}
ll gcd (ll num1, ll num2){
    if(num1 < num2) swap(num1,num2); ll num3 = num1 % num2 ;
    while(num3 > 0){ num1 = num2; num2 = num3; num3 = num1 % num2;}
    return num2;
}
ll lcm (ll num1 , ll num2){return (ll) (num1/__gcd(num1,num2))*num2;}
// end of Template
int n;
int a[200010];	
char ans[200010];
bool valid(){
	for(int i=1;i<n-1;i++){
		int l,r;
		if(i>1) l = i-1;
		else l = n;
		r = i+1;
		
		int d = a[i];
		if(ans[i] == 'W') d*=-1;
		
		if(d==-1){
			if(ans[l] == 'W') ans[r] = 'S';
			else ans[r] = 'W';
		}
		else ans[r] = ans[l];
	}
	int l = n-2;
	int r = n;
	int d = a[n-1];
	if(ans[n-1] == 'W') d*=-1;
	if(d==-1){
		if(ans[l] != ans[r]){ }
		else return false;
	}
	else{
		if(ans[l] == ans[r]) { }
		else return false;
	}
	
	l = n-1;
	r = 1;
	d = a[n];
	if(ans[n] == 'W') d*=-1;
	if(d==-1){
		if(ans[l] != ans[r]) return true;
		return false;
 	}
 	else{
 		if(ans[l] == ans[r]) return true;
 		return false;
	 }
	
}
void solve(){
	ans[1] = 'W';
	ans[n] = 'W';
	if(valid()){
		for(int i=1;i<=n;i++) cout<<ans[i];cout<<newl;
		return;
	}
	ans[1] = 'W';
	ans[n] = 'S';
	if(valid()){
		for(int i=1;i<=n;i++) cout<<ans[i];cout<<newl;
		return;
	}
	ans[1] = 'S';
	ans[n] = 'W';
	if(valid()){
		for(int i=1;i<=n;i++) cout<<ans[i];cout<<newl;
		return;
	}
	ans[1] = 'S';
	ans[n] = 'S';
	if(valid()){
		for(int i=1;i<=n;i++) cout<<ans[i];cout<<newl;
		return;
	}
	cout<<-1<<newl;
	
	
}
int main(){
 
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
  	cin>>n;
  	for(int i=1;i<=n;i++){
  		char temp; cin>>temp;
  		if(temp == 'o') a[i] = 1;
  		else a[i] = -1;
	}
	solve();
	
}
