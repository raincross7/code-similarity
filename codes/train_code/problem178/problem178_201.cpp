#include <iostream>

int main()
{
    int A, B, C;
    std::cin >> A >> B >> C;
    if (A <= C && C <= B)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
}