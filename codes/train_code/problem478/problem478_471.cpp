#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i = 0; i < (N); i++)
#define repo(i,N) for(int i = 1; i < (N); i++)
#define pb push_back
#define mp make_pair
#define np next_permutation
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
//#define num 1000000007
#define pi acos(-1.0)
//cout << fixed << setprecision (20);   小数点以下2０桁まで
//intの最大値2147483647 ≒ 2×10^9
//long longの最大値9223372036854775807 ≒ 9×10^18
//'0'+=16;        で大文字に
//'大文字'+=32;    で小文字に
//s[i]-'0'でchar文字→int数に;
//string s = to_string(int数);
//int n = stoi(string文字列)


int main() {
  int n;
  cin >> n;

  
  cout << (n==1||n==2||n==3||n==5||n==6||n==9||n==10||n==13||n==17?"No":"Yes") << endl;

}