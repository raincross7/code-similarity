#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long x,y;
	cin >> x >> y;
	if(abs(x-y) <= 1)puts("Brown");
	else puts("Alice");
}