#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, l[1000], i;
    cin >> n;
    l[0]=2;l[1]=1;
    for(i=2;i<=n;i++){
        l[i]=l[i-1]+l[i-2];
    }
    cout << l[n] <<endl;
    return 0;
}
