#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const long long MOD=1e9+7;

int main() {
    int x1,y1,x2,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    int x3,y3,x4,y4;
    x3=x2-(y2-y1);
    y3=y2+(x2-x1);
    x4=x3-(y3-y2);
    y4=y3+(x3-x2);
    printf("%d %d %d %d\n",x3,y3,x4,y4);
    return 0;
}