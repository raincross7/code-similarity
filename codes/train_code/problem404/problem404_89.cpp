 #include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  int len = s.length();
  for(int i = 0;i<len;i++)
  {
    if(s[i]==',')
    cout<<" ";
    else
    cout<<s[i];
  }
  cout<<endl;
}