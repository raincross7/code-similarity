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

int int_less(const void *a, const void *b) {
  return (*((const int*)a) - *((const int*)b));
}
int int_greater(const void *a, const void *b) {
  return (*((const int*)b) - *((const int*)a));
}

#define mygc(c) (c)=getchar_unlocked()
int ri() {
	int k,m=0;int x=0;
	for(;;){mygc(k);if(k=='-'){m=1;break;}if('0'<=k&&k<='9'){x=k-'0';break;}}for(;;){mygc(k);if(k<'0'||k>'9')break;x=x*10+k-'0';}if(m)x=-x;
	return x;
}

int main() {
	int n = ri();
	int k = ri();
 	int a[n];
	int b[n];
	FOR(i,n) a[i] = ri(), b[i] = ri();
	
	s64 res = 0;
	FOR(i,n) if ((k&a[i]) == a[i]) res += b[i];
	FOR(i,30) {
		if (k&(1<<i)) {
			int kk = k;
			kk&=~(1<<i);
			DOWN(j,i) kk |= (1<<j);
			s64 res_tmp = 0;
			FOR(j,n) {
				if ((kk&a[j]) == a[j]) {
					res_tmp += b[j];
				}
			}
			res = max(res, res_tmp);
		}
	}
	cout << res << endl;
	
    return 0;
}
