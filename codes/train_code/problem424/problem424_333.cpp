#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <cctype>
#define len length()
#define sz size()
#define rng(i, a, b) for(int i = a; i < b; i++)
#define rep(i, n) rng(i, 0, n)
#define srt(v) sort(v.begin(), v.end())
#define rev(s) reverse(s.begin(), s.end())
#define vi(a, n) vector<int> a(n)
#define vs(a, n) vector<string> a(n)
#define vc(a, n) vector<char> a(n)
#define psb(a) push_back(a)
#define ppb pop_back()
#define erc(S, i) S.erase(S.begin() + i)
#define ers(S, i, j) S.erase(S.begin() + i, S.begin() + j)
#define sp(n) cout << setprecision(n) << fixed
#define fst(s) s.at(0)
#define lst(s) s.at(s.len - 1)
using namespace std;

int main(){
    int N, H, W;
    cin >> N >> H >> W;
    vector<pair<int,int> > p(N);
    rep(i, N) cin >> p[i].first >> p[i].second;
    int ans=0;
    rep(i,N) if(p[i].first >= H && p[i].second >= W) ans++;
    cout << ans << endl;
    return 0;
}