#include <iostream>
#include <vector>
using namespace std;

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0;
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main() {
    long long N;
    cin >> N;
    long long k = 0;
    for(int i = 1;i<=N;i+=2){
      const auto &pf = prime_factorize(i);
      long long res = 1;
      for (auto p : pf) res *= p.second + 1;
      if(res==8) k++;
    }
    cout<<k;
}