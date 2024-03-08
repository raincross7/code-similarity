/*
      author  : nishi5451
      created : 14.08.2020 16:16:29
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;


int main(){
    string s,t;
    cin >> s >> t;
    sort(s.begin(),s.end());
    sort(t.rbegin(),t.rend());
    for(int i=0; i<min(s.size(),t.size()); i++){
        if(s[i]>t[i]){
            cout << "No" << endl;
            return 0;
        }
        else if(s[i]<t[i]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    if(s.size() < t.size()) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}