#include<iostream>
#include<cstdio>
#include<algorithm>//sort头文件
using namespace std;
int a[10001],ans=0,bns=0,n;//乱入了1个打酱油的变量。
int main()
{
    scanf("%d",&n);//读入数据
    for(int i=1;i<=2*n;i++)//题目说的是2n，别一顺手就打错了。
    {
        scanf("%d",&a[i]);//循环读入
    }
    sort(a+1,a+1+2*n);    //所有数据排序
    for(int i=1;i<=2*n;i+=2)
    {
        bns+=a[i];//根据题意分析，我们只需要逐个跳着加和即为所求。
    } 
    printf("%d\n",bns);//AT通性，换行
    return 0;//结束
}
