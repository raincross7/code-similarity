#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,i,count =0;
	cin >> n;
	for(i=1; i< n;i++){
		count += n/i;
		if (n % i == 0) count--;
	}
	cout << count;
	return 0;
}
