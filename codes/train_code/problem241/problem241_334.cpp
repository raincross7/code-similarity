#include <cassert>
//PXjUXeZStdX
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>

// C++
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
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
// #include <boost/foreach.hpp>
// #include <boost/range/algorithm.hpp>
#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define ll long long
#define Sort(v) sort(all(v))
//#define INF 1e9
#define LINF (1LL<<40)
#define END return 0
#define pb push_back
#define se second
#define fi first
#define pb push_back
#define all(v) (v).begin() , (v).end()
#define MP make_pair
#define int long long
using namespace std;
int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
// int dx[]={0,1,0,-1};
// int dy[]={1,0,-1,0};
typedef pair<int,int> P;

const long long MOD=1000000007LL;
bool isupper(char c){if('A'<=c&&c<='Z')return 1;return 0;}
bool islower(char c){if('a'<=c&&c<='z')return 1;return 0;}
bool iskaibun(string s){for(int i=0;i<s.size()/2;i++)if(s[i]!=s[s.size()-i-1])return 0;return 1;}
bool isnumber(char c){return ('0'<=c&&c<='9');}
bool isalpha(char c){return (isupper(c)||islower(c));}

template<typename T> 
void print(vector<T> v){
    for(int i=0;i<v.size();i++){
        if(i)cout<<" ";
        cout<<v[i];
    }
    cout<<endl;
}
int INF=1e18;

template<typename T>
void printendl(vector<T> v){
    for(auto date:v)cout<<date<<endl;
}

template<typename T>
void printvv(vector<vector<T>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(j)cout<<" ";
            cout<<v[i][j];
        }
        cout<<endl;
    }
}

int ans=0;
int gcd(int a,int b){
    ans++;
    if(a<b)swap(a,b);
    if(b==0)return a;
    else return gcd(b,a%b);
}

int powl(int n,int p){
    int ret=1;
    for(int i=0;i<p;i++)ret*=n;
    return ret;
}

struct Edge{
    int to,cost;
};

struct S{
    int score;
    int x;
};
signed main (){
    int n;
    cin>>n;
    vector<int> v[2];
    rep(i,0,2)v[i].resize(n);
    rep(i,0,n)cin>>v[0][i];
    rep(i,0,n)cin>>v[1][i];

    if(v[0][n-1]!=v[1][0]){
        cout<<0<<endl;
        return 0;
    }
    int limit=v[1][0];

    int ans=1;
    rep(i,1,n-1){
        if(v[0][i-1]!=v[0][i]){
            if(v[0][i]>v[1][i])ans*=0;
            else ans*=1;
        }else if(v[1][i+1]!=v[1][i]){
            if(v[0][i]<v[1][i])ans*=0;
            else ans*=1;
        }else ans*=min(v[0][i],v[1][i]);
        
        ans%=MOD;
    }
    cout<<ans<<endl;


    

    


}

/*

*/