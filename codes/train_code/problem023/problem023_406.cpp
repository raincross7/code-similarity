#include<iostream>
using namespace std;

int main () {
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b && a == c && b == c){
    cout << 1 << '\n';
  } else if (a == b  && b != c || a == c && c != b || b == c && c != a){
    cout << 2 << '\n';
  } else if (a != b && b != c && a != c){
    cout << 3 << '\n';
  }
  
}