#include<bits/stdc++.h>
using namespace std;
int main(void)
{	
	int w,h,x,y,r;
	cin>>w>>h>>x>>y>>r;
	if(0<=x-r&&x+r<=w&&0<=y-r&&y+r<=h){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}
