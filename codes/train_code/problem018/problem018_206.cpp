// Author : Mohamed Sameh
#include <bits/stdc++.h>
#define pb push_back
#define f first
#define s second
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define SZ(a) (int)a.size()
#define Flush fflush(stdout);
typedef long long ll ;
using namespace std ;
int main()
{
  string x;
  cin >> x;
  int ans = 0;
  for (int i = 0; i < 3; i++)
  {
    if (x[i] != 'R')continue;
    int j = i+1;
    while(j < 3 && x[j] == 'R')j++;
    ans = max(ans, j - i);
    i = j-1;
  }
  cout << ans <<"\n";
}
