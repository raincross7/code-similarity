#include <bits/stdc++.h>
using namespace std;
using pint = pair<int,int>;


const long long INFLL = 1LL << 60;
const int INFI = 1000000000;


int main(){
   long long x,y; cin >> x >> y;
   if(x*y<0) cout << abs(abs(x)-abs(y))+1 << endl;
   else if(x*y==0){
       if(x<y) cout << y-x << endl;
       else cout << x-y+1 << endl;
   }else{
       if(x<y) cout << y-x <<endl;
       else cout << x-y+2 << endl;
   }
}
