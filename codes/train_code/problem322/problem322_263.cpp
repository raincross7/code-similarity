#include<iostream>
using namespace std;
int main(){
    int x=1;
    int i=1;
    
    for (i=1;x!=0;i++){
       
         cin >>x;
        if (x==0)  break;
        cout << "Case"<<" "<<i<<":"<<" "<<x<<endl;
        
    }
    return 0;
}
