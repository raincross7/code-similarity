#include<iostream>//static_cast<***>(***)
#include<stdio.h>//printf("%.*f\n",*********);
#include<vector>//s.erase(n),vector
#include<algorithm>//next_permutation
#include<set>
#include<string>//char('a'=32+'A')
//to_string,string,substr
#include<sstream>
#include<complex>
#include<time.h>
#include<random>
#include<cmath>//min,max
#include<math.h>
#include<queue>
#include<time.h>
#include<map>//map
#include<iomanip>
#include<locale>
#include<utility>//swap

#define rt "\n"
#define rep(i,n) for(int i=0;i<n;i++)
#define rop(i,n) for(int i=1;i<=n;i++)//start==1
#define drep(i,n) for(int i=n-1;0<=i;i--)
#define drop(i,n) for(int i=n;0<i;i--)//end==1
#define yes(ans) if(ans)cout<<"yes"<<rt;else cout<<"no"<<rt;
#define Yes(ans) if(ans)cout<<"Yes"<<rt;else cout<<"No"<<rt;
#define YES(ans) if(ans)cout<<"YES"<<rt;else cout<<"NO"<<rt;
#define Yay(ans) if(ans)cout<<"Yay!"<<rt;else cout<<":("<<rt;
#define sec(a,b,ans) if(ans)cout<<a<<rt;else cout<<b<<rt;
#define vcin(a,n) rep(i,n)cin>>a[i];//vcin(配列名),(繰り返し回数)
#define sort(s) sort(s.begin(),s.end())//昇順
#define reve(s) reverse(s.begin(),s.end())//反転
#define please return
#define AC 0
#define Inf 2147483647//int最大
#define llInf 9223372036854775807//llint最大
#define rapid cin.tie(0);ios::sync_with_stdio(false)
#define pi 3.1415926535897932384626//pi
#define nine 1000000000//10^9
#define print(a) printf("%.15f\n",a)

using namespace std;

typedef vector<int> vint;
typedef long double ldouble;
typedef vector<string> vstr;
typedef vector<char> vchar;
typedef vector<double> vdou;
typedef vector<double> vdouble;
typedef long long int llint;
typedef pair<int, int> pint;
typedef pair<llint, llint> pllint;
typedef vector<llint> vllint;
typedef vector<pint> vpint;
typedef vector<pair<llint, llint>> vpllint;
typedef vector<vector<int>> vvint;
typedef vector<vector<char>> vvchar;
typedef vector<vector<double>> vvdouble;
typedef vector<vector<llint>> vvllint;
typedef vector<vector<string>> vvstr;
typedef vector<vector<bool>> vvbool;
typedef vector<vector<pint>> vvpint;
typedef vector<bool> vbool;

long long GCD(long long a, long long b) {
	if (b == 0) return a;
	else return GCD(b, a % b);
}

long long LCM(long long a, long long b) {
	return a * b / GCD(a, b);
}

unsigned GetDigit(unsigned num) {
	return std::to_string(num).length();
}

int tow(int n) {//2のn乗
	if (n == 0)return 1;
	int x = tow(n / 2);
	x *= x;
	if (n % 2 == 1)x *= 2;
	return x;//@domino
}

int KETA(int n) { //Sum of Each Digit
	int sum = 0;
	while (n > 0) {
		sum += n % 10; n /= 10;
	}
	return sum;
}

unsigned ND(unsigned num) {//Number of Digits
	return std::to_string(num).length();//outmax=10
}

bool KIBN(string s) {
	rep(i, s.size() / 2) {
		if (s[i] != s[s.size() - 1 - i])return false;
	}
	return true;
}

bool inte(double n) {//整数かどうかの判定
	if (ceil(n) == floor(n)) {//切り上げ関数,切り下げ関数
		return true;
	}
	else return false;
}

// (char)toupper(a[n])=文字列のn文字目を大文字で出力

// pow(a,b)=aのb乗

//グローバル関数
int a = 0, n = 0, x = 0, y = 0, ans = 0, cnt = 0, sum = 0;
string s = "";

int main(void) {
	rapid;

	int a, b, m;
	cin >> a >> b >> m;
	vint A(a);
	vcin(A, a);
	vint B(b);
	vcin(B, b);
	int ans = Inf;
	rep(i, a) {
		ans = min(ans, A[i]);
	}
	int q = Inf;
	rep(i, b) {
		q = min(B[i], q);
	}
	ans += q;
	rep(i, m) {
		int x, y, c;
		cin >> x >> y >> c;
		ans = min(ans, A[x-1] + B[y-1] - c);
	}
	cout << ans << rt;

	please AC;
}


//参考：---;