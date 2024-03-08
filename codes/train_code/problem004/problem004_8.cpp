#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <functional>
#include <algorithm>
#include <climits>
#include <cmath>
#include <iomanip>
using namespace std;
#define ll long long int
#define rep(i,n) for( int i = 0; i < n; i++ )
#define rrep(i,n) for( int i = n; i >= 0; i-- )
#define REP(i,s,t) for( int i = s; i <= t; i++ )
#define RREP(i,s,t) for( int i = s; i >= t; i-- )
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define INF 2000000000
#define mod 1000000007
#define INF2 1000000000000000000


int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N, K, R, S, P;
    string T;
    cin >> N >> K >> R >> S >> P >> T;
    int ans = 0;
    for(int i = 0; i < K; i++) {
        if(T[i] == 'r') ans += P;
        if(T[i] == 's') ans += R;
        if(T[i] == 'p') ans += S;
        bool free = false;
        for(int j = i + K; j < N; j += K) {
            if(!free && T[j - K] == T[j]) {
                free = true;
            } else {
                if(T[j] == 'r') ans += P;
                if(T[j] == 's') ans += R;
                if(T[j] == 'p') ans += S;
                free = false;
            }
        }
        //cout << "*" << ans << endl;
    }
    cout << ans << endl;

    return 0;
}