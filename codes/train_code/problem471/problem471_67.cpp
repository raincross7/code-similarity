// Template begins
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <queue> 
#include <string.h>
#include <string>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define endl "\n"
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(i=a;i<b;i++)
#define all(v) (v).begin(),(v).end()
#define sort0(v) sort(all(v))
#define lbb(a,b,arr,x) lower_bound(arr+a,arr+b+1,x)-arr
#define ubb(a,b,arr,x) upper_bound(arr+a,arr+b+1,x)-arr
#define freq(a,b,arr,x) upper_bound(arr+a,arr+b+1,x)-lower_bound(arr+a,arr+b+1,x)
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define d0(x) cout<<(x)<<" "
#define d1(x) cout<<(x)<<endl
#define d2(x,y) cout<<(x)<<" "<<(y)<<endl
#define d3(x,y,z) cout<<(x)<<" "<<(y)<<" "<<(z)<<endl
#define d4(a,b,c,d) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<endl
#define d5(a,b,c,d,e) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<" "<<(e)<<endl
#define d6(a,b,c,d,e,f) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<" "<<(e)<<" "<<(f)<<endl
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define ss second
#define ff first
#define pb push_back
#define mp make_pair
#define printp(x) cout << x.ff << " " << x.ss << endl

const ll mod=998244353;
#define inf 9999999999999
#define MAXN   100001 
  
// stores smallest prime factor for every number 
ll inv(ll i){if(i==1) return 1;return (mod-((mod/i)*inv(mod%i))%mod)%mod;}
ll gcd(ll a,ll b){if(a==0) return b;return gcd(b,b%a);}
inline void fastio(){ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);}
// Template ends
const int MN = 2e5+7;






int main(){
    fastio();
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    set <int> s;
    s.insert(arr[0]);
    ll ans=1;
    for(int i=1;i<n;i++){
        auto it1=s.begin();
        int a=*it1;
        if(arr[i]<a){
            ans++;
        }
        s.insert(arr[i]);
    }
    cout<<ans<<endl;

    return 0;
}

 