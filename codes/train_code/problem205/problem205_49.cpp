#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define RFOR(i,b,a) for(int i = (b) - 1; i >= (a); i--)
#define ITER(it, a) for(typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a, value) memset(a, value, sizeof(a))

#define SZ(a) (int) a.size()
#define ALL(a) a.begin(),a.end()
#define PB push_back
#define MP make_pair

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PII;

const double PI = acos(-1.0);
const LL INF = 1000 * 1000 * 1000 + 7;
const LL LINF = INF * (LL)INF;

bool check(vector<VI>& a, int d)
{
	FOR (i, 0, SZ(a))
	{
		FOR (j, 0, SZ(a[i]))
		{
			FOR (k, 0, SZ(a))
			{
				FOR (s, 0, SZ(a[k]))
				{
					if (abs(i - k) + abs(j-s) != d) continue;
					if (a[i][j] == a[k][s]) return false;
				}
			}
		}
	}

	return true;

}

int main()
{
	//freopen("in.txt", "r", stdin);
	//ios::sync_with_stdio(false); cin.tie(0);

	/*vector<VI> a = brute(5, 5, 4);

	cout<<"Done"<<endl;*/

	int n, m;
	cin>>n>>m;
	int d;
	cin>>d;
	if (d % 2 == 1)
	{
		FOR (i, 0, n)
		{
			FOR (j, 0, m)
			{
				cout<<"GB"[(i + j) % 2];
			}
			cout<<endl;
		}
		return 0;
	}

	vector<VI> a(n, VI(m, 0));;

	FOR (i, 0, n)
	{
		FOR (j, 0, m)
		{
			/*if (((i + j) & 1))
			{
				cout<<' ';
				continue;
			}*/
			int x = i + j;
			int y = i - j;

			x += 1000;
			y += 1000;

			x /= 2;
			y /= 2;

			x /= (d / 2);
			y /= (d / 2);
			x %= 2;
			y %= 2;
			if (x < 0) x += 2;
			if (y < 0) y += 2;

			int ind = x * 2 + y;
			cout<<"RGBY"[ind];
			//cout<<ind;
			a[i][j] = ind;
		}
		cout<<endl;
	}

	//cout<<check(a, d)<<endl;

}
