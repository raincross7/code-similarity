#include<bits/stdc++.h>
using namespace std;
using i64 = int_fast64_t;
#define rep(i, N) for(int i = 0; i < N; i++)
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define Cout(s) cout << s << endl
string Yes(bool b) {if(b){return "Yes";} else {return "No";}}
string YES(bool b) {if(b){return "YES";} else {return "NO";}}

int main(){
    int H, W, A, B;
    cin >> H >> W >> A >> B;

    char a = '0', b = '1';
    rep(h, H) rep(w, W){
        if(w == 0 && h == B) swap(a, b);
        cout << (w < A ? a : b);
        if(w == W-1) cout << "\n";
    }
}