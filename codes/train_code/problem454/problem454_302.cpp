#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep1(i, n) for(int i = 1; i <= (int)(n); i++)
#define show(x) {for(auto i: x){cout << i << " ";} cout<<endl;}
#define showm(m) {for(auto i: m){cout << m.x << " ";} cout<<endl;}
typedef long long ll;
typedef pair<int, int> P;
ll gcd(int x, int y){ return y?gcd(y, x%y):x;}
ll lcm(ll x, ll y){ return (x*y)/gcd(x,y);}

int masu[1050][1050] = {0};

int main()
{
    int h, w, a, b;
    cin >> h >> w >> a >> b;

    rep(i, h){
        rep(j, w){
            if (j < a && i < b){
                masu[i][j] = 1;
            } else if (j >= a && i >= b){
                masu[i][j] = 1;
            }
        }
    }


    rep(i, h){
        rep(j, w){
            cout << masu[i][j];
        }
        cout << endl;
    }    

}

