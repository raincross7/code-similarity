#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int (i)=0;(i)<(n);i++)
#define INF 1001001001
#define LLINF 1001001001001001001
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
#define ALL(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string a,b;cin>>a>>b;
    
    if(a.length()==b.length()){
        for(int i=0;i<a.length();i++){
                if(a[i]>b[i]){
                    cout << "GREATER" << endl; 
                    return 0;
                }
                else if(a[i]<b[i]){
                    cout << "LESS" << endl; 
                    return 0;
                }
        }
    cout << "EQUAL" << endl;
    }
    else{
        if(a.length()>b.length())cout << "GREATER" << endl;
        else cout << "LESS" << endl; 
    }

    return 0;
}