#include <bits/stdc++.h> 
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define size_of_array(array) (sizeof(array)/sizeof(array[0]))
#define MAX 100005
#define DEBUG 0 
#define LIMIT (LONG_MAX / 10)
#define POSITIVE_LAST_D (LONG_MAX % 10)
using ll =long long;
using namespace std;
using Graph=vector<vector<int>>;

int main(){
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    string st;
    st=s+t;
    rep(i,n){
        st[i*2]=s[i];
    }
    rep(i,n){
        st[i*2+1]=t[i];
    }
    cout<<st<<endl;
}


        
