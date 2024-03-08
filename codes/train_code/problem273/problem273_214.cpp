#include <bits/stdc++.h>
using namespace std;
///////////////////////////////////////////
const long long int INF = 1LL<<60;
const long long int Mod = 1000000007;
using ll = long long int; using ci = const int;
using vi = vector<int>;  using Vi = vector<long long int>;
using P = pair<int, int>;  using PLL = pair<ll, ll>;
using matrix = vector<vector<ll>>;
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define all(x) (x).begin(),(x).end()
#define rp(i,N) for(ll i = 0; i < (ll)N; i++)
#define repi(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
template<class T>bool chmax(T &former, const T &b) { if (former<b) { former=b; return true; } return false; }
template<class T>bool chmin(T &former, const T &b) { if (b<former) { former=b; return true; } return false; }
template<class T>T sqar(T x){ return x*x; }//sqrt(x)は平方根;
#define Sort(v) std::sort(v.begin(), v.end(), std::greater<decltype(v[0])>()) //降順でVをソート
#define p_queue(v) priority_queue<v, vector<v>, greater<v> >
template<class T> inline void princ(T x){cout<<x<<" ";}; 
template<class T> inline void print(T x){cout<<x<<"\n";};
template<class T> inline void Yes(T condition){ if(condition) cout << "Yes" << endl; else cout << "No" << endl; }
template<class T> inline void YES(T condition){ if(condition) cout << "YES" << endl; else cout << "NO" << endl; }
///////////////////////////////////////////////////////////////////////////////////

int main(){
    ll n,d,a;
    cin >> n >> d >> a;
    vector<PLL> monster(n);
    rp(i,n) {
        ll x,h;
        cin >> x >> h;
        monster.at(i)=mp(x,(h+a-1)/a);
    }
    sort(all(monster));
    ll ans=0;
    ll bom=0;
    queue<PLL> bombed;
    rp(i,n){
        ll pos=monster.at(i).first,life=monster.at(i).second;
        while(!bombed.empty()&&bombed.front().first<pos-d-d){
            PLL pl=bombed.front(); bombed.pop();
            bom -= pl.second;
        }
        if(life<=bom) continue;
        ans += life-bom;
        bombed.push(mp(pos,life-bom));
        bom=life;
    }
    print(ans);
    return 0;
}