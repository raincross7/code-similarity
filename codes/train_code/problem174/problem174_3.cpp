#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <cmath>
#include <limits>
#include <list>
#define ALL(x) (x).begin(),(x).end()
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define int_INF 2147483647
#define pint_INF 2000000000
#define ll_INF 	9223372036854775807
#define MOD 1000000007
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvc vector<vector<char>>
#define vll vector<long long>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define sysp system("PAUSE")
#define pno cout << "no" << endl
#define pyes cout << "yes" << endl
#define pYes cout << "Yes" << endl
#define pNo cout << "No" << endl
#define pNO cout << "NO" << endl
#define pYES cout << "YES" << endl
#define endl "\n"
#define pi 3.14159265358979
using namespace std;
using ll = long long;
#define int ll
int gcd(int a, int b) {
	if (a > b) {
		int c = a;
		a = b;
		b = c;
	}
	if (a == 0) {
		return b;
	}

	return gcd(b % a, a);
}

int gcd_of_all(vi v){
  int l = v.size();

  int temp = v[0];
  for(int i = 0; i < l ; i++){
    temp = gcd(temp,v[i]);
  }

  return temp;
}

signed main(){
    int N,K; cin >> N >> K;
    vi A(N); rep(i,N) cin >> A[i];
    int g = gcd_of_all(A);
    bool flag = false;
    for(int i = 0; i < N; i++){
        if(A[i] - K >= 0){
            if((A[i] - K)%g == 0){
                flag = true;
                break;
            }
        }
    }
    if(flag){
        cout << "POSSIBLE" << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }
    sysp;
}