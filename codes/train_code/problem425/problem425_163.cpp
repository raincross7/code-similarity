#include<iostream>
using namespace std;

int main(){
    int n, m, i, j;
    while (cin >> n >> m && (n != 0 || m != 0)){
        for (i = 0; i < n; i++){
            for (j = 0; j < m; j++){
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
    }
}