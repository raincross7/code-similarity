#include <bits/stdc++.h>
#include <string>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <map>
#include <bitset>
#include <cmath>
#include <set>

#define INF 1000000000000
#define MOD 1000000007 //10^9+7:合同式の法
#define JUUHATI 1000000000000000000 
#define JUUHATIPLUS 1000000000000000001 

using namespace std;
typedef long long ll;

//マクロ
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)

//精度系の問題はprintfを使うべき

int main(){
    double ans;
    int L;
    cin >> L;
    ans = (double)L * L * L / 27;

    printf("%.12f",ans);
    cout << endl;


    

}