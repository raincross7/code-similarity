#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdio>
#define LL long long
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f3f
#define Inf 1000000000000000000LL
#define F first
#define S second
using namespace std;
typedef pair<int,int>pii;
int main(){
	int x,y;
	cin>>x>>y;
	if(2*x<=y&&y<=4*x&&y%2==0)puts("Yes");
	else puts("No");
	return 0;
}
