#include<iostream>
#include<stdio.h>
#include<vector>//s1.erase(n)=文字列s1の、n文字目以降削除
#include<algorithm>//辞書順=next_permutation
#include<set>
#include<string>//char 小文字のほうが32大きい
#include<sstream>
#include<string.h>
#include<complex>
#include<time.h>
#include<random>
#include<cmath>
#include<math.h>
#include<queue>
#include<time.h>
#include<iomanip>
#include<locale>
#include<utility>//swap=数値交換
#define rt "\n"
#define rep(i,n) for(int i=0;i<n;i++)
#define rop(i,n) for(int i=1;i<=n;i++)
#define drep(i,n) for(int i=n-1;0<=i;i--)
#define drop(i,n) for(int i=n;0<i;i--)
#define yes(ans) if(ans)cout<<"yes"<<rt;else cout<<"no"<<rt;
#define Yes(ans) if(ans)cout<<"Yes"<<rt;else cout<<"No"<<rt;
#define YES(ans) if(ans)cout<<"YES"<<rt;else cout<<"NO"<<rt;
#define sec(a,b,ans) if(ans)cout<<a<<rt;else cout<<b<<rt;
#define vcin(s,n) rep(i,n)cin>>s[i];//vcin(配列名),(繰り返し回数)
#define sort(s) sort(s.begin(),s.end())//標準=昇順
#define reve(s) reverse(s.begin(),s.end())
#define asas int ans=0
#define llcncn llint cnt=0
#define llasas llint ans=0
#define str string
#define please return
#define AC 0
#define ic_a int a;cin>>a;
#define ic_b int b;cin>>b;
#define ic_s string s;cin>>s;
#define Rapid_pleaseAC_fast cin.tie(0);ios::sync_with_stdio(false)
#define Pi 3.1415926535897932384626
#define nine 1000000000

using namespace std;
typedef vector<int> vint;
typedef vector<string> vstr;
typedef vector<char> vchar;
typedef vector<double> vdou;
typedef long long int llint;
typedef pair<int, int> pint;
typedef pair<llint, llint> pllint;
typedef vector<llint> vllint;
typedef vector<pint> vpint;
typedef vector<pair<llint, llint>> vpllint;
typedef vector<vector<int>> vvint;
typedef vector<vector<char>> vvchar;
typedef vector<vector<llint>> vvllint;
typedef vector<vector<string>> vvstr;
typedef vector<vector<bool>> vvbool;
typedef vector<vector<pint>> vvpint;
typedef vector<bool> vbool;
typedef long double ld;
const ld eps = 1.0e-10; // 許容される誤差
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

int keta(int n) {
	int sum = 0;
	while (n != 0) {
		sum += n % 10; n /= 10;
	}
	return sum;//Nanashi,tRue,wai
}

/*

 (char)toupper(a[n])=文字列のn文字目を大文字で出力

  pow(a,b)=aのb乗

  */
ld mysqrtl(ld x)
{
	ld a = sqrtl((double)x); // 近似値
	do {
		a = (a + x / a) / 2.0L;
	} while (fabsl(x - a * a) > eps);
	return a;
}

//平方根を求める。sqrtより精度が高い。
//epsを変えて誤差を調整する。
int main(void) {
	Rapid_pleaseAC_fast;
	llint ans = 0, n = 0, m=1, count=0, sum = 0, ch = 0;
	llint  a, aa, aaa, rr = 0, gg = 0, bb = 0,b=0;
	llint bbb=0, bbbb=0;
	bool check = false;
	string s,out;
	vector<llint> r, g;
	char c;
	
	rep(i, 6) {
		cin >> a;
		if (a == 1)b++;
		else if (a == 2)bb++;
		else if (a == 3)bbb++;
		else bbbb++;
	}
	if (b <= 2 && bb <= 2 && bbb <= 2 && bbbb <= 2)cout << "YES" << endl;
	else cout <<"NO"<< endl;
	
	please AC;
}
