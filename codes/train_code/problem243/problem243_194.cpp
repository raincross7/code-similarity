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
	int A = 0;
	
	if (S.at(0) == T.at(0)) {
		A++;
	}
	if (S.at(1) == T.at(1)) {
		A++;
	}
	if (S.at(2) == T.at(2)) {
		A++;
	}
	cout << A << endl;


	
}
