#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<int> VI;
ll mm=1000000000;ll MM=mm+7;
#define rep(i, n) for(int i=0;i<n;i++)
#define PI 3.141592653589793

int main(){
    int n,k,x,y;
    cin >> n >> k >> x >> y;
    int ans=0;
    if(n<=k)ans=n*x;
    else{
        ans=k*x+(n-k)*y;
    }
    cout << ans << endl;
}