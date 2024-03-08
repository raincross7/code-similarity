#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int INF = 1001001001;

int main(){
    double a,b,x;
    cin >> a >> b >> x;
    double s = x / a;
    double rad;
    if(s >= a*b/2){
        double h = (a*b-s)*2/a;
        rad = atan2(h,a);
    }else{
        double w = s*2/b;
        rad = atan2(b,w);
    }
    double PI = acos(-1);
    double deg = rad/(2*PI) * 360;
    printf("%.10f\n",deg);
}