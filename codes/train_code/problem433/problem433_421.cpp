#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    // ifstream cin("input.txt");
    int N;
    cin >> N;
    int ans = 0;
    for(int i=1;i<=N-1;i++)
    {
        ans += (N-1)/i;
    }
    cout << ans << endl;
    return 0;

}