#include <iostream>
#include <set>
using namespace std;
int main(){
    int n; cin>>n;
    set<int> st;
    for(int i = 0; i < n; ++i){
        int a; cin >> a;
        st.insert(a);
    }
    if(st.size()==n) puts("YES");
    else puts("NO");
    return 0;
}