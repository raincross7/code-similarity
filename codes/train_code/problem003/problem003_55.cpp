#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x;
	cin>>x;
	if(x>=400 && x<600)
	{
		cout<<8;
	}
		if(x>=600 && x<800)
	{
		cout<<7;
	}	if(x>=800 && x<1000)
	{
		cout<<6;
	}
		if(x>=1000 && x<1200)
	{
		cout<<5;
	}
		if(x>=1200 && x<1400)
	{
		cout<<4;
	}
		if(x>=1400 && x<1600)
	{
		cout<<3;
	}
		if(x>=1600 && x<1800)
	{
		cout<<2;
	}
		if(x>=1800 && x<2000)
	{
		cout<<1;
	}
	
}