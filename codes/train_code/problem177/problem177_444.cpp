#include<iostream>
#include<algorithm>
using namespace std;
int main (void)
{
  string s;
  cin>>s;
  if((s[0]==s[1]&&s[2]==s[3]&&s[0]!=s[3])||(s[0]==s[2]&&s[1]==s[3]&&s[0]!=s[3])||(s[0]==s[3]&&s[2]==s[1]&&s[1]!=s[3]))
  {
    cout<<"Yes"<<endl;
  }
  else cout<<"No"<<endl;
  
}
 