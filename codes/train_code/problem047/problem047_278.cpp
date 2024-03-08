#include<bits/stdc++.h>
#define rep(i,n) for (int i=0; i<n; i++)
#define REP(i,x,n) for (int i=x; i<n; i++)
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vvi vec(n, vi(3));
    rep(i,n-1)rep(j,3) cin >> vec[i][j];

    rep(i,n){
        int time = 0;
        time += vec[i][1];
        time += vec[i][0];
        REP(j,i+1,n-1){
            //printf("%d ", time);
            if (time < vec[j][1]){
                time = vec[j][1];
                time += vec[j][0];
            }
            else if (time % vec[j][2] == 0){
                time += vec[j][0];
            }
            else {
                time = ((time+vec[j][2]-1)/vec[j][2]) * vec[j][2];
                time += vec[j][0];
            }
        }
        cout << time << endl;
    }

    return 0;
}
