#include <bits/stdc++.h>
using namespace std;

typedef long lint;
typedef long long llint;
typedef pair<int, int> pint;
typedef pair<long long, long long> pllint;

// static const int MAX = 1e6;
// static const int NIL = -1;
// static const llint INF = 1<<21;
// static const llint MOD = 1e9 + 7;

bool compPair(const pint& arg1, const pint& arg2) { return arg1.first > arg2.first; }
template<class T> void chmax(T& a, T b) { if (a < b) { a = b; } }
template<class T> void chmin(T& a, T b) { if (a > b) { a = b; } }

int main(void) {
    string a, b;
    cin >> a >> b;

    if(a.size()>b.size()) { 
        cout << "GREATER" << endl;
        return 0;
    }
    else if(a.size()<b.size()) { 
        cout << "LESS" << endl;
        return 0;
    }
    else {
        for(int in=0;in<a.size();in++) {
            if(a.at(in)-b.at(in)>0) {
                cout << "GREATER" << endl;
                return 0;
            }
            else if (a.at(in)-b.at(in)<0) {
                cout << "LESS" << endl;
                return 0;
            }
            else ;
        }
    }
    cout << "EQUAL" << endl;
    return 0;
}