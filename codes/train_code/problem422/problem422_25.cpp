#include <iostream>

int main() {

	int N, A;

	std::cin >> N >> A;

	if (N % 500 > A) {
		std::cout << "No" << std::endl;
	}
	else if (N % 500 <= A) {
		std::cout << "Yes" << std::endl;
	}
}