#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define r(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int a[101][101],start[101],end[101],n,p=0,v[101];
queue<int> q;
void bfs(int u){
	q.push(u);
	v[u]++;
	while(!q.empty()){
		u=q.front();q.pop();
		r(i,1,n+1)if(!v[i]&&a[u][i]){
			v[i]++;
			q.push(i);
			start[i]=start[u]+1;
		}
	}
}
int main(){
	int q,qq,qqq;
	cin>>n;
	r(i,0,n){
		cin>>q>>qq;
		r(i,0,qq){
			cin>>qqq;
			a[q][qqq]++;
		}
	}
	bfs(1);
	r(i,1,n+1){
		if(i!=1&&start[i]==0)cout<<i<<' '<<-1<<endl;
		else cout<<i<<' '<<start[i]<<endl;
	}
}