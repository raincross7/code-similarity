#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fi first
#define Se second
#define Pb push_back
#define vi vector<int>
#define vp vector<pair<int,int>>
#define vvi vector<vector<int>>
#define vvp vector<vector<pair<int,int>>>

const int INF = 1e9;
const int MOD = 1e9+7;

#define all(v) v.begin(),v.end()
#define output_s(a) printf("%s\n",(a).c_str())

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define Rep(i,n,m) for(int i=(int)(n);i<(int)(m);i++)
#define RepS(i,n,m) for(int i=(int)(n);i<=(int)(m);i++)
#define RRepS(i,n,m) for(int i=(int)(n);i>=(int)(m);i--)
#define RepA(x) for(auto &item:(x))

void CINT(){}
template <class Head,class... Tail>
void CINT(Head&& head,Tail&&... tail){
    cin>>head;
    CINT(move(tail)...);
}    
#define CIN(...) int __VA_ARGS__;CINT(__VA_ARGS__)
#define LCIN(...) ll __VA_ARGS__;CINT(__VA_ARGS__)
#define SCIN(...) string __VA_ARGS__;CINT(__VA_ARGS__)

template<typename TypeInt> //最大公約数
TypeInt GCD(TypeInt a,TypeInt b){
    if(a%b==0) return b;
    else return GCD(b,a%b);
}
template<typename TypeInt> //最小公倍数
TypeInt LCM(TypeInt a,TypeInt b){
    return a*b/GCD(a,b);
}

int IN_int(){
    int x;
    scanf("%d",&x);
    return x;
}

//library----------------------------------------------


int main(){
    CIN(A,B,C);
    LCIN(K);
    if(K%2==0) printf("%d\n",A-B);
    else printf("%d\n",B-A);    
    
    return 0;
}