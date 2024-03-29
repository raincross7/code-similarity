#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
const ll INF =ll(1e18)+5;
ll H,W;
vector<std::string> s;

bool onBoard(int y,int x){
    if(y>=0 && y<H && x>=0 && x<W){
        return true;
    }
    return false;
}

void solve(){
    priority_queue<pair<ll,P>,vector<pair<ll,P>>,greater<pair<ll,P>>> q;
    ll d[H][W];
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            d[i][j] =INF;
        }
    }
    int dy[] = {0,1};
    int dx[] = {1,0};
    q.push(make_pair(0,P(0,0)));
    d[0][0] =0;
    while(!q.empty()){
        P p = q.top().second;
        ll di = q.top().first;
        
        // cerr <<"y="<<p.first <<"x=" << p.second<<"di="<< di << endl;
        q.pop();
        if(di>d[p.first][p.second]){
            continue;
        }
       
        for(int i=0;i<2;i++){
            ll ny = p.first + dy[i];
            ll nx = p.second + dx[i];
            if(!onBoard(ny,nx)){
                continue;
            }
            if(s[p.first][p.second] == '.' && s[ny][nx] != s[p.first][p.second]){
                if(d[ny][nx] > d[p.first][p.second]+1){
                    d[ny][nx] = d[p.first][p.second]+1;
                    q.push(make_pair(d[ny][nx],P(ny,nx)));
                }
                continue;
            }else{
                if(d[ny][nx] > d[p.first][p.second]){
                    d[ny][nx] = d[p.first][p.second];
                    q.push(make_pair(d[ny][nx],P(ny,nx)));
                }

            }
           
        }
    }
    ll ans = d[H-1][W-1];
    if(s[0][0] == '#'){
        ans ++;
    }
    cout << ans << endl;

}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    scanf("%lld",&H);
    scanf("%lld",&W);
    s.resize(W);
    for(int i = 0 ; i < W ; i++){
        std::cin >> s[i];
    }
    solve();
    return 0;
}
