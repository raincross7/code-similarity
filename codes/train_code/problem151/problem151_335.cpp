#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <vector>
#include <math.h>
#include <queue>
#include <deque>
#include <map>
const int MOD = 1e9+7;
typedef long long ll;
using namespace std;

int main(){
	int d;
	cin >> d;
	if (d == 25) cout << "Christmas" << endl;
	else if (d == 24) cout << "Christmas Eve" << endl;
	else if (d == 23) cout << "Christmas Eve Eve" << endl;
	else cout << "Christmas Eve Eve Eve" << endl;
 	return 0;
 }
