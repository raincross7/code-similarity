#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int N, K; cin >> N >> K;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + sizeof(arr) / sizeof(arr[0]));
    int ans = 0;
    for (int i = 0; i < K; i++) {
        ans += arr[i];
    }
    cout << ans << endl;
}
