//
//  main.cpp
//  usaco
//
//  Created by 김현수 on 2020/08/30.
//  Copyright © 2020 김현수. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
int main()
{
    int a, b, c, d, sum=0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b)
    {
        sum=b*c+((a-b)*d);
    }
    else if(a<=b)
    {
        sum=a*c;
    }
    printf("%d", sum);
}
