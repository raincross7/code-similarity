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
  string s;
  cin >> s;
  ll number=s.size();

char borw='A',color;
ll count=-1;
for(ll i=0;i<number;i++){
  color=s.at(i);
  if(color!=borw){
    borw=s.at(i);
    count++;
  }
}

cout << count << endl;

}
