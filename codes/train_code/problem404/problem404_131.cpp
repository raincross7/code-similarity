#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)if(s[i]==',')s[i]=' ';
    cout<<s;
}