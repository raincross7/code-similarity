#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	cout << a / b << ' ' << a%b << ' ';
	printf("%.7lf\n", (double)a / b);
}