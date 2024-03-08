#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0 ;i < n ;i++)
        cin >> a[i];

    sort(a.begin() , a.end());

    double res = a[0];
    for (int i = 1 ;i < a.size() ;i++)
        res = (res + a[i]) / 2.0;


    cout << fixed << setprecision(10) << res;
}
