#include<bits/stdc++.h>
using namespace std;
const long long int M = 1e9 + 7;
int main() {
    long long int n , k , i , j;
    cin >> n >> k;
    long long int a[n+1];
    for(i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    long long int ans = 0;
    for(i = 0 ; i < n ; i++) {
        long long int c = 0 , d = 0;
        for(j = 0 ; j < i ; j++) {
            if(a[j] > a[i]) {
                c++;
            }
        }
        for(j = 0 ; j < n ; j++) {
            if(a[j] > a[i]) {
                d++;
            }
        }
        ans += c * k +(k*(k-1)/2)%M*d%M;
        ans = ans%M;
    }
    cout << ans << "\n";
}