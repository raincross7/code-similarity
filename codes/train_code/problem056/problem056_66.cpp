#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k,zb=0;
    cin >> n >> k;
    vector<int> v(n);
    for (int i=0;i<n;i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    for (int i=0;i<k;i++)
        zb+=v[i];
    cout << zb;
}
