// Code by Nguyen Huu Lam
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef long long LL;

#define y0 Sword_Art_Online
#define y1 Your_lie_in_April
#define yn Darling_in_the_Franxx
#define tm Plastic_Memories
#define lr Charlotte
#define norm Weathering_with_you
#define left Violet_Evergarden
#define have Date_a_live
#define ends Your_name
#define prev Five_centimeters_per_second
#define hash Slient_voice

#define ordered_set tree<LL, null_type, less<LL>, rb_tree_tag, tree_order_statistics_node_update>
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

LL Rand(LL l, LL h){
    return uniform_int_distribution<LL>(l, h)(rng);
}

template <typename T> void read(T &t){
    t = 0; char ch = getchar(); int f = 1;
    while (!isdigit(ch)) { if (ch == '-') f = -1; ch = getchar(); }
    do { (t *= 10) += ch - '0'; ch = getchar(); } while (isdigit(ch)); t *= f;
}

const LL MaxN = 10 + 1e5;

LL n, a[MaxN], x, kq;
multiset<LL> s;

void InOut(){
    #define TASK "ABC"
    freopen(TASK".inp","r",stdin);
    freopen(TASK".out","w",stdout);
}

int main(){
    // InOut();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 0 ; i < n ; ++i){
        cin >> x;
        a[x] = i + 1;
    }
    s.insert(0);
    s.insert(0);
    s.insert(n + 1);
    s.insert(n + 1);
    s.insert(a[n]);
    for(int i = n - 1 ; i > 0 ; --i){
        s.insert(a[i]);
        auto it = s.lower_bound(a[i]);
        LL x1 = *(--it), x2 = *(--it);
        it++;
        it++;
        LL x3 = *(++it), x4 = *(++it);
        kq += ((x1 - x2) * (x3 - a[i]) + (x4 - x3) * (a[i] - x1)) * i;
    }
    cout << kq << endl;

    return 0;
}