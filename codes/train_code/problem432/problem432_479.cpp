#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
#define vsort(vec) sort(vec.begin(), vec.end())
#define vreverse(vec) reverse(vec.begin(), vec.end())
using ll =long long;
const ll INF =1001001001;

//最大公約数
ll gcd(ll a, ll b){
   if (a%b==0){
       return(b);
   }else{
       return(gcd(b,a%b));
   }
}
//最小公倍数
ll lcm(ll a, ll b){
   return a*b/gcd(a,b);
}

//素数判定
ll isprime(ll n){
  bool prime=true;
  for(int i=2;i<n;i++){
    if(n%i==0){
      prime=false; break;
    }
  }
if(prime){cout<<n<<" is prime"<<endl;
         }else{cout<<n<<" is not prime"<<endl;}

}
//階乗　20くらいが限界
ll factorial(ll n){
  ll a=1;ll b=n;
  for(int i=0;i<n;i++){
    a*=b;
    b--;
  }
  return a;
}

//組み合わせ　nCr
ll comb(ll a,ll b){
  ll c;
  c=factorial(a)/(factorial(a-b)*factorial(b));
  return c; 
}




/*10億7。　　　100000007
2*2行列 H*W
vector<vector<int>> vec(H,vector<int>(W));
for(int i=0;i<H;i++){
for(int j=0;j<W;j++){
cin>>vec[i][j];
  }
}

文字列→数列
string S;int A=atoi(S.c_str());
数列→文字列
int A;string S=to_string(A);
数字判定　isdigit(a)
pair宣言　pair<int,int> p(5,7);
ソート　sort(vec.begin(),vec.end());
*/

int main(){
cout<<fixed<<setprecision(10);
//cin.tie(0); ios::sync_with_stdio(false);

ll x,t;
  cin>>x>>t;
  if(x>t){
    cout<<x-t<<endl;
  }else{
    cout<<0<<endl;
    
  }
  
        
  
  
  
  
  
}


