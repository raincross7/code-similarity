/****************************************************************
# @Author:      iLovePKU_zbtxdy
# @DateTime:    2020-01-27 14:25:45
# @Description: You build it. You run it
# @More: Once lots of AC, try Brute-force,dynamic programming
****************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define close std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define eps 1e-8
typedef long long ll;
const int maxn = 1e6+10;
const int INF = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3f;
const double PI = acos(-1.0);
ll mod = 1e9+7;
int main()
{
    string s;
    pair<int , int >ans = make_pair(-2,-2);
    cin >> s;
    int len = s.length();
    for(int i = 1; i < len; i++){
        if(s[i] == s[i-1]){
            ans.first = i-1, ans.second = i;
            break;
        }
    }
    for(int i = 2; i < len; i++){
        if(s[i] == s[i-2]){
            ans.first = i-2, ans.second = i;
            break;
        }
    }
    /*if(ans.second == -1 && ans.first == -1){
        cout << "-1 -1\n";exit(0);
    }*/
    cout << ans.first + 1<< " " << ans.second +1<< endl;
    //system("pause");
}
/***************************************************************************
*stuff you should look for
*int overflow, array bounds
*special cases (n=1?), set tle
*do smth instead of nothing and stay organized
***************************************************************************/