#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <numeric>
using namespace std;

int abs(int num){
   if (num > 0)
      return num;
   else
      return -num;
}

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  cout << min(a,b) + min(c,d) << endl;
}