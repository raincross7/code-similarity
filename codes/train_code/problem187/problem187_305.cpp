#include <bits/stdc++.h>
using namespace std::literals::string_literals;
using i64 = std::int_fast64_t;
using std::cout;
using std::cerr;
using std::endl;
using std::cin;

template<typename T>
std::vector<T> make_v(size_t a){return std::vector<T>(a);}

template<typename T,typename... Ts>
auto make_v(size_t a,Ts... ts){
  return std::vector<decltype(make_v<T>(ts...))>(a,make_v<T>(ts...));
}

int main() {
	int n, m; scanf("%d%d", &n, &m);

	if(n & 1) {
		for(int i = 0; i < m; i++) printf("%d %d\n", 1 + i, n - i);
	} else {
		for(int i = 0; i < (m + 1) / 2; i++) printf("%d %d\n", 1 + i, n - i);
		for(int i = (m + 1) / 2; i < m; i++) printf("%d %d\n", 2 + i, n - i);
	}
	return 0;
}
