
#include <bits/stdc++.h>
using namespace std;
 
int main() {
set<int>s;int a,n,i;cin>>n;
for(i=0;i<n;i++){cin>>a;s.insert(a);}if(s.size()==n)cout<<"YES";
else cout<<"NO";
}
