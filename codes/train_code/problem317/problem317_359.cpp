#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <utility>
#include <functional>
#include <cstring>
#include <queue>
#include <stack>
#include <math.h>
#include <iterator>
#include <vector>
#include <string>
#include <set>
#include <math.h>
#include <iostream> 
#include<map>
#include <iomanip>
#include <stdlib.h>
#include <list>
#include <typeinfo>
#include <list>
#include <set>
using namespace std;
#define MAX_MOD 1000000007
#define REP(i,n) for(long long i = 0;i < n;++i)
#define LONG_INF 8000000000000000000
int main() {
	int a, b;
	cin >> a >> b;
	REP(i, a) {
		REP(q, b) {
			string s;
			cin >> s;
			if (s == "snuke") {
				cout <<char('A' + q)<< i + 1 << endl;
				return 0;
			}
		}
	}
}