#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;

int main(){
    string S, T;
    cin >> S;
    cin >> T;
    if(S==T){
        cout << "Yes" << endl;
        return 0;
    }

    for(int i=0; i<S.size(); i++){
        char tmp = S[S.size()-1];
        for(int j=S.size()-1; j>=1; j--){
            S[j] = S[j-1];
        }
        S[0] = tmp;
        if(S==T){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}