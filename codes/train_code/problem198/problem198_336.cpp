#include <bits/stdc++.h>
using namespace std;
int main(){
    string o,e;
    cin >> o >> e;
    for(int i = 0; i < o.length()+e.length(); i++){
        if(i%2==0){
            cout << o[i/2];
        }else{
            cout << e[i/2];
        }
    }
    cout << endl;
    return 0;
}