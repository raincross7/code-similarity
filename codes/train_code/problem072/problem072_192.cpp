#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#include<complex>
#include<map>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,s,n) for(int i=s;i<n;i++)
#define all(in) in.begin(), in.end()
#define MAX 9999999
using namespace std;
typedef pair<int, int> pii;
typedef pair<double,double>pdd;
typedef pair<ll,ll>pll;
int main(){
    int n; cin>>n;
    vi v;
    int hoge=0;
    for(int i=1; i<=n; i++){
        if(i+hoge>n){break;}
        v.push_back(i);
        hoge+=i;
    }
    int num=n-hoge;
    for(int i =0; i<num;i++){
        v[v.size()-1-i]+=1;
    }
    rep(i,v.size())cout<<v[i]<<endl;
    
}
