// ref: https://img.atcoder.jp/arc093/editorial.pdf

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
typedef int64_t int64;
typedef uint32_t uint;
typedef uint64_t uint64;
using namespace std;

//---

template <typename T>
inline void print(const T& rhs){ std::cout<<" = "<<rhs<<std::endl; }
template <typename T>
inline void print(const std::vector<T>& rhs){
    std::cout<<" = [ ";
    for(uint i=0; i<rhs.size(); ++i){ std::cout<<rhs[i]<<' '; }
    std::cout<<"]"<<std::endl;
}
template <typename T>
inline void print(const std::vector<std::vector<T>>& rhs){
    std::cout<<" = "<<std::endl;
    std::cout<<"[[ ";
    for(uint p=0; p<rhs.size(); ++p){
        if(p!=0){ std::cout<<" [ "; }
        for(uint q=0; q<rhs[p].size(); ++q){
            std::cout<<rhs[p][q]<<' ';
        }
        if(p!=rhs.size()-1){ std::cout<<"]"<<std::endl; }
    }
    std::cout<<"]]"<<std::endl;
}
template <typename TL, typename TR>
inline void print(const std::vector<std::pair<TR,TL>>& rhs){
    std::cout<<" = [";
    uint i=0;
    for(; i<rhs.size()-1; ++i){ std::cout<<"[f: "<<rhs[i].first<<", s: "<<rhs[i].second<<"], "; }
    std::cout<<"[f: "<<rhs[i].first<<", s: "<<rhs[i].second<<"]]" << endl;
}
#define printn(var) {printf("%s", #var);print(var);}
#define printn_all(var) {printf("%s(%d): ", __func__, __LINE__);printf("%s", #var);print(var);}

//---

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N; cin >> N;
    vector<int> vA(N+2, 0); for(int i=1; i<=N; ++i){ cin >> vA[i]; }
    int sum = 0ll; for(int i=1; i<=N+1; ++i){ sum += abs(vA[i]-vA[i-1]); }
    
    for(int i=1; i<=N; ++i){
        int bypass = abs(vA[i+1] - vA[i-1]); // for bipass
        int r = abs(vA[i+1] - vA[i]); // for rm pass
        int l = abs(vA[i] - vA[i-1]); // for rm pass
        cout << sum + bypass - l - r << endl;
    }
    
    return 0;
}

// 6
// -679 -2409 -3258 3095 -3291 -4462

// -4462 -3291 -3258 -2409 -679 3095
// 0 => -679 => -2409 => -3258 => 3095 => -3291 => -4462 => 0
//                        3258*2 +3095*2          + 4462*2 = 21630

// 0 => -679  =>  -2409   => -3258  =>  3095  => -3291  => -4462 => 0
// | 679 |  2409-679  |3258-2409|3095+3258|3291+3095|4462-3291| 4462|

/*
3
3 5 -1
vA     = [ 0 3 5 -1 0 ]
vA_sum = [ 0 3 5 11 12 ]
*/