#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
    string T;
    cin >> S >> T;
	sort(S.begin(), S.end());
	sort(T.begin(), T.end());
	reverse(T.begin(), T.end());
	if(S < T) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
