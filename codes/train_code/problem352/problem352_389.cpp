#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> v(n+1);
    vector<int> v2(n+2);
    v2[0] = 0;
    v2[n+1] = 0;
    for (int i=1; i<n+1; i++)
        cin >> v2[i];
    int sum=0;
    for (int i=0; i<n+1; i++)
    {
        v[i] = v2[i+1] - v2[i];
        sum += abs(v[i]);
    }
    // for (int i=0; i<n+2; i++)
    //     cout << v2[i] << " " ;
    // cout << endl;
    // for (int i=0; i<n+1; i++)
    //     cout << v[i] << " " ;
    // return 0;
    // cout << sum;
    vector<int> res(n);
    for (int j=0; j<n; j++)
    {
        int sub = abs(v[j]) + abs(v[j+1]);
        int add = abs(v2[j+2]-v2[j]);
        res[j] = sum - sub + add;
        // int x = sum - abs(v[j]) - abs(v[j+1]) + abs(v2[j+1]-v2[j-1]);
    }
    for (int j=0; j<n; j++)
        cout << res[j] << endl;       

    return 0;
}