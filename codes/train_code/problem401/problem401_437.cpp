#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin>>n>>l;
    string s[n];
    set<string>st;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s, s+n);
    string ans;
    for(int i=0;i<n;i++)
    {
        ans+=s[i];
    }
    cout<<ans<<endl;


    return 0;
}