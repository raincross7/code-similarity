#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    string ans = "No";
    
    cin >> a >> b >> c;
    
    if(a < b && b < c)
        ans = "Yes";
        
    cout << ans << endl;
}
