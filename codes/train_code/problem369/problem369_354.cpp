#include <vector>
#include <iostream>

using namespace std;

long long gcd(long long a, long long b){
    if( b > a) swap(a, b);

    if ( b == 0) return a;
    else return gcd(b, a%b);
}

int main(){
    int N;
    long long X;
    cin >> N >> X;

    vector<long long> a(N+1);
    long long tmp_min = 1e19; 

    for(int i=0; i<N; ++i){
        cin >> a[i];
        tmp_min = min(tmp_min, abs(X-a[i]) );
    }

    vector<long long> diff(N);
    for(int i=0; i<N-1; ++i){
        diff[i] = abs(a[i+1] - a[i]);
    }

    long long ans =tmp_min;

    for(int i=0; i<N-1; ++i){
        ans = gcd( ans, diff[i] );
    }

    cout << ans << endl;
}