#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(x)(x).begin(), (x).end() // 昇順ソート
#define rall(v)(v).rbegin(), (v).rend() // 降順ソート
#define INF 1LL << 60
typedef long long int LL;
typedef long long int ll;
#define pll pair < ll, ll >
#define F first
#define S second
const int MOD = 1000000007;
template < class T > bool chmax(T & a,const T & b) { if (a < b) { a = b; return true; } return false; }
template < class T > bool chmin(T & a,const T & b) { if (a > b) { a = b; return true; } return false; }
// 任意のlogは　対数の底の変換を使う    log(N) / log(任意の底)

int main() {
    string s;cin >> s;
    deque<char> q;
    
    rep(i,s.size()){
        char c = s[i];
        q.push_back(c);
    }

    int ct = 0;

    while(!q.empty()){
        char f = q.front();
        char b = q.back();


        if(f == b){
            q.pop_front();
            if(q.empty())break;
            q.pop_back();
            continue;
        }
        
        if(f == 'x'){
            q.push_back('x');
            ct++;
            continue;
        }

        if(b == 'x'){
            q.push_front('x');
            ct++;
            continue;
        }

        if(f != b){
            ct = -1;
            break;
        }
    }

    cout << ct << endl;

}