#include<iostream>
#include<algorithm>
#include<functional>
#include<cmath>
#include<numeric>
#include<queue>
#include<string>
#include<vector>
#include <stdio.h>
#define ll long long
#include<cstring>
#define rep(i,n) for(int i=0;i<n;i++)
ll mod = 1000000007;
using namespace std;
priority_queue<ll int>QUE;//きゅー

int length(char* str) {
	int len = strlen(str);
	return len;
}

int main(void)
{
	int A, B;
	cin >> A >> B;
	int ans = (A - 1) * (B - 1);
	cout << ans;
}
