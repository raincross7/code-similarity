#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k,temp,cnt =0;
    cin >> n >> k;
    for(int i =0; i <n; ++i){
        cin >> temp;
        if(temp >= k ){
            ++cnt;
        }
    }
    cout<< cnt;
    return 0;
}

