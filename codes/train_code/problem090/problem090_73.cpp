#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <queue>
#include <tuple>
#include <queue>
#include <functional>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <complex>
#include <iterator>
#include <array>
#include <memory>
#include <stack>
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
template<class T, class S> void cmin(T &a, const S &b) { if (a > b)a = b; }
template<class T, class S> void cmax(T &a, const S &b) { if (a < b)a = b; }
#define MAX 9999999
using namespace std;
typedef pair<int, int> pii;
typedef pair<double,double>pdd;
typedef pair<ll,ll>pll;
int main(){
    string gotiusa;
    getline(cin,gotiusa);
    string temp;
    map<string,int>mp;
    string ans1;
    rep(i,gotiusa.size()){
        if(i==gotiusa.size()-1)temp.push_back(gotiusa[i]);
        if(gotiusa[i]==' '||i==gotiusa.size()-1){mp[temp]++;if(ans1.size()<temp.size())ans1=temp;temp.clear();continue;}
        temp.push_back(gotiusa[i]);
    }
    pair<string,int>maxi;
    maxi.second=0;
    for(auto itr=mp.begin();itr!=mp.end();itr++)if(itr->second>maxi.second)maxi=make_pair(itr->first,itr->second);
    cout<<maxi.first<<" "<<ans1<<endl;

}