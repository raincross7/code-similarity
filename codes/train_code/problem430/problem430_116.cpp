//a/b programing

#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
int a,b,d,r;
double f;

cin>>a>>b;

d=a/b;
r=a%b;
f=(double)a/b;

cout<<d<<" "<<r<<" ";
printf("%.8f\n",f);

return 0;
}