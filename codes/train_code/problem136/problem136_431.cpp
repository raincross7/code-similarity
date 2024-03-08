#include <bits/stdc++.h>
using namespace std;

int main() {
  string S,T;
  cin >> S >> T;
  if(S == T){
    cout << "No" << endl;
    return 0;
  }
  int X = S.size(),Y = T.size();
  vector<char>a(X),b(Y);
  for(int i=0; i<X; i++){
    a[i] = S[i];
  }
  for(int i=0; i<Y; i++){
    b[i] = T[i];
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  reverse(b.begin(),b.end());
  int Z = min(X,Y);
  bool ok = true;
  for(int i=0; i<Z; i++){
    if((int)a[i] == (int)b[i]){
      continue;
    }
    else if((int)a[i] < (int)b[i]){
      cout << "Yes" << endl;
      return 0;
    }
    else{
      cout << "No" << endl;
      return 0;
    }
  }
  if(ok && X<Y){
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
}
