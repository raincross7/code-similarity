#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;
typedef long long LL;
const LL MOD = 1e9 + 7;
const int N = 2e7 + 9, M = 1e7, OO = 0x3f3f3f3f;
#define AC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); cin.sync_with_stdio(0);
int main()
{
AC;
int a,b,c;
cin>>a>>b>>c;
if(a==b){
    printf("%d",c);
}
else if(b==c){
    printf("%d",a);
}
else{
    printf("%d",b);
}




    return 0;
}
