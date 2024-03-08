#include "bits/stdc++.h"
using namespace std;


/* macro */
#define rep(i,a,b) for(int i=a;i<b;i++)
#define revrep(i,a,b) for(int i = a; i > b; i--)
#define int long long
#define exist(s,e) ((s).find(e)!=(s).end())
#define all(v) (v).begin(), (v).end()
#define each(s,itr) for(auto (itr) = s.begin(); (itr) != s.end(); (itr)++)
#define sum(v) accumulate(all(v), (0LL))
#define pb push_back


/* alias */
template<class T> using vec = vector<T>;
typedef vector<int> vi;
typedef pair<int, int> pi;


/* constant */
const int inf = pow(2, 62);
const int mod = 1e9 + 7;
int dx[8]={1,0,-1,0,-1,1,-1,1};
int dy[8]={0,1,0,-1,-1,-1,1,1};
const string alpha = "abcdefghijklmnopqrstuvwxyz";

/* io_method */
int input(){int tmp;cin >> tmp;return tmp;}
string raw_input(){string tmp;cin >> tmp;return tmp;}
string readline(){string s;getline(cin, s);return s;}
template<class T> void printx(T n){cout << n;}
template<class T, class U> void printx(pair<T, U> p){cout << "(" << p.first << "," << p.second << ")";}
template<class T> void printx(vector<T> v){cout << "{";rep(i,0,v.size()){printx(v[i]);if(i != v.size()-1)printx(",");}cout << "}";}
template<class T> void print(T n){printx(n);cout << endl;}
template<class T> void print(set<T> s){cout << "{";each(s, e){if(e != s.begin()) printx(",");printx(*e);}cout << "}" << endl;}
template<class T, class U> void print(map<T, U> mp){cout << "{";each(mp, e){cout << "(" << e -> first << "," << e -> second << ")";}cout << "}" << endl;}
template<class T> void printans(vector<T> v){
    rep(i,0,v.size() - 1){
        cout << v[i] + 1 << " ";
    }
    cout << v[v.size() - 1] + 1 << endl;
}

/* general_method */
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

template<typename T>
auto cut(T &a, int l, int r){
    return T(a.begin()+l, a.begin()+r);   
}


/* main */



signed main(){

    cin.tie(0);
    ios::sync_with_stdio(false);

    bool field[100][100];

    rep(i,0,100){
        rep(j,0,100){
            if(i < 50) field[i][j] = true;
            else field[i][j] = false;
        }
    }

    int a, b; cin >> a >> b; a--; b--;

    for(int i = 0; i < 50; i += 2){
        for(int j = 0; j < 100; j+= 2){
            if(a > 0){
                field[i][j] = false;
                a--;

            }
        }
    }

    for(int i = 52; i < 100; i += 2){
        for(int j = 0; j < 100; j += 2){
            if(b > 0){
                field[i][j] = true;
                b--;
            }
        }
    }

    cout << 100 << " " << 100 << endl;

    rep(i,0,100){
        rep(j,0,100){
            if(field[i][j]) cout << "#";
            else cout << ".";
        }
        cout << endl;

    }
















    














    









    






    

}

