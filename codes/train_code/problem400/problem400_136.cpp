#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string n;
    int sum=0;
    cin>>n;
    for(int i=0;i<n.length();i++){
        sum+=n.at(i)-48;
    }
    if(sum%9==0)cout<<"Yes\n";
    else cout<<"No\n";
}