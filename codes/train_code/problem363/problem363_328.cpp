#include <bits/stdc++.h>
using namespace std;

int main() {
  int n=0;
  int sum=0;
  cin >> n;
  
  for(int i=0; i<n; i++)
  {
    sum = sum+i+1;
  }
  cout << sum;
}