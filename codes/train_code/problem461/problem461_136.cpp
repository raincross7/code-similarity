#include <bits/stdc++.h>
#define f first
#define s second
#define MOD 1000000007
#define PMOD 998244353
#define pb(x) push_back(x)
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> plii;
typedef pair<int, pii> piii;
const int INF = 1e9+10;
const ll LINF = 1LL*INF*INF;
const int MAXN = 2e5+10;
const int MAXM = 5e3+10;

priority_queue<int> pq;
vector<vector<int> > graph;
queue<int> que;

int A[MAXN];
char S[MAXN];

int main()
{
    int n,m,k,a,b,x,y,q;
    int sum = 0;
    int cnt = 0;
    int mx = 0;
    int mn = INF;
    int cur = 0, idx = -1;
    int tc;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;

    k = 0;

    for(int i=0;i<n;i++){
        cin>>A[i];
        k = max(k,A[i]);
    }

    for(int i=0;i<n;i++){
        cur = min(A[i],k-A[i]);
        if(cur>mx){
            mx = cur;
            idx = i;
        }
    }

    if(!mx)cout<<k<<" "<<0<<"\n";
    else cout<<k<<" "<<A[idx]<<"\n";

    return 0;
}
