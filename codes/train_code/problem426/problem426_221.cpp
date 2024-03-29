#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int h, w, n;
int gy[10], gx[10];
char field[1000][1001];

//????????????
const int dy[4] = {-1, 0, 1, 0};	//?????°
const int dx[4] = {0, 1, 0, -1};	//?????°

//???????????°????±???????
int bfs( int starty, int startx, int goaly, int goalx ){
	//static(??????)???????????¨????¨???¶??????????¨???¶????????¶????????°?????????????????°??¨?????????????????§
	//????????????????????°????????????????????????bfs??¢??°?????§??????????????????????????°???????????\???
	static int minDist[1000][1000];		//minDist[y][x] = y(>=0)???x(>=0)???????????§??????????????°
	static queue<pair<int, int> > que;	//?????°, ??´???
	int i, j;
	
	for( i = 0; i < h; i++ )
		for( j = 0; j < w; j++ )
			minDist[i][j] = 100000000;	//???????????§??????????????\????????????
			
	que.push(pair<int, int>(0, starty * w + startx) );
	while( !que.empty() ){
		int cost = que.front().first;
		int nowy = que.front().second / w;
		int nowx = que.front().second % w;
		que.pop();
		
		if( minDist[nowy][nowx] <= cost )	//??´???????????????????????°????°???????????????????
			continue;
		minDist[nowy][nowx] = cost;			//???????????°?????´??°
		
		for( i = 0; i < 4; i++ ){
			int nexty = nowy + dy[i];
			int nextx = nowx + dx[i];
			if( 0 <= nexty && nexty < h && 0 <= nextx && nextx < w ){	//?????????????£?????????????
				if( field[nexty][nextx] != 'X' ){						//???????£???§???????????°
					que.push( pair<int, int>(cost + 1, nexty * w + nextx) );	//?§??????????
				}
			}
		}
	}
	
	return minDist[goaly][goalx];
}

int main()
{
	int i, j;
	cin >> h >> w >> n;
	for( i = 0; i < h; i++ ){
		cin >> field[i];
		for( j = 0; j < w; j++ ){
			if( field[i][j] == 'S' ){
				gy[0] = i;
				gx[0] = j;
			}
			else if( '1' <= field[i][j] && field[i][j] <= '9' ){
				gy[field[i][j] - '0'] = i;
				gx[field[i][j] - '0'] = j;
			}
		}
	}
	
	int ans = 0;
	for( i = 0; i < n; i++ ){
		//???????????\??´i(i = 0?????????S)?????????????????\??´i + 1?????????????????°????¶????
		ans += bfs(gy[i], gx[i], gy[i+1], gx[i+1]);
	}
	cout << ans << endl;
	return 0;
}