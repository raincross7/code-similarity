#include <string>
#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

#define CPP_STR(x) CPP_STR_I(x)
#define CPP_CAT(x,y) CPP_CAT_I(x,y)
#define CPP_STR_I(args...) #args
#define CPP_CAT_I(x,y) x ## y

#define FOR(i, start, end) for(ll i = (start), CPP_CAT(i,xxxx_end)=(end); i < CPP_CAT(i,xxxx_end); ++i)
#define REP(i, n) FOR(i, 0, n)

int main(void) {
    int A, B, K;
    cin >> A >> B >> K;
    int count = 0;
    for (int i = min(A, B); i > 0; --i) {
        if ((A % i == 0) && (B % i == 0)) {
            count++;
        }
        if (count == K) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}