#include<iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

bool num[1000000] = { false };

void primNumberCheck(){
    num[2] = true;//?\???°?????????????????????????????????2???????????§???????????????

    int i, j, k;
    for (i = 3; i <= 1000000; i += 2)//2????????°???????????????
    {
        k = 0;
        for (j = 3; j <= sqrt((double)i); j += 2)//?????????i??\??????i????´???°??????????????\??????i????´???°??¨?????????????????§????????????
        {
            if (i%j == 0)
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
        {
            num[i] = true;
        }
    }
}

int main()
{
    primNumberCheck();

    int n;
    
    while (cin>>n)
    {
        int result = 0;
        for (int i = 0; i <= n; i++)
        {
            if (num[i] == true)result++;
        }
        cout << result << endl;
    }

    return 0;
}