#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#include <cstdlib> 
#include <math.h>
#include<cstdio>
#include<cstring>
#define FOR(I, A, B) for (ll I = (A); I <= (B); I++)
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fo(i,n) for(ll i=0;i<n;i++)
#define sz(a) ll((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define dbg3(x,y,z) cout << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << endl
#define dbg4(x,y,z,q) cout << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << ", " << #q << " = " << q << endl
#define scan(char_array) scanf("%[^\n]s",&char_array)
#define inin freopen("input3.txt", "r", stdin)


int main(){
	IOS
	//inin;
	ll n;
	cin>>n;
	ll a[n];
    fo(i,n) cin>>a[i];
    ll second[22];
    ll last[22];
    fo(i,22){
    	last[i]=n;
    	second[i]=n;
    }
    ll ans=0;
    for(ll i=n-1;i>=0;i--){
    	ll miin=n-1;
    	fo(j,21){
    		if(a[i]&(1<<j)){
    			miin=min(miin,(last[j]-1));
    			if(second[j]==last[j]) ;
    			else second[j]=last[j];
    			
    			last[j]=i;

    		}
    		else{
    			miin=min(miin,second[j]-1);
    		}
    	}
    	ans+=(miin-i+1);
    	//dbg2(i,ans);

    }
    cout<<ans<<endl;

}