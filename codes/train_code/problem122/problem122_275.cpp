#include<iostream>
using namespace std;

main(){
int W,H,x,y,r;

cin >> W >> H >> x >> y >> r;

if(x>=r&&x+r<=W&&y>=r&&y+r<=H){
	cout << "Yes\n";
}
else{
	cout << "No\n";
}
}