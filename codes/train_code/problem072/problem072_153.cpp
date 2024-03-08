#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<string>
#include<stack>
#include<queue>
#include<vector>
#include<map>
#include<set>
#include<algorithm>

#define FOR1(n) for(int i=0;i<n;i++)
#define FOR2(j, n) for(int j=0;j<n;j++)
#define FOR3(i, m, n) for(int i=m;i<=n;i++)
#define ALL(c) c.begin(), c.end()
#define SCANF(x) scanf("%lld", &x)
#define MOD 1000000007
#define MAX 1000000001
#define INF 1410065408
 
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
struct edge{int from, to; ll cost;};

/*
逆順ソート sort(ALL(vec), greater<ll>());
ペア定義 P pair = make_pair(100, 200);
集合find set.find(item);
小さい順に取り出したい優先度付きキュー
priority_queue<int, vector<int>, greater<int> > que;
配列の最大要素 *std::max_element(ALL(vec))
*/

signed main(){
	int n;
	scanf("%d", &n);
	int m = 1;
	while(m * (m + 1) / 2 <= n) m++;
	
	int v =  m*(m+1)/2 - n;
	FOR1(m){
		if(i + 1 != v) printf("%d\n", i+1);
	}
	
}