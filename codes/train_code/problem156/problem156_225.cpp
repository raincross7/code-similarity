#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(void){
    int a,b,c;
    cin>>a>>b>>c;
    double PI=acos(-1);
    double rad=c*PI/180;
    cout<<fixed<<setprecision(5);
    cout<<a*b*sin(rad)/2<<endl<<a+b+sqrt(a*a+b*b-2*a*b*cos(rad))<<endl<<b*sin(rad)<<endl;
}

