#include <iostream>
#include <vector>
#include <cstdlib>  
#include <algorithm>
#include <string>

using namespace std;
 
int main() {
    int n,x,t;
    cin>>n>>x>>t;
	if(n%x == 0) cout<<n/x*t;
    else cout<<((n/x)+1)*t;
    return 0;
}