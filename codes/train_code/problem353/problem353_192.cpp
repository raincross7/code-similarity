
/**Which of the favors of your Lord will you deny ?**/

#include<bits/stdc++.h>
using namespace std;

#define LL long long
#define PII pair<int,int>
#define PLL pair<LL,LL>
#define MP make_pair
#define F first
#define S second
#define INF INT_MAX

#define ALL(x) (x).begin(), (x).end()
#define DBG(x) cerr << __LINE__ << " says: " << #x << " = " << (x) << endl

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<class TIn>
using indexed_set = tree<
                    TIn, null_type, less<TIn>,
                    rb_tree_tag, tree_order_statistics_node_update>;

/*
PBDS
-------------------------------------------------
1) insert(value)
2) erase(value)
3) order_of_key(value) // 0 based indexing
4) *find_by_order(position) // 0 based indexing

*/

inline void optimizeIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

const int nmax = 2e5+7;
const LL LINF = 1e17;

string to_str(LL x)
{
    stringstream ss;
    ss<<x;
    return ss.str();
}

//bool cmp(const PII &A,const PII &B)
//{
//
//}

map<int,int>posa;
map<int,int>posb;

int main()
{
    optimizeIO();

    int n;
    cin>>n;

    vector<int>a(n);

    for(int i=0;i<n;i++)
        cin>>a[i];

    vector<int>b = a;

    sort(ALL(b));

    for(int i=0;i<n;i++)
    {
        posa[a[i]] = i;
        posb[b[i]] = i;
    }

    int cnt = 0;

    for(int i=0;i<n;i++)
    {
        int val = a[i];

        int pa = posa[val];
        int pb = posb[val];

        if(abs(pa-pb)%2==1)
            cnt++;
    }

    cout<<cnt/2<<endl;

    return 0;
}


