#define _GLIBCXX_DEBUG
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef unsigned long long int ulli;
typedef long double ld;
#define vec(s) vector<s>
#define vvec(s) vector<vector<s>>
typedef vector<lli> vi;
typedef vector<vi> vvi;
typedef pair<lli,lli> pii;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Yes(x) cout<<(x?"Yes":"No")<<endl;
#define YES(x) cout<<(x?"YES":"NO")<<endl;
#define out(s) cout<<s<<endl;
#define Reverse(x) reverse(all(x));
#define Sort(x) sort(all(x));
#define pb(s) push_back(s);
#define sp " " 
#define INF 10000000000
#define LINF 9000000000000000000
#define all(s) s.begin(),s.end()
void vout(vi v){
    for(lli i=0;i<v.size();i++)
    cout<<v.at(i)<<endl;
}
int main(){
    cout << std::fixed << std::setprecision(10);
    string s;
    cin>>s;
    bool c=false;
    if (s=="keyence"){ 
        c=true;
    }
        rep(i, s.size()) {
        for(lli j=1;i+j<=s.size();j++){
            string sc=s;
            sc.erase(i, j);
            if (sc=="keyence"){ 
                c=true;
                break;
            }
        }
    }
    YES(c);
}