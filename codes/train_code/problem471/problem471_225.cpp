#include <bits/stdc++.h>
using namespace std;


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> a[i];
    }
    int count = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i] < a[i-1])
            count++;
        else
            a[i] = a[i-1];
    }
    cout << count;
}
