#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <set>

using namespace std;
#define vsort(v) sort(v.begin(), v.end());
#define vunique(v) unique(v.begin(), v.end());

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;
	if(a * b % 2 == 0) cout << "Even" << endl;
	else cout << "Odd" << endl;
}
