#include<iostream>
using namespace std;
int main(){
int n,b,f,r,v;
int room[5][4][11];
for(int i=0; i<5; i++){
for(int j=0; j<4; j++){
for(int k=0; k<11; k++){
room[i][j][k]=0;
}
}
}
cin >> n;
for(int i=0; i<n; i++){
cin >> b >> f >> r >> v;
room[b][f][r]+=v;
}
for(int i=1; i<5; i++){
for(int j=1; j<4; j++){
for(int k=1; k<11; k++){
cout << " " << room[i][j][k];
}
cout <<endl;
}
if(i!=4) cout << "####################" <<endl;
}
return 0;
}
