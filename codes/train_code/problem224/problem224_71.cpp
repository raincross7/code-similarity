#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
const int LIMIT = 1e9 + 7;
#define rep(i, n) for(int i=0; i<(int)n; i++)
#define all(v) (v).begin(), (v).end()

namespace /* debug */{
  #define DEBUG(...) do{cout<<#__VA_ARGS__<<" = ";debug(__VA_ARGS__);}while(0) //変数
  #define ldebug(...) do{cout<<"["<<setw(3)<<__LINE__<<"] ";debug(__VA_ARGS__);}while(0) //行数
  #define lDEBUG(...) do{cout<<"["<<setw(3)<<__LINE__<<"] "<<#__VA_ARGS__<<" = ";debug(__VA_ARGS__);}while(0) //変数, 行数
  template<class T>void show(T&x){cout<<x<<" ";} //出力
  template<class T>void showendl(T&x){cout<<x<<endl;} //出力改行
  template<class P,class Q>void show(pair<P,Q>&x){cout<<"("<<x.first<<", "<<x.second<<") ";} //pair出力
  template<class P,class Q>void showendl(pair<P,Q>&x){cout<<"("<<x.first<<", "<<x.second<<")"<<endl;} //pair出力改行
  template<class H>void debug(H&&h){showendl(h);} //引数1つ
  template<class H,class...Ts>void debug(H&&h,Ts&&...ts){show(h);debug(forward<Ts>(ts)...);} //可変引数
  template<class T>void debug(vector<T>&vt){int i=0;for(auto x:vt)++i!=vt.size()?show(x):showendl(x);} //vector出力
  template<class T>void debug(initializer_list<T>init){int i=0;for(auto x:init)++i!=init.size()?show(x):showendl(x);} //初期化子リスト出力
}

long long divisor(long long n, vector<long long> &d){
  long long cnt = 0;
  for(long long i=1; i*i<=n; i++){
    if(n%i==0){
      d.push_back(i);
      if(i*i!=n){
        d.push_back(n/i);
        cnt++;
      }
      cnt++;
    }
  }
  return cnt;
}

long long divisor_sort(long long n, vector<long long> &d){
  long long cnt = divisor(n, d);
  sort(d.begin(), d.end());
  return cnt;
}

long long gcd(long long a, long long b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}

int main(){
	int a,b,k;cin>>a>>b>>k;

  vector<ll> d;
  ll s = divisor_sort(gcd(a,b), d);
  //debug(d);
  //debug(s);
  cout<<d[s-k]<<endl;
}