#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string S;cin>>S;
    int year = stoi(S.substr(0, 4));
    int month = stoi(S.substr(5, 2));
    if (year >= 2020 || (year == 2019 && month >= 5)) cout << "TBD" << endl;
    else cout << "Heisei" << endl;
    return 0;
}