#include <bits/stdc++.h>
using namespace std;

int  main()
{
	int a,b,c,d; cin >> a >> b >> c >> d;
	if (a+b > c+d)
		cout << "Left\n";
	else if (a+b < c+d)
		cout << "Right\n";
	else 
		cout << "Balanced\n";
	return (0);
}