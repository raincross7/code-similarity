#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
// use unique(x) - removec consecutive items, returns vec.begin() + number of items
// for vector: sort(all(vec)); vec.erase(unique(all(vec)), vec.end());
// use iota(all(vec), 0) for filling a vector with 0,1,2...
// use fill(all(vec), 1) for filling a vector with 1,1,1...
// use rotate(vec.begin(), vec.begin() + 1, vec.end()) to rotate a vector | middle arg becomes first
// use merge(all(vec1), all(vec2), vec3.begin()) to merge 2 vectors, use vec3.resize(vec1.size() + vec2.size()) first
// ll pos = partition_point(all(vec), pred) - vec.begin(); bool pred(ll a){return a<3};
// print number in binary -> cout << bitset<20>(n);
#define inf INT_MAX
char arr[100][101];
int cnt[100][100];

int main(){
	int h,w;
	cin>>h>>w;
	for(int i=0;i<h;++i)
		cin>>arr[i];
	for(int i=0;i<h;++i)
		for(int j=0;j<w;++j){
			if(!i&&!j)continue;
			int left=j?cnt[i][j-1]+(arr[i][j]!=arr[i][j-1]):inf;
			int top=i?cnt[i-1][j]+(arr[i][j]!=arr[i-1][j]):inf;
			cnt[i][j]=min(left,top);
		}
//	for(int i=0;i<h;++i,cout<<endl)
//		for(int j=0;j<w;++j)
//			cout<<cnt[i][j]<<" ";
	int res=cnt[h-1][w-1];
	res=res/2+res%2+(!(res%2)*arr[0][0]=='#');
	cout<<res<<endl;
}
