#include <iostream>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;

int main(){
  int x,ans;
  cin >> x;
  
  if(x>=400 && x<=599){ans=8;}
  else if(x>=600 && x<=799){ans=7;}
  else if(x>=800 && x<=999){ans=6;}
  else if(x>=1000 && x<=1199){ans=5;}
  else if(x>=1200 && x<=1399){ans=4;}
  else if(x>=1400 && x<=1599){ans=3;}
  else if(x>=1600 && x<=1799){ans=2;}
  else if(x>=1800 && x<=1999){ans=1;}
  
  cout << ans << endl;
  
  return 0;
}
