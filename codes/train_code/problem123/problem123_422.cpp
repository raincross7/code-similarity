/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author
 */

#include <iostream>
#include <fstream>

#include <iostream>
using namespace std;
class ATrain {
public:
	void solve(std::istream& in, std::ostream& out) {
	    int N, i;
	    cin >> N >> i;
	    cout << N + 1 - i << endl;

	}
};


int main() {
	ATrain solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}