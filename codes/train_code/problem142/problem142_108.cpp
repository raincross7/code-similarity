#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int count = 0;
    for(int i = 0; i < S.size(); i++) {
        if(S[i] == 'o') {
            count += 1;
        }
    }
    if(((15-S.size()) + count) >= 8) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}