#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<map>
#include<iomanip>
#include<sstream>
#include<vector>
#include<stack>
#include<queue>
#include<math.h>
#include<complex>

using namespace std;


//union find木(グループわけができる)
int par[200010];
int unifind(int n) {
             for (int i = 0; i < n; i++) {
                           par[i] = i;
             }
             return 0;
}
             //木の根を求める
int unifind_root(int x) {
             if (par[x] == x) {
                           return x;
             }
             else {
                           return par[x] = unifind_root(par[x]);
             }
}
             //同じグループか判定
bool unifind_same(int x, int y) {
             return unifind_root(x) == unifind_root(y);
}
             //グループ併合
int unifind_unite(int x, int y) {
             x = unifind_root(x);
             y = unifind_root(y);
             if (x == y) {
                           return 0;
             }
             par[x] = y;
}
 

const long long int mod=1000000007;
int main(){
	cout << fixed << setprecision(18);
	long long int n,m,h,w,res=0,l,r,memo[200004][2]={};
	string str[500];
	char ch;
	cin>>n;
	for(int i=1;i<20000;i++)
	{
		if((i*i+i)/2>=n)
		{
			res=(i*i+i)/2-n;
			r=i;
			break;
		}
	}
	for(int i=1;i<=r;i++)
	{
		if(i==res)
		{
			continue;
		}
		cout<<i<<endl;
	}
}
