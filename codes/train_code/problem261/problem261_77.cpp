#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

 int main(){

    int n;cin>>n;
    int i=n/111;

    if(n%111 != 0)
        ++i;
    cout<<(i*111)<<endl;

 return 0;
 }
