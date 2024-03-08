#include <bits/stdc++.h>
using namespace std;

using i64=int64_t;

#define rep(i,x,y) for(i64 i=i64(x),i##_max_for_repmacro=i64(y); i<i##_max_for_repmacro; ++i)
#define debug(x) #x << "=" << (x)
 
#ifdef DEBUG
#define _GLIBCXX_DEBUG
#define print(x) std::cerr << debug(x) << " (L:" << __LINE__ << ")" << std::endl
#else
#define print(x)
#endif
 
const int inf=1.01e9;
const i64 inf64=4.01e18;
const double eps=1e-9;
 
template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec){
    os << "[";
    for (const auto &v : vec) {
        os << v << ",";
    }
    os << "]";
    return os;
}

void solve(){
    i64 K;
    cin >> K;

    const i64 N=50,x=K/N;
    vector<i64> a(N);
    rep(i,0,N) a[i]=i+x;
    rep(i,0,K%N){
        a[i]+=N;
        rep(j,0,N){
            if(i==j) continue;
            --a[j];
        }
    }

    cout << N << endl;
    rep(i,0,N){
        cout << a[i];
        if(i==N-1) cout << endl;
        else cout << " ";
    }
}

int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    cout.setf(ios::fixed);
    cout.precision(16);
    solve();
    return 0;
}
