#include <algorithm>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstring>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define cerr if(false) cerr
#define show(...) cerr << #__VA_ARGS__ << " = ", debug(__VA_ARGS__);
using namespace std;
using ll = long long;
using pii = pair<int,int>;
template<typename T, typename S>
ostream &operator<<(ostream &os, pair<T, S> a){
    os << '(' << a.first << ',' << a.second << ')';
    return os;
}
template<typename T>
ostream &operator<<(ostream &os, vector<T> v){
    for(auto x:v)os << x << ' ';
    return os;
}
void debug(){cerr << '\n';}
template<typename H, typename... T>
void debug(H a, T... b){
    cerr << a;
    if(sizeof...(b))cerr << ", ";
    debug(b...);
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(max({a,b,c}) == min({a,b,c})){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}