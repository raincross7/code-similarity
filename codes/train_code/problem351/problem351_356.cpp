#include <iostream>
using namespace std;
int main(void){
    char a, b;
    cin>>a>>b;
    if(a>b){
        cout<<">"<<endl;
    }else if(a<b){
            cout<<"<"<<endl;
    }else{
        cout<<"="<<endl;
    }
}