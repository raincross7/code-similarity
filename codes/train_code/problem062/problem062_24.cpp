#include<bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(),v.end()
#define puts(i) cout << i << endl
#define INF INT_MAX
#define INFL LLONG_MAX
typedef long long ll;
using namespace std;


int main(){
  ll n,k,s;
  cin >> n >> k >> s;

  std::vector<ll> a(n,1000000000);

  if(s==1000000000){
    for(ll i=0;i<n;i++){
      a.at(i)=1;
    }

    for(ll i=0;i<k;i++){
      a.at(i)=s;
    }
    
  }


  else{for(ll i=0;i<k;i++){
    a.at(i)=s;
  }
}

for(ll i:a){
  cout << i << endl;
}
  }