#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector> 
#include<limits>
#include<numeric>
#include<type_traits>
#include<math.h>
#include<fstream>
#include<set>
#include<queue>
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7; 

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = (int)(a); i < (int)(b); i++)
#define out(str) cout << str << endl
#define ALL(a) (a).begin(),(a).end()
#define INF_INT (1<<30)
#define INF_LL (1ll<<62)

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int a,b;

int main(){
    cin>>a>>b;
    if(a==1)a=14;
    if(b==1)b=14;
    if(a>b)out("Alice");
    else if(a<b)out("Bob");
    else out("Draw");
    
    
    
}