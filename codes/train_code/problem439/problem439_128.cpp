#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i,N){
        cin >> A.at(i);
    }
    sort(A.begin(),A.end());
    cout << abs(A.at(0)-A.at(N-1));
}