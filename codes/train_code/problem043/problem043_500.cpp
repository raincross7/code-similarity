#include <iostream> 
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <stdlib.h>
#include <deque>  
#include <iomanip>

using namespace std;

using ll = long long;
const ll INF  = 1e9;
const ll MOD =  1e9 + 7;
#define rep(i, n) for(int i = 0; i < n; i++)
#define loop(i, a, n) for(int i = a; i < n; i++)
#define all(in) in.begin(), in.end()
int main(){
    int N, K;
    cin >> N >> K;
    cout << N - K + 1 << endl;
    return 0;
}