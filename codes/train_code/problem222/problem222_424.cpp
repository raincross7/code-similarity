#include<iostream>
#include<string>
using namespace std;
int main(){
	int a[4][3][10];
	int n;
	int b,f,r,v;
	cin>>n;
	for(int i=0;i<4;i++)
		for(int j=0;j<3;j++)
			for(int k=0;k<10;k++)
				a[i][j][k]=0;
	for(int i=0;i<n;i++){
		cin>>b>>f>>r>>v;
		a[b-1][f-1][r-1]+=v;
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<10;k++)
				cout<<" "<<a[i][j][k];
			cout<<endl;
		}
		if(i<3){
		for(int j=0;j<20;j++)
			cout<<"#";
		cout<<endl;
		}
	}
	return 0;
}