#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
char s[n];
int cnt=1;

for(int i=0;i<n;i++)
{

    cin>>s[i];


}

for(int i=0;i<n-1;i++)
{
    if(s[i]!=s[i+1])
    {
        cnt++;
    }
}

cout<<cnt<<endl;
exit(0);

}
