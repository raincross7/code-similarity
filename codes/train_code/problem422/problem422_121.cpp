#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,A;
    cin >> N >> A;

    N = N%500;

    if(N - A > 0){
        cout << "No" << endl;
    }
    if(N - A <=0){
        cout << "Yes" << endl;
    }
}