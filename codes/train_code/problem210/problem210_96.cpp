#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cctype>
#include <climits>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include <utility>
#include <complex>
#include <memory>
#include <functional>
 
using namespace std;
 
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i <= n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define pb push_back
 
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long LL;
typedef long long int LLI;

int solve(int cnt ,int sum,int now);
 int n=0,s=0;
int main(void)
{
     for(;;){
         cin >> n >> s;
        
        int ans = solve(0, 0, 0);  
         if(n == 0 && s == 0)break;
        cout << ans << endl;
        }
    return 0;  
}
int solve(int cnt ,int sum,int now)
{
    if(cnt == 10){
        return sum == s && now == n;
    }
    int res1 = solve(cnt+1,sum+cnt,now+1) ;
    int res2 = solve(cnt+1,sum,now);
    return res1+res2;
}