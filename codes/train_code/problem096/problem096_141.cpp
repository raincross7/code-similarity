#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
using namespace std;

int main() {
	string S, T;
	cin >> S >> T;

	int A, B;
	cin >> A >> B;
  
    string U;
  	cin >> U;

	if (U == S) {
		A--;
		cout << A << " " << B << endl;
	}

	if (U == T) {
		B--;
		cout << A << " " << B << endl;
	}



}
