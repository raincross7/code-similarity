#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    int max = 0;
    int ans = 0;
    for(int i = 0; i < n; i++) cin >> h[i];
    for(int i = 0; i < n; i++){
        if(max <= h[i]){
            ans++;
            max = h[i];
        }
    }
    cout << ans <<endl;
}