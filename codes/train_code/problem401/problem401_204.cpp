#include <iostream>
#include <algorithm>
using namespace std;

string a[105];
int n, l;

int main() {
  cin>>n>>l;
  for (int i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);
  for (int i=0;i<n;i++) cout<<a[i];
}