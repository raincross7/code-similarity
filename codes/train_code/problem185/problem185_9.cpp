#include <bits/stdc++.h>
using namespace std;
int a[202];
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<2*n;i++) scanf("%d", &a[i]);
    sort(a, a+2*n);
    int ans = 0;
    for(int i=0;i<2*n;i+=2) ans += a[i];
    printf("%d\n", ans);
}