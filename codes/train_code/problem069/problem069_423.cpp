#include <iostream>

int main() {
    char c; std::cin >> c;
    switch (c)
    {
    case 'A':
        std::cout << 'T' << std::endl;
        break;
    case 'C':
        std::cout << 'G' << std::endl;
        break;
    case 'G':
        std::cout << 'C' << std::endl;
        break;
    case 'T':
        std::cout << 'A' << std::endl;
        break;
    default:
        break;
    }
    return 0;
}