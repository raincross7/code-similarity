#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(c>=a && c<=a+b){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
    