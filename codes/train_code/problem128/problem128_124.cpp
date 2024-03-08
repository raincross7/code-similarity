#include<bits/stdc++.h>
using namespace std;
char black_ground[105][50];
char white_ground[105][50];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int w,b;
	cin>>w>>b;
	cout<<100<<" "<<100<<'\n';
	for(int i=0; i<100; i++){
		for(int j=0; j<50; j++) black_ground[i][j] = '#';
	}
	for(int i=0; i<100; i++){
		for(int j=0; j<50; j++) white_ground[i][j] = '.';
	}
	w--;
	b--;
	int p = 0;
	int div_w = w/50;
	for(int i=0; i<div_w; i++){
		int h = 0;
		for(int j=0; j<50; j++){
			black_ground[h][p] = '.';
			h+=2;
		}
		p+=2;
	}
	if(w%50){
		int h = 0;
		for(int j=0; j<w%50; j++){
			black_ground[h][p] = '.';
			h+=2;
		}
	}
	
	p = 0;
	int div_b = b/50;
	for(int i=0; i<div_b; i++){
		int h = 0;
		for(int j=0; j<50; j++){
			white_ground[h][49-p] = '#';
			h+=2;
		}
		p+=2;
	}
	if(b%50){
		int h = 0;
		for(int j=0; j<b%50; j++){
			white_ground[h][49-p] = '#';
			h+=2;
		}
	}
	for(int i=0; i<100; i++){
		for(int j=0; j<50; j++) cout<<black_ground[i][j];
		for(int j=0; j<50; j++) cout<<white_ground[i][j];
		cout<<'\n';
	}
}