#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,k,x,y;
    cin >> n >> k >> x >> y;
    if (n==k){
        cout << x*k;
    }
    else {
        if(n<k){
            cout << x*n;
        }
        else {
            cout << x*k+y*(n-k);
        }
    }
}