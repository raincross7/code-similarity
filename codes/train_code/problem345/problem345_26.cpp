#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs           v.size()
#define sot(v)       sort(v.begin(),v.end())
#define rev(v)       reverse(v.begin(),v.end())
#define yes          cout<<"Yes"<<endl
#define no           cout<<"No"<<endl
#define ii           pair<int, int>
#define int          long long
#define ull          unsigned long long
#define pb           push_back
#define mpp          make_pair
#define Okay         0
#define pi           3.14159

const int inf = 1e6;
const int cont = 1e18;
const int mod = 1e9+7;
using namespace std;

void solve(){
   int n;
   cin>>n;
   int ans = n*800;
   int ans2 = (n/15)*200;
   cout<<ans - ans2<<endl;
}

int32_t main() {
    Fast;
    solve();
    return Okay;
}
