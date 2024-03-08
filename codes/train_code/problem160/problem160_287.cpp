#include "bits/stdc++.h"

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

long long gcd(long long a, long long b){
    if (a % b == 0)return(b);
    else return(gcd(b, a % b));
}

long long lcm(long long a, long long b) {
	return a * b / gcd(a, b);
}


int main() {
	string S, T;
	cin >> S >> T;
	cout << T + S;
}