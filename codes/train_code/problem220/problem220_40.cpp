#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define GET_ARRAY_SIZE(a)   (sizeof(a)/sizeof(a[0]))
#define LL long long
int main(){
    LL a,b,c,d,ans;
    cin >> a >> b >> c >> d;
    if (abs(a-b) <= d && abs(b-c) <= d ){
        cout <<"Yes" << endl;
    }else if(abs(a-c) <= d){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
