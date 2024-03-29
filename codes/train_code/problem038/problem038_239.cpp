#include <bits/stdc++.h>
using namespace std;

typedef long long ll; // -9,223,372,036,854,775,808 から 9,223,372,036,854,775,807

template <class T> using vec = std::vector<T>;
template <class T> using vec2 = vec<vec<T>>;
template <class T> using vec3 = vec<vec<vec<T>>>;

#define DEBUG

void solve(std::string A){
    vec<ll> counter(256);
    for(auto c: A){
        counter.at(c)++;
    }

    ll res = 0;
    for(char i='a'; i <= 'z'; i++){
        for(char j=i+1; j <= 'z'; j++){
            res += counter.at(i)*counter.at(j);
        }
    }

    res++;

    cout << res << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    std::string A;
    std::cin >> A;
    solve(A);
    return 0;
}
