#include <bits/stdc++.h>
using namespace std;
#define rep0(i, n) for (long long i = 0; i < (long long)(n); i++)
#define rep1(i,n) for(long long i=1;i<=(long long)(n);i++)
#define all(v) v.begin(),v.end()
#define Sort(v) sort(all(v))
#define Reverse(v) reverse(all(v))
#define Rsort(v) sort(all(v),greater)
#define pub(v) push_back(v)
#define pob(v) pop_back(v)
typedef long long ll;
typedef vector<ll> vel;
typedef vector<vector<ll>> vel2d;
typedef string str;
typedef pair<ll,ll> pal;

int main() {
    ll R,G,B,N,cnt=0;
    cin>>R>>G>>B>>N;
    for(ll r=0;r*R<=N;r++){
        for(ll g=0;g*G<=N;g++){
            ll bB=N-(r*R+g*G);
            if(bB%B==0&&bB>=0){cnt++;}
            
        }
    }
    cout<<cnt<<endl;
}

