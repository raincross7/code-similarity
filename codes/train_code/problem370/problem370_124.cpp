#include "bits/stdc++.h"
using namespace std;
#define Rep(i,n) for(int i=0;i<(int)(n);i++)
#define For(i,n1,n2) for(int i=(int)(n1);i<(int)(n2);i++)
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define RREP(i,n) for(ll i=((ll)(n)-1);i>=0;i--)
#define FOR(i,n1,n2) for(ll i=(ll)(n1);i<(ll)(n2);i++)
#define put(a) cout<<a<<"\n"
#define all(a)  (a).begin(),(a).end()
#define SORT(a) sort((a).begin(),(a).end())
#define oorret 0
#define oor(x) [&](){try{x;} catch(const out_of_range& oor){return oorret;} return x;}()
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
template<typename T1,typename T2> inline bool chmin(T1 &a,T2 b){if(a>b){a=b;return 1;}return 0;}
template<typename T1,typename T2> inline bool chmax(T1 &a,T2 b){if(a<b){a=b;return 1;}return 0;}

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> l(m),r(m),d(m);
    REP(i,m){
        cin >> l[i] >> r[i] >> d[i];
        l[i]--;
        r[i]--;
    }
    vector<vector<P>> e(n);
    REP(i,m){
        e[l[i]].push_back(P(r[i],d[i]));
        e[r[i]].push_back(P(l[i],-d[i]));
    }
    queue<int> q;
    vector<int> dd(n,INT_MAX/2);
    vector<int> visited(n,false);
    if(m==0){
        put("Yes");
        return 0;
    }
    REP(i,m){
        if(!visited[l[i]]){
            q.push(l[i]);
            dd[l[i]] = 0;
            while(!q.empty()){
                int p = q.front();
                q.pop();
                REP(i,e[p].size()){
                    int now = e[p][i].first;
                    if(!visited[now]){
                        dd[now] = dd[p]+e[p][i].second;
                        visited[now] = true;
                        q.push(now);
                    }else{
                        if(dd[now]!=dd[p]+e[p][i].second){
                            put("No");
                            return 0;
                        }
                    }
                }
            }
        }
        
    }
    /*q.push(l[0]);
    dd[l[0]] = 0;
    while(!q.empty()){
        int p = q.front();
        q.pop();
        REP(i,e[p].size()){
            int now = e[p][i].first;
            if(!visited[now]){
                dd[now] = dd[p]+e[p][i].second;
                visited[now] = true;
                q.push(now);
            }else{
                if(dd[now]!=dd[p]+e[p][i].second){
                    put("No");
                    return 0;
                }
            }
        }
    }*/
    put("Yes");
    return 0;
}
