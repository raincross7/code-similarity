#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define modulo ll (1e9 + 7)

typedef long long ll;
typedef pair<int,int> pii;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

const int N = 55, M = 3e3, OO = 0x3f3f3f3f;
const ll llOO = 0x3f3f3f3f3f3f3f3f;

int main(){
    init();

    char v[] = {'a', 'e', 'i', 'o', 'u'};
    char c; cin >> c;
    for(int i = 0;i < 5;i++)    if(v[i] == c)   return cout << "vowel", 0;
    cout << "consonant";
}
