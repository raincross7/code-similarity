#include<iostream>
using namespace std;
int main(){
    int N,X,T;
    cin >> N >> X >> T;
    int times = (N + X -1)/X;
    int ans = times  * T;
    cout << ans << endl;
    
}