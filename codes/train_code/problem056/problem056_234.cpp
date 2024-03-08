#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<vector>
#include<utility>
#include<queue>
#include<deque>
#include<stack>
#include<set>
#include<map>
#include<bitset>
#include<string>
#define MOD 1000000007
#define enld endl
typedef long long ll;
using namespace std;

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}

int main(){
    cin.tie(0);ios::sync_with_stdio(false);
    int N,K; cin >> N >> K;
    int p[1005];
    for(int i=0;i<N;i++) cin >> p[i];
    sort(p,p+N);
    int ans  = 0;
    for(int i=0;i<K;i++) ans += p[i];
    cout << ans << enld;
    return 0;
}