# include <bits/stdc++.h>
# define ll long long
# define all(x) x.begin(), x.end()
# define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
# define MOD 1000000007
														
using namespace std;

int main(){
	//fastio;
	vector<vector<int>> a(26);
	char tmp=getchar();
	int n=1;
	while (tmp>='a'&&tmp<='z'){
		a[tmp-'a'].push_back(n++);
		tmp=getchar();
	}

	int x=-1,y=-1;
	bool found=false;
	for (auto poses:a){
		sort(all(poses));
		if (poses.size()<2) continue;
		for (int i=1;i<poses.size();i++){
			int dis=poses[i]-poses[i-1];
			if(dis<=2) {
				x=poses[i-1];y=poses[i];
				found=true;
				break;
			}
		}
		if (found) break;
	}
	cout<<x<<' '<<y<<'\n';
	return 0;
}
	
