#include "bits/stdc++.h"
using namespace std;
#define rep(i,n)for(int i=0;i<(int)(n);i++)
#define PI 3.141592653589793
//vector < vector<int>>a(0, vector<int>(0));二次元配列宣言


int main()
{
	string s;
	cin >> s;
	if (s.at(5) == '0' && s.at(6) >= '1' && s.at(6) <= '4')
		cout << "Heisei" << endl;
	else
		cout << "TBD" << endl;
}