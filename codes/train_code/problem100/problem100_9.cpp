#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[4][4],d[4][4],z,n;
    set<int>s;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            cin>>a[i][j];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>z;
        s.insert(z);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(s.count(a[i][j]))
                d[i][j]=1;
            else
                d[i][j]=0;
        }
    }
    if(d[1][1])
    {
        if((d[0][0]&&d[2][2])||
           (d[0][1]&&d[2][1])||
           (d[2][0]&&d[0][2])||
           (d[1][0]&&d[1][2]))
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    else
    {
        if((d[0][0]&&d[0][1]&&d[0][2])||
           (d[1][0]&&d[0][0]&&d[2][0])||
           (d[2][0]&&d[2][1]&&d[2][2])||
           (d[0][2]&&d[1][2]&&d[2][2]))
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
}