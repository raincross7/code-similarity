#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
#define _GLIBCXX_DEBUG

int main (){
    int N,Y;
    cin>>N>>Y;
    int y=Y/1000;
    int p=-1;
    int q=-1;
    int r=-1;
    rep(i,N+1){
        rep(j,N-i+1){
            int keynum=9*i+4*j;
            if(keynum==y-N){
                p=i;
                q=j;
                r=N-i-j;
            }
            else continue;

        }
    }
cout<<p<<" "<<q<<" "<<r<<endl;
}