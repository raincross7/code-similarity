#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <string>
#include <cctype>
#include <map>
#include <limits>
#include <iomanip>

using namespace std;

const int mod = 1000000007;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define ll long long

int main()
{
	int K;
	string S;
	cin >> K;
	cin >> S;

	if(K - (int)S.length() >= 0)
	{
		cout << S << endl;
	}
	else
	{
		cout << (S.substr(0, K) + "...") << endl;
	}

	return 0;
}