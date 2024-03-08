#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>//for queue and priority_queue
#include <fstream>
#include <iomanip>
#include <stack>
#include <algorithm>
#include <set>
#include <map>
#include <list>
#define endl "\n"
typedef long long ll;
using namespace std;
void Lancer() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }
bool isPrime(ll n){
	if (n == 2 || n == 3 || n == 5)
		return true;
	else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n == 1)
		return false;
	else {
		for (int i = 5; i <= sqrt(n); i += 2){
			if (n%i == 0)
				return false;
		}
		return true;
	}
}

//char arr[57][57];
int main(){
	Lancer();
	ll n, a, b, sum ,res=0, dgt;
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++){
		dgt = i; sum = 0;
		while (dgt)
		{
			sum += (dgt % 10);
			dgt /= 10;
		}
		if (sum >= a && sum <= b)
			res += i;
	}
	cout << res;
	cout << endl;
	return 0;
}
