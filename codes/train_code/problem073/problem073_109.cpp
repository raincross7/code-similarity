#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> P;
#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())
#define chmin(x,y) x = min(x,y)
#define chmax(x,y) x = max(x,y)

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main()
{
    string s;cin >> s;
    ll k;cin >> k;
    int index = 0;
    while(index<(int)s.length())
    {
        if(s[index]=='1')
        {
            index++;
            continue;
        }
        break;
    }
    if(k<=index)
    {
        cout << '1' << endl;
        return 0;
    }
    cout << s[index] << endl;

    
}