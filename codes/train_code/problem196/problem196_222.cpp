#include <iostream>

int main()
{
  long long N, M;
  std::cin >> N >> M;
  std::cout << N*(N-1)/2 + M*(M-1)/2 << std::endl;
  return 0;
}
  