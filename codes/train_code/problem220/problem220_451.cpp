#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
  	cin >> a >> b >> c >> d;
    cout << (
    abs(a-b)<=d&&abs(b-c)<=d ? "Yes":
    abs(a-c)<=d ? "Yes":"No"
    );
}