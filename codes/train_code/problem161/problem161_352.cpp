#include <bits/stdc++.h>
using namespace std;

int main() {
	char a, b;
	cin >> a >> b;
	
  	if( a == 'H' && b == 'H' ) cout << 'H' << endl; 
  	else if( a == 'H' && b == 'D' ) cout << 'D' << endl;
  	else if( a == 'D' && b == 'H' ) cout << 'D' << endl;
  	else if( a == 'D' && b == 'D' ) cout << 'H' << endl;
  	else;
}
