#include<bits/stdc++.h>
using namespace std;   
int main(){
    int a,b;
    string s,t;
    cin>>s>>t;
    a=s.size();
    b=t.size();
    sort(s.begin(),s.end());
    sort(t.begin(),t.end(),greater<char>());
    if(s<t){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}