#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int h,n;
    cin >> h >> n;
    int sum = 0;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        sum += a;
    }
    if(sum >= h){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}