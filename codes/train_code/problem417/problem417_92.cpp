// 一次元リバーシ  / 
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans=0;
    for(int i=1; i<s.size(); i++){
        if(s[i-1]!=s[i]){ans++;}
    }
    cout << ans << endl;
    return 0;
}