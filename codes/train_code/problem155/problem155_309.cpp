#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#include <map>
#include <set>
#include <math.h>
#include <cmath>
#define ll long long

using namespace std;
using P = pair<int,int>;

int main(){

  string A, B;
  cin >> A >> B;

  if(A.size() > B.size()){
    cout << "GREATER" << endl;
    return 0;
  } else if (A.size() < B.size()){
    cout << "LESS" << endl;
    return 0;
  }

  for (int i = 0; i < A.size(); i++) {
    if(A[i] > B[i]){
      cout << "GREATER" << endl;
      return 0;
    } else if (A[i] < B[i]){
      cout << "LESS" << endl;
      return 0;
    }
  }

  cout << "EQUAL" << endl;
  return 0;

}