#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int int64_t
#define watch(x) cout << (#x) << " is " << (x) << endl

const int32_t MAX=1e9+7;
typedef vector<int> vi;
typedef vector<int64_t> vll;

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.precision(10);cout << fixed;

    //Problem code start

    int n;
    cin >> n;
    int ways{0};
    for(int a=1;a<n;a++){
        int ans = (n-1)/a;
        ways+=ans;
    }
    cout << ways;
    return 0;
}