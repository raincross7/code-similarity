#include<iostream>
#include<cstdio>
using namespace std;


int main(){
    int a, b;
    cin >> a >> b;
    
    printf("%d %d %f",a/b, a%b, (double)a/b);
    printf("\n");
    
    
    return 0;
    
}