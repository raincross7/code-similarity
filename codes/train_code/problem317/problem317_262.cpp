#include <bits/stdc++.h>

#define pout(n)  printf ("%d\n", n)

#define rep(i,a,n) for (int i = a;i < n;i++)
#define per(i,n,a) for (int i = n-1;i >= a;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());

const int d4x[4] = {1, 0, -1, 0};
const int d4y[4] = {0, 1, 0, -1};
const int d8x[8] = { 1,1,0,-1,-1,-1,0,1 };
const int d8y[8] = { 0,1,1,1,0,-1,-1,-1 };

#define MAX_N (int)2e5+20
#define INF 1e12+20

typedef long long ll;
using namespace std;

int h,w;
int main() {
	cin >> h >> w;
	string s = "snuke";

	int count = 0;
	char a1;
	int a2;
	rep(i,1,h+1){
		rep(j,1,w+1){
			string n;
			cin >> n;
			if(n == s){
				a1 = j-1+'A';
				a2 = i;
			}
		}
	}
	printf("%c%d\n",a1,a2);
	return 0;
}