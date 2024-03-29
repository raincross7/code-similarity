// include
// ------------------------------------------------
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

// func
// ------------------------------------------------
int CalcSumOfDigit(int n);      // 各桁の和を計算する。

// define
// ------------------------------------------------
#define all(a)        (a).begin(),(a).end()
#define rall(a)       (a).rbegin(),(a).rend()
#define pb            push_back
#define sz(a)         int((a).size())
#define rep(i,n)      for(int(i)=0;(i)<(n);(i)++)
#define repe(i,n)     for(int(i)=0;(i)<=(n);(i)++)
#define vsort(v)      sort((v).begin(),(v).end())
#define rvsort(v)     sort(rall((v)))
#define vi            vector<int>

const int INF = 1e9;

// code
// ------------------------------------------------
int main() {

  int a,b;
  cin >> a >> b;

  if ((2 <= a) && (a <= 13)) 
  {
    a--;
  }
  else
  {
    a = 13;
  }
  
  if ((2 <= b) && (b <= 13)) 
  {
    b--;
  }
  else
  {
    b = 13;
  }

  if(a == b)
  {
    cout << "Draw" << endl;
  }
  else if(a > b)
  {
    cout << "Alice" << endl;
  }
  else if(b > a)
  {
    cout << "Bob" << endl;
  }
  



  return 0;
}

// funcの実体
// ------------------------------------------------
int CalcSumOfDigit(int n)
{
  int s = 0;
  while(n)
  {
    s += n % 10;
    n = n / 10;
  }
  return s;
}