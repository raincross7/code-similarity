#include <bits/stdc++.h>
using namespace std;
int main(){
	double x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	cout<<setprecision(10)<<fixed<<sqrt((pow(x1-x2,2)+pow(y1-y2,2))*1.0)<<endl;
}
