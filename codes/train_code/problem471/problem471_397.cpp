#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; ++i) cin >> v[i];
	int mini = v[0];
	int ans = 0;
	for(int i = 0; i < n; ++i)
	{
		if(v[i] <= mini)
		{
			++ans; 
			mini = v[i];
		}
	}
	cout << ans;
	return 0;
}