/* In the name of Allah */
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define debug cout << "here!"
#define pii pair<int , int>
#define pdd pair<double , double>
#define F first
#define S second
const int maxn = 1e5 * 5 + 10 , inf = 1e9 , pi = 3.14159265;

void solve(){
    
}
void in(){
    int x , y;
    cin >> x >> y;
    int mn = x * 2,  mx = x * 4;
    if (y % 2 != 0){
        cout << "No"; return ;
    }
    if (y >= mn && y <= mx){
        cout << "Yes"; return ;
    }
    cout << "No";
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    in();
    return 0;
}
