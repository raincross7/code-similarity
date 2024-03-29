#pragma GCC optimize("Ofast","inline","-ffast-math")
#pragma GCC target("avx,sse2,sse3,sse4,mmx")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/hash_policy.hpp>
//#define int long long
using namespace __gnu_pbds;
using namespace std;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int n,m,q,row[300010],cnt[300010],col[300010];
vector<int> v[300010];

signed main()
{
	ios::sync_with_stdio(false);
	cin>>n>>m>>q;
	for(int i=1;i<=q;i++){
		int x,y;cin>>x>>y;
		row[x]++;col[y]++;
		v[y].push_back(x); 
	}
	int maxv=0;
	for(int i=1;i<=m;i++) maxv=max(maxv,col[i]);
	int tot=0;
	for(int i=1;i<=m;i++) if(col[i]==maxv) tot++;
	for(int i=1;i<=m;i++) if(col[i]==maxv){
		for(int j=0;j<v[i].size();j++) cnt[v[i][j]]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		int val=row[i]+maxv;
		if(cnt[i]==tot) val--;
		ans=max(ans,val);
	}
	cout<<ans<<endl;
	return 0;
}