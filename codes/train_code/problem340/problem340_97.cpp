#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int p[n];
    int x=0,y=0,z=0;
    for(int i = 0; i < n; i++){
        cin >> p[i];
        if(p[i] <= a){
            x++;
        }else if (a+1 <= p[i] && p[i] <= b){
            y++;
        }else{
            z++;
        }
    }
    cout << min(x,min(y,z)) << endl;

    return 0;
}