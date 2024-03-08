#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<(n); i++)
#define reps(i,x,n) for(int i=x; i<(n); i++)
#define rrep(i,n) for(int i=(n)-1; i>=0; i--)
#define all(X) (X).begin(),(X).end()
#define X first
#define Y second
#define pb push_back
#define eb emplace_back

using namespace std;
typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }

template<class A, size_t N, class T> void Fill(A (&a)[N], const T &v){ fill( (T*)a, (T*)(a+N), v ); }

const ll INF = 1e9+7;


int main(){
	//ios_base::sync_with_stdio(false);
	ll N, A, B;

	cin >> N >> A >> B;

	ll rem = N - B - A + 1;
	if( rem < 0 || rem > (B-1) * (A-1) ){
		cout << -1 << endl;
		return 0;
	}

	int pos = N;
	rep(i,B-1){
		if(rem > 0){
			vector<int> out;
			rep(i,A-1) if(rem > 0){
				out.push_back( pos-- );
				rem--;
			}
			out.push_back( pos-- );
			reverse(all(out));
			for(auto t: out) cout << t << " ";
		}else{
			cout << pos-- << " ";
		}
	}
	rep(i,A) cout << i+1 << " ";
	cout << endl;

	return 0;
}