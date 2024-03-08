#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<stdio.h>
#include<queue>
#include<map>
#include<stack>
using namespace std;
int dx[] = { -1,0,0,1,-1,-1,1,1,0 };
int dy[] = { 0,1,-1,0,1,-1,1,-1,0 };
/*
int main()
{
int r, c;
cin >> r >> c;
int sy, sx, gy, gx;
vector<vector<char>>field(r,vector<char>(c));
sy--, sx--, gy--, gx--;
for (int i = 0; i < r; i++)
{
for (int j = 0; j < c; j++)
{
cin >> field[i][j];
}
}
queue<pair<int,int>>q;
q.push({ sx,sy });
vector<vector<int>>d(c, vector<int> (r, -1));
d[sx][sy] = 0;

while (!q.empty())
{
pair<int, int>p = q.front;
q.pop();
for (int i = 0; i < 4; i++)
{
int nx = p.first + dx[i], ny = p.second + dy[i];
if (nx < 0 || ny < 0 || nx >= c || ny >= r || d[nx][ny] != -1 || field[nx][ny] == '#')continue;
q.push({ nx,ny });
d[nx][ny] = d[p.first][p.second] + 1;
}
}

cout << d[gx][gy] << endl;
}*/


int main()
{
	int n;
	cin >> n;
	vector<int>d(n);
	for (int i = 0; i < n; i++)
	{
		cin >> d[i];
	}

	int ans = 0;

	sort(d.begin(), d.end());

	
	for (int i = 0; i <= d[n-1]; i++)
	{
		int r = 0, b = 0;

		for (int j = 0; j < n; j++)
		{
			if (d[j] >= i)
			{
				r += 1;
			}
			else if (d[j] < i)
			{
				b += 1;
			}

			
		}

		if (r == b)
		{
			ans += 1;
		}

	}

	cout << ans << endl;

}

