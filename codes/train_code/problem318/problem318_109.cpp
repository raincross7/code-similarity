#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, min=5000; 
    cin>>a>>b>>c;
    vector<int> v(3); 
    v[0] = a+b;
    v[1] = b+c;
    v[2] = c+a;
    sort(v.begin(), v.end());
    cout<<v[0]<<endl;
    return 0;
}