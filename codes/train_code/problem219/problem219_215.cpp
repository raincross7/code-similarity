#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,sum = 0;
    cin>>num;
    int n = num;
    while(num > 0)
    {
        int rem = num%10;
        sum = sum + rem;
        num = num/10;
    }

    if(n % sum == 0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
    }
