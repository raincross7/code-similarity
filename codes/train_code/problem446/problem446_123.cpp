/*
?????????: Graph I - Breadth First Search
URL: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_C
?????°
19:08 ??°?????????????????????????????£??¨??????????????????????????§???????????????????????£?????????
19:08 ???????????\????????\????????°??????????????????????¢????
19:09 ????????°???????????????????§£
19:13 ??¨???????????????????????£???
19:19 BFS????¨???¶???????¶??????????????????§??¨?????????????????????????????????
19:28 ???????????????????§?????????????????????£????????§????????????????????????????????????????????§????????????????????£????????????
19:29 ?????????????????????????????????????????? 1 ????????????????????????????????????????????????????????¢??¨??????-1 ?????????????????????????????????
*/
#include <iostream>
#include <vector>
#include <set>
#include <queue>
#define INF 114514
using namespace std;

int main()
{
	int n; cin>>n;
	vector< set<int> > graphdat(n+1);  
	for(int i=0;i<n;i++){
		int u; int k; cin >> u >> k;
		set<int> v;
		for(int j=0;j<k;j++){
			int tmp;
			cin >> tmp;
			v.insert(tmp);
		}
		graphdat[u] = v;
	}

	vector<int> distance(n+1);
	distance[1] = 0;
	for(int i=2;i<=n;i++){
		distance[i] = INF;
	}

	queue<int> Q;
	Q.push(1);

	while(!Q.empty()) {
		int cur = Q.front();
		Q.pop(); // pop?????????????????????????????¨?¬???\??§??????
		for(int dest=1; dest<=n; dest++) {
			if(graphdat[cur].find(dest) != graphdat[cur].end()) { // ??????????????????
				if(distance[dest] > distance[cur] + 1) { // ??´??°??§????????????
					distance[dest] = distance[cur] + 1;
					Q.push(dest);
				}
			}
		}
	}

	for(int i=1;i<=n;i++){
		cout << i << " " << (distance[i] == INF ? -1 : distance[i])<< endl;
	}

}