#include<iostream>
using namespace std;

int main(){
    int a,b,c,tmp;
    cin >>a>>b>>c;
    if(a>b && b>c){
        tmp = a;
        a = c;
        c = tmp;
    }
    if(a>b){
        tmp = b;
        b = a;
        a = tmp;
    }
    if(b>c){
        tmp = c;
        c = b;
        b = tmp;
    }
    cout << a <<" "<< b <<" "<< c <<endl;
    
}
