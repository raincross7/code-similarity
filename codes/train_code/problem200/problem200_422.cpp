#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    std::cin >> a >> b;
    if (a * b % 2 == 0){
        std::cout << "Even" << std::endl;
    }
    else{
        std::cout << "Odd" << std::endl;
    }
}