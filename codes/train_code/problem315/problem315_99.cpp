#include <bits/stdc++.h>
#include <string>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <map>
#include <bitset>
#include <cmath>
#include <set>

#define INF 1000000000000
#define MOD 1000000007 //10^9+7:合同式の法

using namespace std;
typedef long long ll;

//マクロ
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)

int main(){
    string a,b;
    cin >> a >> b;
    bool fla = false;

    string s;

    for(int i = 0;i < a.size();i++){
        if(a == b){
            fla = true;
            break;
        }else{
            s = a;
            for(int k = 0;k < s.size();k++){
                if(k == 0){
                    a.at(k) = s.at(s.size() - 1); 
                }else{
                    a.at(k) = s.at(k-1);
                }
            }
        }
    }
    
    if(fla){
        cout << "Yes" << endl;
    }else
    {
        cout << "No" << endl;
    }
    

}