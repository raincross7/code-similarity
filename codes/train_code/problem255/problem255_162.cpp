#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   (s[0]!=s[1] && s[1]!=s[2] && s[0]!=s[2])? cout<<"Yes" : cout<<"No";
}