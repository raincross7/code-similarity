#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll=long long;
using P = pair<int,int>;
int main(){
    string a,b;
    cin >> a >> b;
    for(int i=0;i<a.size();i++){
        cout << a[i];
        if(i<b.size())cout << b[i];
    }
    cout << endl;
}
