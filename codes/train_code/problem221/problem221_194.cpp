#include <iostream>
#include <vector>
#include <cstdlib>  
#include <algorithm>
#include <string>

using namespace std;
 
int main() {
   	int n,k;cin>>n>>k;
    if(n%k == 0)cout<<"0";
    else cout<<"1";
    return 0;
}