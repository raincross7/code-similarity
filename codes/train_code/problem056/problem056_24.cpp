#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin>>v[i];
	sort(v.begin(),v.end());
	int sum = 0;
	for(int i=0; i<k; i++){
		sum = sum + v[i];
	}
	cout<<sum;
}