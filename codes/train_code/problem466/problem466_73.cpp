//Same Integers

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,x,y) for(int i=x;i<y;i++)
#define irep(i,a) for(auto i = a.begin(); i != a.end(); ++i)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/__gcd(a, b)*b)
#define range(a) (a).begin(),(a).end() 
#define pb push_back
#define mp make_pair
#define nnn "\n"
#define spa " "
template<class T>inline bool chmin(T& a,T b,bool f){
if(f==1){if(a>b){a=b;return true;}return false;}
else if(f==0){if(a<b){a=b;return true;}return false;}return false;}
typedef pair<int,string> p;
const int inf = 2147483647;//2*10^9
const ll INF = 9223372036854775807;//9*10^18

int main (){
    vector<int>t(3);cin>>t[0]>>t[1]>>t[2];
    sort(range(t));
    if((t[1]-t[0])%2==0){
        cout<<(t[2]-t[1]+t[2]-t[0])/2<<nnn;
    }else{
        cout<<(t[2]-t[1]+t[2]-t[0])/2+2<<nnn;
    }
    
}