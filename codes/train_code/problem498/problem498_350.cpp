#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;

const ll LongINF=1e13+7;
const int INF=1e9+7;
const int dx[]={0,1,0,-1};
const int dy[]={1,0,-1,0};

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
template <class T, class Y>T GCD(T a, Y b){if(a<b){int c=a;a=b;b=c;}if (a % b == 0){return b;}return GCD(b, a % b);}
template<class T,class Y>T LCM(T a,Y b){return (a*b)/GCD(a,b);}
void clear(queue<pair<int, int>> &q){queue<pair<int, int>> empty;swap(q, empty);} //queueの中身の型は適時変更を忘れない

using vi=vector<int>;
using vii=vector<vi>;

#define REP(i,a,b) for(ll i=(a);i<(b);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define rv reverse
#define ALL(a) (a).begin(),(a).end()
#define decimal(x) fixed<<setprecision(x)

int main(){
    int n;
    ll sum=0,cnt=0,ans=0;
    cin>>n;
    vector<ll> a(n),b(n);
    vector<bool> c(n,false);
    priority_queue<ll> que2;
    priority_queue<pair<ll,ll>> que;
    rep(i,n){
        cin>>a[i];
    }
    rep(i,n){
        cin>>b[i];
        ll x=a[i]-b[i];
        sum+=x;
        if(x<0){
            cnt++;
            que2.push(-x);
        }else{
            que.push({x,i});
        }
    }
    if(sum<0){
        cout<<-1<<endl;
        return 0;
    }else if(cnt==0){
        cout<<0<<endl;
        return 0;
    }else{
        auto x=que.top();
        ll y=que2.top();
        que.pop();que2.pop();
        c[x.second]=true;
        rep(i,cnt){
            while(y>0){
                if(x.first>=y){
                    x.first-=y;
                    break;
                }else{
                    y-=x.first;
                    x=que.top();
                    que.pop();
                    c[x.second]=true;
                }
            }
            y=que2.top();
            que2.pop();
        }
        ans=cnt;
        rep(i,n)if(c[i])ans++;
        cout<<ans<<endl;
    }
    return 0;
}

//a=97,z=122