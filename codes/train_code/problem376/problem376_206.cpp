#include<bits/stdc++.h>
using namespace std;

int main() {
  	int N;
  	cin >> N;
	cout << N/2 - ((N & 1) == 0) << endl;
}