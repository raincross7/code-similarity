#include "bits/stdc++.h"
using namespace std;
#define fi first
#define se second
#define ll long long
#define dbg(v) cerr<<#v<<" = "<<v<<'\n'
#define vi vector<int>
#define vl vector <ll>
#define pii pair<int,int>
#define vii vector < pii >
#define mp make_pair
#define db long double
#define pb push_back
#define all(s) s.begin(),s.end()
template < class P , class Q > ostream& operator<<(ostream& stream, pair < P , Q > v){ stream << "(" << v.fi << ',' << v.se << ")"; return stream;}
template < class T > ostream& operator<<(ostream& stream, const vector<T> v){ stream << "[ "; for (int i=0; i<(int)v.size(); i++) stream << v[i] << " "; stream << "]"; return stream;}
template < class T > T smin(T &a,T b) {if (a > b) a = b;return a;}
template < class T > T smax(T &a,T b) {if (a < b) a = b;return a;}
int main(void) {
    int n;
    cin>>n;
    cout << (n - 2) * 180 << '\n';
    return 0;
}