#include<iostream>
using namespace std;


int main(void){


    long long int n,fact = 1;

    cin >> n;

    for(int i = n;i > 0;i--){
        fact *= i;
    }

    cout << fact << endl;
    return 0;
}