#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define all(x) (x).begin(),(x).end()
#define endl "\n"

using ll = long long;
using P = pair<int,int>;
using mp =  map<char,int>;

const int MOD = 1e9 + 7;
const int INF = 1001001001;


int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    if(a == b){
        cout << "Draw" << endl;
    }else if((a > b && a != 13)|| a == 1){
        cout << "Alice" << endl;
    }else{
        cout << "Bob" << endl;
    }

    return 0;
}