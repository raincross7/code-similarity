#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cin >> a.at(i);
    }
    int nin = 1e9;
    for (int i=-100;i<=100;i++){
        int sum =0;
        for (int j=0;j<n;j++){
            sum+=pow(a.at(j)-i,2);
        }
        nin = min(nin,sum);
    }
    cout << nin << endl;
    return 0;
}