#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;

    if(y<x*2){
        cout << "No";
    }else if(y>x*4){
        cout << "No";
    }else{
        if(y&1){
            cout << "No";
        }else{
            cout << "Yes";
        }
    }
    return 0;
}