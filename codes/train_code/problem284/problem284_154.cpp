#include <bits/stdc++.h>
using namespace std;

#define pb	push_back
#define eb	emplace_back
#define mk	make_pair
#define fi	first
#define se	second
#define endl	'\n'

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

int main() {
    ios_base::sync_with_stdio(false);
    int k; string s;
    cin >> k >> s;
    for(int i = 0; i < min(k,(int)s.size()); i++) cout << s[i];
    if(k < s.size()) cout << "...";
    cout << endl;
    return 0;
}

