#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<float>v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v.at(i);
	}
	sort(v.begin(),v.end());
	float f=v.at(0);
	for(int i=1;i<n;i++)
	{
		f=(f+v.at(i))/2.0;
	}
	cout <<fixed << setprecision(15) <<  f << endl;
}
