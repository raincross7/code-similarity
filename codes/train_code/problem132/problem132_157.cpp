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
#include <cmath> // sqrt
#define _GLIBCXX_DEBUG // check []
#define DIVISOR 1000000007

using namespace std;
typedef pair<int,int> pii;
typedef pair<int64_t, int64_t> pII;

template<typename T>
void cins(vector<T>& arr) { for(T& e: arr) cin >> e; }

#ifdef DEBUG
#define debug(fmt, ...) \
    printf("[debug: %s] " fmt, __func__, __VA_ARGS__)
#define ps(arr) \
    debug("size %ld: ", arr.size()); \
    for(auto e: arr) cout << e << " "; \
    cout << endl;
#else
#define debug(fmt, ...)
#define ps(arr)
#endif


int main(void) {
    int num;
    cin >> num;
    vector<int> arr(num);
    cins(arr);

    stack<int> stack;
    int64_t ans = 0;
    stack.push(arr[0]);
    // make even as many as possible
    for(int i = 1; i < num; i++) {
        int cur = arr[i];
        int prev = stack.top(); stack.pop();
        if(prev%2 && cur != 0) {
            ans++;
            prev--;
            cur--;
        }
        stack.push(prev); stack.push(cur);
    }

    while(!stack.empty()) {
        int val = stack.top(); stack.pop();
        debug("%d\n", val);
        ans += (val/2);
    }

    cout << ans << endl;
    return 0;
}