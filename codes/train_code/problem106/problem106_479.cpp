#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int a[n];
	long long ans = 0;
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			ans += a[i]*a[j];
		}
	}
	cout << ans;
	return 0;
}