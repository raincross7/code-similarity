#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int ans;
    
    if(n%2==0){
        ans=n/2-1;
    } else {
        ans=(n+1)/2-1;
    }
    std::cout << ans << std::endl;
    return 0;
}