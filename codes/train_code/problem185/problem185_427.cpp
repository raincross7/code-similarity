#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> l(2*n);
	for(int i=0;i<2*n;++i)
		cin>>l[i];
	sort(begin(l),end(l));
	int ans=0;
	for(int i=0;i<2*n;i+=2)
		ans+=l[i];
	cout<<ans<<"\n";
	return 0;
}
