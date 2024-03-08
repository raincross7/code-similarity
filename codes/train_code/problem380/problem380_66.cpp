/* include c++ libraries */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <queue>
#include <set>

/* include c-lang libraries */
#include <climits>
#include <cmath>

/* include my libraries */
//#include <show_vec.hh>

using namespace std;

#define LINE DEBUG{ printf("LINE : %d\n", __LINE__); }
#define DEBUG if(false)

using ll = long long;
template<class T> using vec = vector<T>;

const int MOD = 1000000007;

int main(){
  int N, M;
  cin >> N >> M;
  int sum = 0;
  for(int i = 0; i < M; i++){
    int t;
    cin >> t;
    sum += t;
  }
  int Ans = (N<sum)?-1:N-sum;
  cout << Ans << endl;

  return 0;
}
