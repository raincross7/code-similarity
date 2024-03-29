#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

const int MAX_L=1001;//?????????????????§??????

vector<vector<int> > DP(MAX_L, vector<int>(MAX_L, -1));
string A;//?????????????????????????????????
string B;
string chars;//???????????????????????¨????????????????????????


//A???a???????????¨????????\??????B???b???????????¨????????\??????????????§????????§?????¨????????????????????????????????????
//m?????????????????????????????±??????????????????
int dev(int a, int b){
	if(DP[a][b]<0){
		int maxi= 0;
		//???????????????????????§??????
		for(char c: chars){
			int posa = A.find(c,a);
			int posb = B.find(c,b);
			if(posa>=0 && posb>=0){
				int tmp = dev(posa+1,posb+1);
				maxi = max(maxi, tmp+1);
			}
		}
		DP[a][b]=maxi;
	}
	return DP[a][b];
}

void make_list(){
		//???????????????????????§??????
		for(int c='a'; c<='z'; ++c){
			int posa = A.find(c,0);
			int posb = B.find(c,0);
			if(posa>=0&&posb>=0){
				chars.push_back(c);
			}
		}
		for(int c='A'; c<='Z'; ++c){
			int posa = A.find(c,0);
			int posb = B.find(c,0);
			if(posa>=0&&posb>=0){
				chars.push_back(c);
			}
		}
}

int main(){
	int q;
	cin >> q;
	vector<int> ans(q);
	REP(i,q){
		REP(k,MAX_L){
			REP(l,MAX_L){
				DP[k][l] = -1;
			}
		}
		chars="";
		cin>>A>>B;
		make_list();
		ans[i]=dev(0,0);
	}
	REP(i,q){
		cout<<ans[i]<<endl;
	}
	return 0;
}