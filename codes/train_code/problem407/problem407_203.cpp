#include <bits/stdc++.h>
using namespace std;
 typedef long long ll;



int main() {
ll N, K;
cin >> N >> K;
ll ans = K; 
for(int i = 1; i < N; i++){
ans *= K-1;
}
cout << ans << endl;
}
