#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
#define all(x) x.begin(), x.end()
using namespace std;
typedef long long ll;
typedef pair<int, int> pair;
const int inf = 1000000000; //10^9
const ll inff = 1000000000000000000; //10^18

int main(){
    int n, a;
    cin >> n >> a;
    if(n >= 500) n %= 500;
    if(n <= a) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}