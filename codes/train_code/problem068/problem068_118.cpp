/*
C++ ???????????????????????????????????¬??????
??????AOJ-ITP1??????????????????
*/
#define _USE_MATH_DEFINES

#include <iostream> // ?¨??????\??????
#include <fstream>  // ??????????????\??????
#include <string>   // ???????????¢???
#include <vector>   // ???????????????
#include <cmath>    // ??°??????
#include <iomanip>  // stream???????????¢???
#include <algorithm>// max??¢??°??????

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;        // ????´???°????????????????????????
using std::fixed;         // ???????????????????¨???????????????????????????????
using std::setprecision;  // ?????°????°???°?????\???????????°????????????????????¨????????\???

int main() {
	int Debt = 100000;
	int a;
	int b;
	cin >> a;
	for (size_t i = 0; i < a; i++)
	{
		// ?????±?????????????¨??????????
		Debt = Debt*1.05;
		// ????????????3???????¨??????????
		b = Debt % 1000;
		if (b > 0) {
			Debt += 1000;
		}
		// ????????????????????????
		Debt = Debt - b;
	}
	cout << Debt << endl;
	return 0;
}