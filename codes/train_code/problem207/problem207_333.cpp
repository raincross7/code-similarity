#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> S(H);
    for(int i=0; i<H; i++) cin >> S[i];
    if(H==1 && W == 1) {
        cout << "Yes" << endl;
        return 0;
    }
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            bool flg = false;
            if(S[i][j] == '#') {
                if(i+1 < H && S[i+1][j] == '#') {
                    flg = true;
                }
                else if(i-1 >= 0 && S[i-1][j] == '#') {
                    flg = true;
                }
                else if(j+1 < W && S[i][j+1] == '#') {
                    flg = true;
                }
                else if(j-1 >= 0 && S[i][j-1] == '#') {
                    flg = true;
                }
            }
            else if(S[i][j] == '.') flg = true;
            if (flg == false) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}