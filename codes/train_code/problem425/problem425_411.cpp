#include<iostream>
using namespace std;
void Draw(int h,int w)
{
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++)
			cout<<"#";
		cout<<endl;
	}	
}

int main()
{
	int h ,w;
	while(true){
		cin>>h>>w;
		if(h==0&&w==0)
			break;
		Draw(h,w);
		cout<<endl;	
	}	
	return 0;
}
