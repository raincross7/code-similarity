#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  string a[n], b[m];
  for(int i=0; i<n; i++)
    cin >> a[i];
  for(int i=0; i<n; i++)
    cin >> b[i];
  for(int i=0; i<n-m+1; i++)
    for(int j=0; j<n-m+1; j++){
      bool flag=0;
      for(int k=0; k<m; k++)
        for(int l=0; l<m; l++)
          if(a[i+k][j+l]!=b[k][l])
            flag = 1;
      if(flag==0){
        cout << "Yes";
        return 0;
      }
    }

  cout << "No";
  return 0;
}