#include<bits//stdc++.h>
using namespace std;

int main(){
        long long x,y;
        cin >> x >> y;
        long long temp = x;
        long long ans = 0;
        while(x <= y){
            x = x * 2;
            ans++;
        }
        cout << ans << endl;
}
