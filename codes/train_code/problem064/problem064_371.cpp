#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int a,b;
    char s;
    cin>>a>>s>>b;
    if(s=='+')cout<<a+b<<endl;
    else if(s=='-')cout<<a-b<<endl;
    return 0;
}