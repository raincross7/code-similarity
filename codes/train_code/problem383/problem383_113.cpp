#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<utility>
#include<tuple>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define BIL ((ll)1e9)
#define MOD ((ll)1e9+7)
#define INF (1LL<<60)           //1LL<<63でオーバーフロー
#define inf (1<<29)             //1<<29でオーバーフロー

int main(int argc,char* argv[]){
    int n,m;
    cin >> n;
    vector<string> s(n);
    for(auto &x:s)cin >> x;
    cin >> m;
    vector<string> t(m);
    for(auto &x:t)cin >> x;

    map<string, int> list;
    for(int i=0;i<n;i++){
        if(list.count(s[i])){
            list.at(s[i])++;
        }else{
            list.insert(make_pair(s[i],1));
        }
    }

    for(int i=0;i<m;i++){
        if(list.count(t[i])){
            list.at(t[i])--;
        }else{
            list.insert(make_pair(t[i],-1));
        }
    }

    int maxval=-inf;
    for(auto it=list.begin();it!=list.end();it++){
        maxval=max(maxval,it->second);
    }

    if(maxval<0)cout << 0 << endl;
    else cout << maxval << endl;

    return 0;
}
