#include <iostream>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;
  if(a==b) cout << "Draw" << "\n";
  else if(a==1) cout << "Alice" << "\n";
  else if(b==1) cout << "Bob" << "\n";
  else if(a>b) cout << "Alice" << "\n";
  else cout << "Bob" << "\n";
  return 0;
}