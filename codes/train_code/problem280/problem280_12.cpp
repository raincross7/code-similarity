#include <iostream>
#include <fstream>
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <iomanip>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#pragma comment(linker, "/STACK:400000000")

#define EPS 1e-9
#define INF MOD
#define MOD 1000000007LL
#define fir first
#define foreach(it,X) for(it=X.begin();it!=X.end();it++)
#define iss istringstream
#define ite iterator
#define ll long long
#define mp make_pair
#define rep(i,n) rep2(i,0,n)
#define rep2(i,m,n) for(int i=m;i<n;i++)
#define pi pair<int,int>
#define pb push_back
#define sec second
#define sh(i) (1LL<<i)
#define sst stringstream
#define sz size()
#define vi vector<int>
#define vc vector
#define vl vector<ll>
#define vs vector<string>

int n,Y,M,D;

int main(){
	cin>>n;
	while(cin>>Y>>M>>D){
		int y=Y,m=M,d=D,ans=0;
		while(1){
			if(y==1000){
				cout<<ans<<endl;
				break;
			}
			ans++;
			d++;
			if(d>(20-((m%2==0)&&(y%3>0))))m++,d=1;
			if(m==11)y++,m=1;
		}
	}
}