//String Transformation

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
#define rep(i,x,y) for(ll i=x;i<y;i++)
#define irep(i,a) for(auto i = a.begin(); i != a.end(); ++i)
#define nvarep(n,a) ll n;cin>>n;vector<ll>a(n);rep(i,0,n)cin>>a[i]
#define vecrep(n,a,type) vector<type>a(n);rep(i,0,n)cin>>a[i]
#define lcm(a,b) (a/__gcd(a, b)*b)
#define range(a) (a).begin(),(a).end() 
#define pb push_back
#define mp make_pair
#define nnn "\n"
#define spa " "
using p = pair<char, char>;
using garph = vector<vector<ll>>;
const int inf = 2147483647;//2*10^9
const ll INF = 9223372036854775807;//9*10^18

signed main (){
    string s,t;cin>>s>>t;
    vector<int>u(26,-1);
    vector<int>v(26,-1);
    rep(i,0,s.size()){
        if(u[s[i]-'a']==-1){
            u[s[i]-'a']=t[i];
        }else if(u[s[i]-'a']==t[i])continue;
        else{
            cout<<"No"<<nnn;
            return 0;
        }
        if(v[t[i]-'a']==-1){
            v[t[i]-'a']=s[i];
        }else if(v[t[i]-'a']==s[i])continue;
        else{
            cout<<"No"<<nnn;
            return 0;
        }
    }
    cout<<"Yes"<<nnn;
    return 0;
}