#include <bits/stdc++.h>

#define PI 3.14159265359
#define rep(i,a,n) for(int i=a;i<(int)n;++i)
#define SZ(x) ((int)(x).size())	//size() unsigned -> int
#define descSort(a) sort(a.begin(),a.end(),std::greater<int>())
using namespace std;
typedef long long ll;
const ll INF = 1e9 + 7;

int main() {
    string s;
    cin>>s;
    int cnt=count(s.begin(),s.end(),'o');
    if(cnt>=8 || (15-s.size()+cnt >=8))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}