#include <bits/stdc++.h>
int main()
  {int K, A, B; std::cin >> K >> A >> B;
  for (int i = A; i <= B; ++i) if (i % K == 0) {puts("OK"); return 0;}
  puts("NG");}