#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s,t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.rbegin(), t.rend());
    if(s < t) puts("Yes");
    else puts("No");
    return 0;
}