#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep2(i, a, b) for(int i = (a); i < (b); i++)
typedef long long ll;

int main() {
   vector<int> a(3);
   rep(i, 3) {
       cin >> a[i];
   }

   sort(a.rbegin(), a.rend());

   cout << a[0] * 10 + a[1] + a[2] << endl;
}