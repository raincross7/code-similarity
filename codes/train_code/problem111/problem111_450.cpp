#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <iomanip>
using namespace std;
typedef long long ll;
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;

#define EPS (1e-7)
#define INF (1e15)
#define PI (acos(-1))
#define MOD 1000000007

#define REP(i,n) for(int i=0;i<n;i++)
#define REPS(i,f,n) for(int i=(f);i<(n);i++)
#define EACH(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)

#define dump(x)  cout << #x << " = " << (x) << endl;
#define debug(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define arrdump(n,a) for(int i=0;i<n;i++) {cout<<((i>0)? " ":"")<<a[i];}cout<<"\n";


typedef pair<int, int> P;
typedef pair<ll, ll> LP;
typedef pair<int, P> PP;
typedef pair<ll, LP> LPP;

int dy4[]={0, 0, 1, -1};
int dx4[]={1, -1, 0, 0};
int dx8[]={0, 0, 1, -1, 1, 1, -1, -1};
int dy8[]={1, -1, 0, 0, 1, -1, -1, 1};

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_7_A&lang=jp

struct Node {
    int l, r , p;
};


#define MAX 100005
#define NIL -1

Node T[MAX];
int D[MAX];

static void print(int u) {
    printf("node %d: ", u);
    printf("parent = %d, ", T[u].p);
    printf("depth = %d, ", D[u]);

    if (T[u].p == NIL) cout << "root, ";
    else if (T[u].l == NIL) cout << "leaf, ";
    else cout << "internal node, ";

    cout << "[";
    for (int i = 0, c = T[u].l; c != NIL; i++, c=T[c].r) {
        if (i) cout << ", ";
        cout << c;
    }
    cout << "]" << "\n";
}

static void setDepth(int u, int d) {
    if (u==NIL) return;
    D[u] = d;
    setDepth(T[u].l, d+1);
    setDepth(T[u].r, d);
}

int main() {
    int N; cin >> N;
    REP(i, N) T[i].l = T[i].r = T[i].p = NIL;
    REP(i, N) {
        int id, c; cin >> id >> c;
        int l = 0;
        REP(j, c) {
            int a; cin >> a;
            if (j==0) T[id].l = a;
            else T[l].r = a;
            l = a;
            T[a].p = id;
        }
    }

    int root = 0;
    REP(i, N) if (T[i].p == NIL) root = i;
    setDepth(root, 0);
    REP(i, N) print(i);


    return 0;
}
