#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<utility>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<unordered_set>
#include<bitset>
using namespace std;
//#define MODE 1
#ifdef MODE
#define DEB(X) cout<< #X <<": "<<X<<" ";
#define ARDEB(i,X) cout<< #X <<"["<<i<<"]: "<<X[i]<<" ";
#define END cout<<endl;
#else
#define DEB(X) {}
#define ARDEB(i,X) {}
#define END {}
#endif
typedef long long int ll;
typedef pair<int,int> P;
struct edge{int to,cost;};
#define REP(i,n) for(int i=0;i<(n);i++)
const int INF=100000000;

int main(){
	int a,b;
	cin>>a>>b;
	if(a+b==15){
		cout<<"+"<<endl;
	}
	else if(a*b==15){
		cout<<"*"<<endl;
	}
	else{
		cout<<"x"<<endl;
	}
	return 0;
}