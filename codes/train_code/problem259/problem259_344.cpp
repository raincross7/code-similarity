#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
template <class T> inline bool chmin(T &a, T b) {if (a > b){a = b;return true;}return false;}
template <class T> inline bool chmax(T &a, T b) {if (a < b){a = b;return true;}return false;}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a;cin>>a;
    string ans;
    if(a<1200){
        ans = "ABC";
    }else if (a<2800)
    {
        ans = "ARC";
    }else {
        ans = "AGC";
    }
    cout<<ans<<endl;
    
}