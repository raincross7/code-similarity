#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
	int m, f, r;
	while (true) {
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1) break;
		if ((m == -1 || f == -1) || (m + f < 30)) {
			cout << "F" << endl;
		}
		else if (m + f >= 80) {
			cout << "A" << endl;
		}
		else if (m + f < 80 && m + f >= 65) {
			cout << "B" << endl;
		}
		else if (m + f < 65 && m + f >= 50 || (m + f < 50 && m + f >= 30 && r >= 50)) {
			cout << "C" << endl;
		}
		else if (m + f < 50 && m + f >= 30) {
			cout << "D" << endl;
		}
	}
}