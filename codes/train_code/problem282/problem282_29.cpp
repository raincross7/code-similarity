#include <bits/stdc++.h>
using namespace std;

int main(){
  	int i,n,k,a,j,l,c=0,bad=0,count=0;
  	vector<int> d(100);
  	vector<int> num(10000);
 	cin >> n >> k;
  	for(i=0;i<k;i++){
    	cin >> d[i];
      	for(j=0;j<d[i];j++){
         	cin >> a;
          	for(l=0;l<num.size();l++){
            	if(a==num[l]){
                	bad++;
                  	break;
                }
            }
          	if(bad==0) count++;
          	num[c] = a;
          	c++;
          	bad = 0;
        }
    }
  	cout << n - count << endl;
}

