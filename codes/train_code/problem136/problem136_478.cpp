#include <bits/stdc++.h>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(std::string s, std::string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<int>());
    cout << ((s < t) ? "Yes" : "No") << endl;
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    std::string s;
    std::cin >> s;
    std::string t;
    std::cin >> t;
    solve(s, t);
    return 0;
}
