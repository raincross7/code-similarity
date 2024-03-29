#include <bits/stdc++.h>
using namespace std;
    
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pb push_back
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'
#define N 10000002
#define MOD 1000000007
    
signed main() {
    vi stk;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
        bool f = false;
        int num = s[i] - '0';
        if(stk.size()) {
            if(stk.back() == 1 - num) {
                stk.pop_back();
                f = true;
            }
        }
        if(!f)
            stk.pb(num);
    }
    cout << s.size() - (stk.size()) << endl;
}