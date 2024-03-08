#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits.h>
#include <climits>
#include <map>
#include <unordered_map>
#include <cmath>
#include <set>
#include <unordered_set>
#include <iterator>
#include <deque>
#include <assert.h>
#include <cstdlib>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
ull min(ull x, ull y){ if (x<y) return x; return y;}
ull max(ull x, ull y){ if (x<y) return y; return x;}
ll min(ll x, ll y){ if (x<y) return x; return y;}
ll max(ll x, ll y){ if (x<y) return y; return x;}
double min(double x, double y){ if (x<y) return x; return y;}
double max(double x, double y){ if (x<y) return y; return x;}
ull gcd(ull x, ull y){
    if (!x) return y;
    if (!y) return x;
    if (x>y) swap(x,y);
    return gcd(x, y%x);
}
ull inv(ull a, ull c){ // a,c are coprime and a<c
    if (a==1){
        return 1;
    }
    return ((c-(c/a))*inv(c%a,c))%c;
}


int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin>>n>>m;

    int d = (n-1)/2, i = 1;
    while ((m>0) && (d>0)){
        cout<<i<<" "<<i+d<<"\n";
        d-=2;
        i++;
        m--;
    }
    d = ((n-1)/2)-1;
    i = ((n+1)/2)+1;
    while ((m>0) && (d>0)){
        cout<<i<<" "<<i+d<<"\n";
        d-=2;
        i++;
        m--;
    }

    return 0;
}





