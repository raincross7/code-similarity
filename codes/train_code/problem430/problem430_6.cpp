#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int a, b;
    
    cin >> a >> b;
    cout << a / b << " " << a % b << " ";
    printf("%.8lf",(double)a / b);
    printf("\n");
    
    return 0;
}
