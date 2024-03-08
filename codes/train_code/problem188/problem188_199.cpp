#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define PB push_back
#define MP make_pair
#define LL long long
//#define int LL
#define FOR(i,a,b) for(int i = (a); i <= (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define RE(i,n) FOR(i,1,n)
#define REP(i,n) FOR(i,0,(int)(n)-1)
#define R(i,n) REP(i,n)
#define VI vector<int>
#define PII pair<int,int>
#define LD long double
#define FI first
#define SE second
#define st FI
#define nd SE
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define M_PI 3.14159265358979323846
template<class C> void mini(C& _a4, C _b4) { _a4 = min(_a4, _b4); }
template<class C> void maxi(C& _a4, C _b4) { _a4 = max(_a4, _b4); }

template<class TH> void _dbg(const char *sdbg, TH h) { cerr << sdbg << '=' << h << endl; }
template<class TH, class... TA> void _dbg(const char *sdbg, TH h, TA... a) {
	while (*sdbg != ',')cerr << *sdbg++; cerr << '=' << h << ','; _dbg(sdbg + 1, a...);
}

template<class T> ostream& operator<<(ostream& os, vector<T> V) {
	os << "["; for (auto& vv : V) os << vv << ","; os << "]";
	return os;
}

ostream& operator<<(ostream& os, vector<bool> V) {
	os << "[";
	REP(i, 26) {
		if (V[i]) {
			os << (char)('a' + i) <<",";
		}
	}
	os << "]";
	return os;
}
template<class L, class R> ostream& operator<<(ostream& os, map<L,R> V) {
	os << "["; for (auto& vv : V) os << vv << ","; os << "]";
	return os;
}
template<class L, class R> ostream &operator<<(ostream &os, pair<L, R> P) {
	return os << "(" << P.st << "," << P.nd << ")";
}


#ifdef LOCAL
#define debug(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) (__VA_ARGS__)
#endif

template<typename Out>
void split(const std::string &s, char delim, Out result) {
	std::stringstream ss(s);
	std::string item;
	while (std::getline(ss, item, delim)) {
		*(result++) = item;
	}
}

std::vector<std::string> split(const std::string &s, char delim) {
	std::vector<std::string> elems;
	split(s, delim, std::back_inserter(elems));
	return elems;
}

void trim(string & s) {
	int idx = 0;
	int n = s.size();
	REP(i, n) {
		if (s[i] != ' ' && s[i] != '\t') {
			s = s.substr(i);
			break;
		}
	}
	while (!s.empty()) {
		if (s.back() == ' ' || s.back() == '\t') {
			s.pop_back();
		}
		else {
			break;
		}
	}
}



int32_t main(int32_t argc, char ** argv) {
	ios_base::sync_with_stdio(0);
	string s;
	cin >> s;
	string res;
	unordered_map<int, int> m;
	int h = 0;
	int nonEmpty = 0;
	int lastRes = INT_MAX;
	for (char c : s) {
		int off = c - 'a';
		h ^= 1 << off;
		if (h & (1 << off)) {
			nonEmpty++;
		}
		else {
			nonEmpty--;
		}
		if (nonEmpty <= 1) {
			m[h] = 1;
			lastRes = 1;
			continue;
		}
	nxt:;
		lastRes = INT_MAX;
		if (m.count(h)) {
			lastRes = m[h] + 1;
		}
		REP(i, 26) {
			h ^= 1 << i;
			if (m.count(h)) {
				int v = m[h];
				mini(lastRes, v + 1);
				h ^= 1 << i;
				if (m.count(h)) {
					mini(m[h], v + 1);
				}
				else {
					m[h] = v + 1;
				}
				h ^= 1 << i;
			}
			h ^= 1 << i;
		}
	}
	cout << lastRes;
}