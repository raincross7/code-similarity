#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main()
{
	char c;
	cin >> c;
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') cout << "vowel" << endl;
	else cout << "consonant" << endl;
	return 0;
}