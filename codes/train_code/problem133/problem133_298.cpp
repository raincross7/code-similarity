#include <bits/stdc++.h>
using namespace std;

int main(){
double x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
double d;
d=sqrt(x1*x1+y1*y1+x2*x2+y2*y2-2*x1*x2-2*y1*y2);
cout << fixed << setprecision(10);
cout<<d<<endl;
}
