#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

int x;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> x;
	cout << 8 - (x - 400) / 200 << '\n';
	return 0;
}