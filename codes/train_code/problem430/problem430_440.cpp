#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int a,b;
    double f1,f2;
   
    cin >> a >> b ;
    f1 = a;
    f2 = b;

    printf("%d %d %.5f\n",(a/b),(a%b),(f1/f2));
    return 0;
}
