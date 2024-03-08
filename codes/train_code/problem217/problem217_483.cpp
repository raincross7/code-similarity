#include <algorithm>
#include <cassert>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < n; i++)
#define REP(i, n) for(ll i = 1; i < n + 1; i++)
#define PI 3.14159265359
#define EPS 0.0000000001
#define MOD 1000000007
//cout << std::fixed << std::setprecision(15) << y << endl;


int main(){
    ll N;
    cin >> N;

    string W[N];
    bool success = true;
    char lastChar;
    rep(i, N){
        cin >> W[i];
        if(!success){
            continue;
        }
        rep(j, i){
            if(W[j] == W[i]){
                success = false;
                break;
            }
        }
        if(i != 0){
            if(lastChar != W[i][0]){
                success = false;
            }
        }
        lastChar = W[i][W[i].size() - 1];
    }

    if(success){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}