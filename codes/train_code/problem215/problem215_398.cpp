#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll dp[105][4][2];

int main() {
string s;
cin >> s;
int n = s.size();
int K;
cin >> K;
dp[0][0][0] = 1;

for(int i=0; i<n; i++){
   for(int j = 0;j<4; j++){
     for(int k = 0; k<2;k++){
        int nd = s[i]-'0';
         for(int d = 0;d<=9;d++){
               int ni = i+1;  int nj = j; int nk = k;
               if(d != 0) nj++;
               if(nj > K) continue;
              if(k ==0){
                     if(nd < d) continue;
                     if(nd > d ) nk = 1;
                    }
                dp[ni][ nj][nk] += dp[i][j][k];
                }
         }
    }
}
ll ans = dp[n][K][0]+dp[n][K][1] ;
cout << ans << endl;
return 0;
}
