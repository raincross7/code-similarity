#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;
    int test = 0;
    for(int i=0; i<n/2; i++){
      if(s[i]!=s[i+(n/2)]){
          test = 1;
          break;}
    }
    if(test==0 && n%2==0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}