#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
  	cin >> s;
  	for(int i=0;i<3;i++){
    	cout << (s[i]=='1'?9:1);
    }
  	return 0;
}