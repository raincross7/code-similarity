#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

#define countof(a) (sizeof(a)/sizeof(*a))

#define vi vector<int>
#define vvi vector<vector<int> >
#define vpi vector<pi >
#define pi pair<int,int>
#define mp make_pair
#define fi first
#define se second
#define all(n) n.begin(), n.end()

#define FROMTO(var, from, to) for (register int var = (from), var##down = ((int)(to)) < ((int)(from));var##down ? (var >= (int)(to)) : (var <= (int)(to));var##down ? var-- : var++)
#define UPTO(var, from, to)   for (register int var = (from); var <= ((int)to); var++)
#define DOWNTO(var, from, to) for (register int var = (from); var >= ((int)to); var--)
#define FOR(var, to)          UPTO(var, 0, (to)-1)
#define DOWN(var, from)       DOWNTO(var, (from)-1, 0)

#define INIT(var, val) FOR(i,countof(var)) var[i] = val
#define INPUT(var) FOR(i,countof(var)) cin >> var[i]
#define INPUT1(var) FOR(i,countof(var)) cin >> var[i], var[i]--

#define SORT(v) qsort(v,countof(v),sizeof(*v),int_less)
#define SORTT(v) qsort(v,countof(v),sizeof(*v),int_greater)
#define QSORT(v,b) qsort(v,countof(v),sizeof(*v),b)

#define MOD 1000000007
#define INF ((1 << 30)-1)
#define LINF ((1LL << 62)-1)

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;

struct Comb {
    vector<vector<s64> > data;
    Comb(int n) { // O(n^2)
        data = vector<vector<s64> >(n+1,vector<s64>(n+1,1));
        UPTO(i,1,n) {
            FOR(j,i+1) {
                if (!j || j == i) data[i][j] = 1;
                else data[i][j] = data[i-1][j-1] + data[i-1][j];
            }
        }
    }

    s64 ncr(int n, int r) {
        return data[n][r];
    }
};

static inline int ri() {
  int a;
  scanf("%d", &a);
  return a;
}

int int_less(const void *a, const void *b) {
  return (*((const int*)a) - *((const int*)b));
}
int int_greater(const void *a, const void *b) {
  return (*((const int*)b) - *((const int*)a));
}


struct UnionFind{
    vi data;
    UnionFind(int size):data(size,-1){}
    bool unite(int x,int y) {
        x=root(x);y=root(y);
        if(x!=y){
            if(data[y]<data[x])swap(x,y);
            data[x]+=data[y];data[y]=x;
        }
        return x!=y;
    }
    bool find(int x,int y) {
        return root(x)==root(y);
    }
    int root(int x) {
        return data[x]<0?x:data[x]=root(data[x]);
    }
    int size(int x) {
        return -data[root(x)];
    }
    // added by QCFium
    bool united() {
        int comroot = -1;
        FOR(i,data.size()) {
            if (comroot != -1 && root(i) != comroot) return false;
            comroot = root(i);
        }
        return true;
    }
};


int main() {
    int n = ri();
	int m = ri();
	vector<pair<int,int> > hen[n];
	UnionFind uni(n);
	FOR(i,m) {
		int l = ri()-1;
		int r = ri()-1;
		int d = ri();
		hen[l].push_back({r,d});
		hen[r].push_back({l,-d});
		uni.unite(l,r);
	}

	set<int> unions;
	FOR(i,n) unions.insert(uni.root(i));

	int dist[n]; INIT(dist, INF);
	for (auto i : unions) {
		queue<int> que; que.push(i);
		dist[i] = 0;
		int minn = 0;
		int maxx = 0;
		while (que.size()) {
			int i = que.front(); que.pop();
			for (auto j : hen[i]) {
				if (dist[j.fi] == INF) {
					dist[j.fi] = dist[i] + j.se;
					minn = min(minn, dist[j.fi]);
					maxx = max(maxx, dist[j.fi]);
					que.push(j.fi);
				} else if (dist[j.fi] != dist[i] + j.se) {
					cout << "No" << endl;
					return 0;
				}
			}
		}
		if (maxx - minn > 1000000000) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
    return 0;
}
