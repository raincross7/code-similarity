#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> l_l;
typedef pair<int , int> i_i;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<char> vec;
typedef vector<bool> veb;
typedef vector<string> ves;
typedef vector<vector<ll>> vvl;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvec;
typedef vector<vector<bool>> vveb;
typedef vector<vector<string>> vves;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rep1(i,n) for(int i=1;i<(int)(n);i++)
#define rep2(i,n) for(int i=2;i<(int)(n);i++)
#define repk(i,k,n) for(int i=k;i<(int)(n);i++)
#define fs first
#define sc second
#define pb push_back
#define pp pop_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define maxel(a) *max_element(all(a))
#define minel(a) *min_element(all(a))
#define acc accumulate
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define mod (1000000007)
typedef long long int64;
//const int64 INF = 1LL << 58;
#define dame { puts("-1"); return 0;}
#define YES { cout << "YES" << endl; return 0; }
#define NO { cout << "NO" << endl; return 0; }
#define Yes { cout << "Yes" << endl; return 0; }
#define No { cout << "No" << endl; return 0; }
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};


int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);  

    string s,t;
    cin >> s >> t;
    vi start(26,-1);
    vi goal(26,-1);

    rep(i,s.size()){
        int a = s[i] - 'a';
        int b = t[i] - 'a';

        if(start[a] != -1 || goal[b] != -1){
            if(start[a] != b || goal[b] != a){
                No
            }
        }
        else {
            start[a] = b;
            goal[b] = a;

        }
        
    }
    Yes

    return 0;
}
    