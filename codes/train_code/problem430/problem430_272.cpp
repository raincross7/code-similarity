#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    int d = a / b;
    int r = a % b;
    double f = 1.0 * a / b;
    std::cout << d << " " << r << " "
              << std::fixed << f << std::endl;

    return 0;
}