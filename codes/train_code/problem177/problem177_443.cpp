#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int> mp;
    for(int i=0;i<s.size();++i){
        mp[s[i]]+=1;
    }
    if(mp.size()==2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}