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
#include <random>
#include<map>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include <list>
#include <typeinfo>
#include <list>
#include <set>
#include <cassert>
#include<fstream>
#include <unordered_map>
#include <cstdlib>
using namespace std;
#define Ma_PI 3.141592653589793
#define eps 0.00000000000000000000000001
#define LONG_INF 10000000000000000
#define GOLD 1.61803398874989484820458
#define MAX_MOD 1000000007
#define REP(i,n) for(long long i = 0;i < n;++i)
#define seg_size 262144
int main() {
	int h, w, d;
	cin >> h >> w >> d;
	string color = "RYGB";
	for (int i = 0;i < h;++i) {
		for (int q = 0;q < w;++q) {
			int mask = 0;
			mask |= (i + q) / d % 2;
			mask |= ((h - 1 - (i - q)) / d % 2) << 1;
			cout << color[mask];
		}
		cout << endl;
	}
	return 0;
}