#include<bits/stdc++.h>
#define ll long long
#define rep(i, n) for(int i=0;i<(n);++i)
#define per(i, n) for(int i=(n)-1;i>=0;--i)
#define repa(i, n) for(int i=1;i<(n);++i)
#define foreach(i, n) for(auto &i:(n))
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) (x).begin(), (x).end()
#define bit(x) (1ll << (x))
const ll MOD = (ll)1e9+7;
const int INF = (ll)1e9+7;
const ll INFLL = (ll)1e18;
using namespace std;
template<class t>
using vvector = vector<vector<t>>;
template<class t>
using vvvector = vector<vector<vector<t>>>;
template<class t>
using priority_queuer = priority_queue<t, vector<t>, greater<t>>;
template<class t, class u> bool chmax(t &a, u b){if(a<b){a=b;return true;}return false;}
template<class t, class u> bool chmin(t &a, u b){if(a>b){a=b;return true;}return false;}

ll modpow(ll x, ll b){
	ll res = 1;
	while(b){
		if(b&1)res = res * x % MOD;
		x = x * x % MOD;
		b>>=1;
	}
	return res;
}

ll modinv(ll x){
	return modpow(x, MOD-2);
}

bool was_output = false;
template<class t>
void output(t x){
	if(was_output)cout << " ";
	was_output = true;
	cout << x;
}

void outendl(){
	was_output = false;
	cout << endl;
}

class node{
	public:
		int key;
		node *left;
		node *right;
		node(int key):key(key), left(NULL), right(NULL){}
};

class tree{
	public:
		node *root;
		tree():root(NULL){}
};

void insert(tree &t, node *z){
	node *y = NULL;
	node *x = t.root;
	while(x!=NULL){
		y = x;
		if(z->key < x->key){
			x = x->left;
		}else{
			x = x->right;
		}
	}

	if(y==NULL){
		t.root = z;
	}else if(z->key < y->key){
		y->left = z;
	}else{
		y->right = z;
	}
}

void inorder(node *n){
	if(n==NULL)return;
	inorder(n->left);
	cout << " " << n->key;
	inorder(n->right);
}

void preorder(node *n){
	if(n==NULL)return;
	cout << " " << n->key;
	preorder(n->left);
	preorder(n->right);
}

bool find(node *n, int key){
	if(n==NULL)return false;
	if(key==n->key)return true;
	if(key < n->key)return find(n->left, key);
	return find(n->right, key);
}

int main(){
	int n;
	cin >> n;
	ll ans = 0;
	ll sum = 0;
	vector<pll> line;
	bool flag = false;
	rep(i, n){
		ll a, b;
		cin >> a >> b;
		if(a<b){
			ans += b;
			flag = true;
		}else if(a>b){
			line.emplace_back(b, a-b);
		}else{
			sum += b;
		}
	}
	sort(all(line), greater<pll>());
	line.pop_back();
	if(flag){
		foreach(i, line){
			ans += i.first;
		}
		ans += sum;
	}

	cout << ans << endl;
	return 0;
}


