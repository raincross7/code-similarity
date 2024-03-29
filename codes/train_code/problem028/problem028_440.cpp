#define DEBUG 0

#include <bits/stdc++.h>
using namespace std;

#if DEBUG
// basic debugging macros
int __i__,__j__;
#define printLine(l) for(__i__=0;__i__<l;__i__++){cout<<"-";}cout<<endl
#define printLine2(l,c) for(__i__=0;__i__<l;__i__++){cout<<c;}cout<<endl
#define printVar(n) cout<<#n<<": "<<n<<endl
#define printArr(a,l) cout<<#a<<": ";for(__i__=0;__i__<l;__i__++){cout<<a[__i__]<<" ";}cout<<endl
#define print2dArr(a,r,c) cout<<#a<<":\n";for(__i__=0;__i__<r;__i__++){for(__j__=0;__j__<c;__j__++){cout<<a[__i__][__j__]<<" ";}cout<<endl;}
#define print2dArr2(a,r,c,l) cout<<#a<<":\n";for(__i__=0;__i__<r;__i__++){for(__j__=0;__j__<c;__j__++){cout<<setw(l)<<setfill(' ')<<a[__i__][__j__]<<" ";}cout<<endl;}

// advanced debugging class
// debug 1,2,'A',"test";
class _Debug {
    public:
        template<typename T>
        _Debug& operator,(T val) {
            cout << val << endl;
            return *this;
        }
};
#define debug _Debug(),
#else
#define printLine(l)
#define printLine2(l,c)
#define printVar(n)
#define printArr(a,l)
#define print2dArr(a,r,c)
#define print2dArr2(a,r,c,l)
#define debug
#endif

// define
#define MAX_VAL 999999999
#define MAX_VAL_2 999999999999999999LL
#define EPS 1e-6
#define mp make_pair
#define pb push_back

// typedef
typedef unsigned int UI;
typedef long long int LLI;
typedef unsigned long long int ULLI;
typedef unsigned short int US;
typedef pair<int,int> pii;
typedef pair<LLI,LLI> plli;
typedef vector<int> vi;
typedef vector<LLI> vlli;
typedef vector<pii> vpii;
typedef vector<plli> vplli;

// ---------- END OF TEMPLATE ----------

int A[200000];
vpii v;
int main() {
    int i;
    int N;
    scanf("%d",&N);
    for (i = 0; i < N; i++) scanf("%d",&A[i]);

    int l = 1,r = N;
    while (l < r) {
        int m = (l+r) / 2;

        int f = 0;
        v.pb(mp(0,A[0]));
        for (i = 1; i < N; i++) {
            if (A[i] > A[i-1]) v.pb(mp(0,A[i]-A[i-1]));
            else {
                int l = A[i-1];
                while (l > A[i]) {
                    int z = min(l-A[i],v.back().second);
                    v.back().second -= z,l -= z;
                    if (v.back().second == 0) v.pop_back();
                }
                int z = 0;
                while (!v.empty() && (v.back().first >= m-1)) z += v.back().second,v.pop_back();
                if (v.empty()) {
                    f = 1;
                    break;
                }
                else {
                    int t = v.back().first;
                    v.back().second--;
                    if (v.back().second == 0) v.pop_back();
                    v.pb(mp(t+1,1));
                    if (z > 0) v.pb(mp(0,z));
                }
            }
        }
        if (f) l = m+1;
        else r = m;
        v.clear();
    }
    printf("%d\n",l);

    return 0;
}

