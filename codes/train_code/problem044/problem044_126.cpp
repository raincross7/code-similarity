#include <bits/stdc++.h> 
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define size_of_array(array) (sizeof(array)/sizeof(array[0]))
#define MAX 100005
#define NIL -1
using ll =long long;
using namespace std;
using Graph=vector<vector<int>>;
using Field=vector<vector<int>>;

template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}return 0;}

const double PI=(acos(-1));



int main(){
    int n;
    cin>>n;
    vector<int> h(n);
    rep(i,n)cin>>h[i];
    int now=0;  //present height
    int ans=0;  //count of watering
    rep(i,n){
        if(now<h[i])ans+=h[i]-now;
        now=h[i];
    }
    cout<<ans<<endl;
}