/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author
 */

#include <bits/stdc++.h>
#define FOR(i, a, b) for(int (i)=(a);(i)<(b);++(i))
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) FOR(i, 1, n+1)
#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define LEN(x) (int)(x).size()
#define DUMP(x) cout<<#x<<"="<<(x)<<endl;
#define pb push_back
#define eb emplace_back
using namespace std;
typedef long long lint;
typedef pair<int, int> pii;
typedef pair<lint, lint> pll;
typedef vector<int> vi;
typedef vector<lint> vl;
typedef vector<char> vc;
typedef vector<vector<int>> vii;
typedef vector<vector<lint>> vll;
typedef vector<vector<char>> vcc;

class ATwoIntegers {
public:
    int X, Y;
    void input(std::istream& in, std::ostream& out){
        ios_base::sync_with_stdio(false);
        in>>X>>Y;
    }

    void solve(std::istream& in, std::ostream& out){
        input(in, out);
        if(X%Y==0) out<<"-1\n";
        else out<<X<<'\n';
    }
};


int main() {
	ATwoIntegers solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
