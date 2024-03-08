#include<iostream>
#include<vector>

using namespace std;

int nowS = 0;//??????-1
int x, y, n;
int mp[1000][1000] = {};//????????¨??????
int k[4] = {1, -1, 0, 0};
int h[4] = {0, 0, 1, -1};
int cx[9] = {};
int cy[9] = {};
vector<int> bufX, bufY, bufD;

bool search(int xx, int yy, int dd) {//???????????????????????\????????????

	bufX.erase(bufX.begin());//??????????¶????
	bufY.erase(bufY.begin());
	bufD.erase(bufD.begin());
	
	if (mp[yy][xx] == nowS + 1)
		return false;

	mp[yy][xx] = nowS + 1;//?????£??????????????????????????°
	for (int i = 0; i < 4; i++) {
		if (xx + k[i] < 0 || xx + k[i] >= x || yy + h[i] < 0 || yy + h[i] >= y)//?????????
			continue;
		if (mp[yy + h[i]][xx + k[i]] == -1) {//?£?
			continue;
		}
		if (cx[nowS] == xx + k[i] && cy[nowS] == yy + h[i]) {//??????
			nowS++;
			bufX.clear();//????????????
			bufY.clear();
			bufD.clear();
			if (nowS == n) {//?????????????????????
				cout << dd + 1 << endl;
				return true;
			}
			else {//??????
				bufX.push_back(xx + k[i]);
				bufY.push_back(yy + h[i]);
				bufD.push_back(dd + 1);
			}
			return false;
		}
		if(mp[yy + h[i]][xx + k[i]] >= 0 && mp[yy + h[i]][xx + k[i]] < nowS + 1){//??????
			bufX.push_back(xx + k[i]);
			bufY.push_back(yy + h[i]);
			bufD.push_back(dd + 1);
		}
	}
	return false;
}

int main() {
	int ch = 0;
	cin >> y >> x >> n;
	for (int i = 0; i < y; i++) {//??\???
		char c[1001];
		cin >> c;
		for (int j = 0; j < x; j++) {
			if(c[j] == 'X')
				mp[i][j] = -1;
			else if(c[j] == 'S'){
				bufX.push_back(j);
				bufY.push_back(i);
				bufD.push_back(0);
				mp[i][j] = 0;
			}	
			else {
				mp[i][j] = 0;
			}
			if (c[j] >= 48 && c[j] <= 57) {
				int m;
				m = c[j] - 49;
				cx[m] = j;
				cy[m] = i;		
				ch++;
			}
		}
	}
	

	while(!search(bufX[0], bufY[0], bufD[0])){}//??????????????§?????????

	return 0;
}