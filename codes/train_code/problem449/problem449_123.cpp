//Ruthless Coding 
#include <bits/stdc++.h>

#define uni(x)      (x).resize(unique(all(x)) - (x).begin())
#define fprint(v)   for(auto x : v) cout << x << ' '
#define ALL(x)      (x).begin(), (x).end()
#define MP(x, y)    make_pair(x, y)
#define PII         pair<int, int>
#define SZ(x)       int((x).size())
#define PB(x)       push_back(x)
#define ll          long long
#define S           second 
#define F           first
#define nl          '\n'

using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
mt19937_64 rnd;

const int N = 2e5 + 5;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    function<int(int, int, int, int)> dist = [&](int x, int y, int x1, int y1){
        return (x - x1) * (x - x1) + (y - y1) * (y - y1);
    };
    int a = y2 - y1;
    int b = x1 - x2;
    int c = y2 * (x2 - x1) - x2 * (y2 - y1);
    function<bool(int, int)> isLeft = [&](int x, int y){
        int yo = a * x + b * y + c;
        return yo < 0;
    };
    set<PII> s;
    int d = dist(x1, y1, x2, y2);
    for(int i = -500; i <= 500; i++){
        for(int j = -500; j <= 500; j++){
            if((dist(i, j, x1, y1) == d && dist(i, j, x2, y2) == 2 * d) || (dist(i, j, x1, y1) == 2 * d && dist(i, j, x2, y2) == d)){
                s.insert(MP(i, j));
            }
        }
    }
    for(int i = -500; i <= 500; i++){
        for(int j = -500; j <= 500; j++){
            for(auto p : s){
                int x = p.F;
                int y = p.S;
                if(dist(i, j, x, y) == d && dist(i, j, x1, y1) == d && dist(i, j, x2, y2) == 2 * d){
                    if(dist(x, y, x1, y1) == 2 * d && dist(x, y, x2, y2) == d && isLeft(x, y)){
                        cout << x << ' ' << y << ' ' << i << ' ' << j;
                        return 0;
                    }
                }
                if(dist(i, j, x, y) == d && dist(i, j, x1, y1) == 2 * d && dist(i, j, x2, y2) == d){
                    if(dist(x, y, x1, y1) == d && dist(x, y, x2, y2) == 2 * d && isLeft(i, j)){
                        cout << i << ' ' << j << ' ' << x << ' ' << y;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}
