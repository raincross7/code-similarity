#include <iostream>
using namespace std;

int main(void)
{
    int A, B;
    cin >> A >> B;

    if (A % 2 == 0 || B % 2 == 0)
        cout << "Even\n";
    else
        cout << "Odd\n";
}