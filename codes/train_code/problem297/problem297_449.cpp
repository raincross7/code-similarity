#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using P =pair<int,int>;

int main(){
	string A,B,C;
	cin>>A>>B>>C;
	if(A[A.size()-1]==B[0]&&B[B.size()-1]==C[0]){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
return 0;}

/*compile
g++ code.cpp
./a.out
run*/