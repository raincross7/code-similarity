	#include <bits/stdc++.h>
	#include <ext/pb_ds/assoc_container.hpp>
	#include <ext/pb_ds/tree_policy.hpp>
	#define PI 				acos(-1)
	#define mp				make_pair
	#define pb				push_back
	#define all(a)			(a).begin(), (a).end()
	#define sz(a)			a.size()
	#define srt(a)			sort(all(a))
	#define mem(a, h)		memset(a, (h), sizeof(a))
	#define f 				first
	#define s 				second
	#define MOD1			998244353
	#define fore(i, b, e)	for(int i = b; i < e; i++)
	#define forg(i, b, e, m)	for(int i = b; i < e; i+=m)
	int in(){int r=0,c;for(c=getchar();c<=32;c=getchar());if(c=='-') return -in();for(;c>32;r=(r<<1)+(r<<3)+c-'0',c=getchar());return r;}

	using namespace std;
	using namespace __gnu_pbds;

	typedef long long 		ll;
	typedef unsigned long long 		ull;
	typedef pair<int, int>  ii;
	typedef vector<int>     vi;
	typedef vector<ii>      vii;
	typedef vector<ll>      vll;
	typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
	//find_by_order kth largest  order_of_key <
	const int tam = 100010;
	const int MOD = 1e9+7;
	const double EPS = 1e-9;

	int main()
	{
		ios::sync_with_stdio(0); cin.tie(0);
		//freopen("qwe.txt", "r", stdin);
		int a, b;
		cin>>a>>b;
		char res[100][100];
		fore(i, 0, 50)
			fore(j, 0, 100)
				res[i][j] = '.';
		fore(i, 50, 100)
			fore(j, 0, 100)
				res[i][j] = '#';

		a--, b--;
		int x = 0, y = 0;
		while(b > 0)
		{
			res[y][x] = '#';
			b--;
			x += 2;
			if(x >= 100)
				x = 0, y+=2;
		}
		x = 0, y = 51;
		while(a > 0)
		{
			res[y][x] = '.';
			a--;
			x += 2;
			if(x >= 100)
				x = 0, y+=2;
		}
		cout<<100<<' '<<100<<'\n';
		fore(i, 0, 100)
		{
			fore(j, 0, 100)
				cout<<res[i][j];
			cout<<'\n';
		}
		return 0;
	}

	// read the question correctly (is y a vowel? what are the exact constraints?)
	// look out for SPECIAL CASES (n=1?) and overflow (ll vs int?) ARRAY OUT OF BOUNDSS2