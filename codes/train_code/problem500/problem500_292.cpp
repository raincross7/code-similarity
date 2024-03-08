#include <bits/stdc++.h>
#define rep(i, n) for(long long int i = 0; i < n; i++)
#define _rep(i, m, n) for(long long int i = m; i < n; i++)
#define print(n) std::cout << n << std::endl
#define _print(n) std::cout << n
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int N = 1000000;
const ll mod = 1000000007;
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

ll gcd(ll A, ll B){
    if(B == 0)return A;
    return gcd(B, A % B);
}
ll lcm(ll A, ll B){
    return A * B / gcd(A, B);
}

/*------------------------------------------------------------------*/

int main(){
    string s; cin >> s;
    int count = 0;

    for(int i = 0, j = s.size() - 1; i < j;){
        if(s[i] == s[j])i++, j--;
        else if(s[i] == 'x'){
            count++;
            i++;
        }else if(s[j] == 'x'){
            count++;
            j--;
        }else{
            cout << -1 << endl;
            return 0;
        } 
    }
    cout << count << endl;
}