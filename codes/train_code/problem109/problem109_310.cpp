#include <bits/stdc++.h>
#define endl        '\n'
#define pi          2*acos(0.0)
#define pb(a)       push_back(a)
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define mod         1000000007
#define inf         1000000000000000001
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define all(x)      (x).begin(), (x).end()
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


using namespace std;

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    string s, ans;
    cin >> s;
    vector<char> vch;
    for (int i = 0; i < (int) s.length(); i++) {
        if(s[i] != 'B')
            vch.pb(s[i]);
        else if(s[i] == 'B') {
            if(!vch.empty()) {
                vch.pop_back();
            }
        }
    }
    for (int i = 0; i < (int) vch.size(); i++) {
        cout << vch[i];
    }
    cout << endl;
    return 0;
}