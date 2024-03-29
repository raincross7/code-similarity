#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <climits>

#define rep(i, m, n) for(int i=int(m);i<int(n);i++)
#define EACH(i, c) for (auto &(i): c)
#define all(c) begin(c),end(c)
#define EXIST(s, e) ((s).find(e)!=(s).end())
#define SORT(c) sort(begin(c),end(c))
#define pb emplace_back
#define MP make_pair
#define SZ(a) int((a).size())

//#define LOCAL 0
//#ifdef LOCAL
//#define DEBUG(s) cout << (s) << endl
//#define dump(x)  cerr << #x << " = " << (x) << endl
//#define BR cout << endl;
//#else
//#define DEBUG(s) do{}while(0)
//#define dump(x) do{}while(0)
//#define BR
//#endif


//改造
typedef long long int ll;
using namespace std;
#define INF (1 << 20)
#define INFl (ll)5e15
#define DEBUG 0 //デバッグする時1にしてね
#define dump(x)  cerr << #x << " = " << (x) << endl

//ここから編集する


int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N), B(N), bit;
    int biti = 0;
    int lim = 1;
    ll ans = 0;
    int size = 0;

    rep(i, 0, N) {
        cin >> A[i] >> B[i];
    }

    for (int i = 0; 1 << i <= K; i++) {
        if (!(K >> i & 1)) {
//            size++;
//            bit.push_back(i);
            biti |= (1 << i);
        }
    }
    if(biti == 0){
        rep(i,0,N){
            if(A[i] <= K){
                ans += B[i];
            }
        }
        cout << ans << endl;
        return 0;
    }

    for(;biti <= K;){
        ll mans = 0ll;
        rep(i,0,N){
            if((A[i] & biti) == 0 && A[i] <= K){
                mans += B[i];
            }
        }

        ans = max(ans,mans);
        biti += (biti & -biti);

    }




    cout << ans << endl;


    return 0;
}
