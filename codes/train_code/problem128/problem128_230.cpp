#include <bits/stdc++.h>
  using namespace std;
#define ll long long
#define fw(p) for(int w=0;w<(p);w++)
#define fx(p) for(int x=0;x<(p);x++)
#define fy(p) for(int y=0;y<(p);y++)
#define fz(p) for(int z=0;z<(p);z++)
#define fyg(p,g) for(int y=(g);y<(p);y++)
#define fzg(p,g) for(int z=(g);z<(p);z++)
#define ce(d) cout<<d<<endl;
#define vecp(p) int aa;cin>>aa;(p).push_back(aa);
#define vecpl(p) long long aa;cin>>aa;(p).push_back(aa);
#define vecps(p) string aa;cin>>aa;(p).push_back(aa);
#define vecp2(p) int ab;cin>>ab;(p).push_back(ab);
#define vecpl2(p) long long ab;cin>>ab;(p).push_back(ab);
#define vecps2(p) string ab;cin>>ab;(p).push_back(ab);
#define set0(k,n) for(int nn=0;nn<(n);nn++){ (k).push_back(0); }
#define sorts(c) sort((c).begin(),(c).end());
#define reverses(c) reverse((c).begin(),(c).end());
#define vec(b) vector<int> (b);
#define vecl(b) vector<long long> (b);
#define vecs(b) vector<string> (b);
#define vecsize(b,size) vector<int> (b)((size));
#define pb(b,a) (b).push_back((a));
#define doublece(a,b) cout<<(a)<<' '<<(b)<<endl;

 		
int main() {

int A,B;
cin>>A>>B;

vector<vector<char>> S(100);

doublece(100,100)

fx(100){
	fy(100){
		if((y==0||x%2==0)&&y!=99){
			pb(S.at(x),'.');
		}else{
			pb(S.at(x),'#');
		}
	}
}
int a=1,b=1;
for(int x=1;x<99;x+=3){
	for(int y=2;y<98;y+=2){
	if(x%2==1){
		if(b<B){
			S.at(x).at(y)='.';
			b++;
		}
	}else{
		if(a<A){
			S.at(x).at(y)='#';
			a++;
		}
	}
	}
}

fx(100){
	fy(100){
		cout<<S.at(x).at(y);
	}
	cout<<endl;
}


}