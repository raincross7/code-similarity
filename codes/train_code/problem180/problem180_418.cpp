#include<cstdio>

using namespace std;

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b < c) puts("No");
    else puts("Yes");
}