#include<cstdio>
using namespace std;
int main() {
  int n, m;
  scanf("%d %d",&n,&m);
  printf("%d",n*(n-1)/2+m*(m-1)/2);
}
