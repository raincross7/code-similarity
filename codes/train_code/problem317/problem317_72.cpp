#include <bits/stdc++.h>
#ifdef DEMETRIO
#define deb(...) fprintf(stderr,__VA_ARGS__)
#define deb1(x) cerr << #x << " = " << x << endl
#else
#define deb(...) 0
#define deb1(x) 0
#endif
#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define fore(i,a,b) for(int i=a,ThxDem=b;i<ThxDem;++i)
#define SZ(x) ((int)x.size())
using namespace std;
typedef long long ll;

int n,m;
string t="snuke",s;

int main(){
	cin>>n>>m;
	fore(i,0,n)fore(j,0,m){
		cin>>s;
		if(s==t){printf("%c%d\n",j+'A',i+1);}
	}
	return 0;
}