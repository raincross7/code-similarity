#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n, k, count = 0;
  cin >> n >> k;
  vector<int> vec(n);
  for(int i = 0 ; i < k ; i ++){
    int d;
    cin >> d;
    for(int j = 0; j < d; j ++){
      int x;
      cin >> x;
      vec.at(x-1) = 1;
    }
  }
  
  for(int i =0;i < n;i++){
    if(vec.at(i) !=1){
      count++;
    }
  }
  cout << count << endl;
}