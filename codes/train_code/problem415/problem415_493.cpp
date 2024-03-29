#include <bits/stdc++.h>
using namespace std;
struct Point {double x,y;};

void koch(int n,Point a,Point b){
    if(n==0){return;}
    Point t,s,u;
    double th=M_PI*60.0/180.0;
    s.x =(2.0*a.x+1.0*b.x)/3;
    s.y =(2.0*a.y+1.0*b.y)/3;
    t.x =(2.0*b.x+1.0*a.x)/3;
    t.y =(2.0*b.y+1.0*a.y)/3;
    u.x =(t.x-s.x)*cos(th)-(t.y-s.y)*sin(th)+s.x;
    u.y =(t.x-s.x)*sin(th)+(t.y-s.y)*cos(th)+s.y;
    
    koch(n-1,a,s);
    cout <<setprecision(10) << s.x<<' '<<setprecision(10)<<s.y<<endl;
    koch(n-1,s,u);
    cout <<setprecision(10)<<u.x<<' '<<setprecision(10)<<u.y<<endl;
    koch(n-1,u,t);
    cout <<setprecision(10)<<t.x<<' '<<setprecision(10)<<t.y<<endl;
    koch(n-1,t,b);
    
}

int main() {
   Point a,b; 
   int n; 
   cin>>n; 
   a.x=0;a.y=0;     
   b.x=100.0;b.y=0;
   cout<<a.x<<' '<<a.y<<endl;
   koch(n,a,b);
   cout<<b.x<<' '<<b.y<<endl;
  
}


