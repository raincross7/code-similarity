#include<deque>
#include<queue>
#include<vector>
#include<algorithm>
#include<iostream>
#include<set>
#include<cmath>
#include<tuple>
#include<string>
#include<chrono>
#include<functional>
#include<iterator>
#include<random>
#include<unordered_set>
#include<array>
#include<map>
#include<iomanip>
#include<assert.h>
#include<list>
#include<bitset>
#include<stack>
#include<memory>
#include<numeric>
using namespace std;
using namespace std::chrono;
typedef long long int llint;
typedef long double lldo;
#define mp make_pair
#define mt make_tuple
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define fir first
#define sec second
#define res resize
#define ins insert
#define era erase
/*cout<<fixed<<setprecision(20);cin.tie(0);ios::sync_with_stdio(false);*/
const int mod=1000000007 ;
const llint big=2.19e15+1;
const long double pai=3.141592653589793238462643383279502884197;
const long double eps=1e-10;
template <class T,class U>bool mineq(T& a,U b){if(a>b){a=b;return true;}return false;}
template <class T,class U>bool maxeq(T& a,U b){if(a<b){a=b;return true;}return false;}
llint gcd(llint a,llint b){if(a%b==0){return b;}else return gcd(b,a%b);}
llint lcm(llint a,llint b){if(a==0){return b;}return a/gcd(a,b)*b;}
template<class T> void SO(T& ve){sort(ve.begin(),ve.end());}
template<class T> void REV(T& ve){reverse(ve.begin(),ve.end());}
template<class T>llint LBI(const vector<T>&ar,T in){return lower_bound(ar.begin(),ar.end(),in)-ar.begin();}
template<class T>llint UBI(const vector<T>&ar,T in){return upper_bound(ar.begin(),ar.end(),in)-ar.begin();}

int main(void){
	cout<<fixed<<setprecision(20);cin.tie(0);ios::sync_with_stdio(false);
	int n,i;cin>>n;
	vector<llint>b(n);
	for(i=0;i<n;i++){int a;cin>>a;b[a-1]++;}
	SO(b);REV(b);
	vector<llint>c(n+1);
	for(i=0;i<n;i++){c[b[i]]++;}
	for(i=n;i>0;i--){c[i-1]+=c[i];}//回転
	vector<llint>kai(n+1);
	llint gen=0;
	for(i=1;i<=n;i++){//i回 可能な最大のKを求めたい
		gen+=c[i];
		kai[i]=gen/i;
	}
	vector<llint>ans(n+1);
	for(i=1;i<=n;i++){ans[kai[i]]=i;}
	for(i=n;i>0;i--){maxeq(ans[i-1],ans[i]);}
	for(i=1;i<=n;i++){cout<<ans[i]<<endl;}
	return 0;
}
