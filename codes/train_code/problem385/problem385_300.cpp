#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;

int main() {
    int N;cin>>N;
    vi B(N-1);
    for (int i = 0; i < N-1; i++){
        cin>>B[i];
    }
    int ans=B[0];
    for (int i = 1; i < N-1; i++){
        ans+=min(B[i-1],B[i]);
    }
    ans+=B[N-2];
    cout<<ans<<endl;
}