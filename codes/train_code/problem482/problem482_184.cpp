#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int H,W;
while(true){
cin>>H>>W;
if(H==0&&W==0)break;
	for(int i=0;i<W;i++)cout<<"#";cout<<endl;
	
	for(int i=1;i<H-1;i++){
		for(int j=0;j<W;j++){
			if(j==0||j==W-1)cout<<"#";
			else cout<<".";
		}
		cout<<endl;
	}
	for(int i=0;i<W;i++)cout<<"#";cout<<endl;
	cout<<endl;
}
return 0;
}