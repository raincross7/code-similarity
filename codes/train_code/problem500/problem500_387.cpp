#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0;i < n;i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define For(i, s, e) for(int i = s;i <= e;i++)
#define Sort(v, n) sort(v, v+n);
#define VSort(v) sort(v.begin(), v.end());
#define ll long long
#define pb(a) push_back(a)
#define INF 999999999
#define cY cout<<"Yes";
#define cN cout<<"No";
#define cA(a) cout<<a;
const ll MOD = 1000000007;

int main() {
    string s;cin>>s;
    int i = 0,ans = 0;
    int left = 0,right = s.size()-1;
    while(1) {
        if(left>=right) {
            cout << ans;
            return 0;
        }

        if(s[left] == s[right]) {
            left++;
            right--;
        } else if(s[left] == 'x') {
            ans++;
            left++;
        } else if(s[right] == 'x') {
            ans++;
            right--;
        } else {
            cout << -1;
            return 0;
        }
    }
}
