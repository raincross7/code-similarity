#include <bits/stdc++.h>

using namespace std;
using LL = long long;
using P = pair<int, int>;
using Tapris = tuple<int, int, int>;

#define REP(i, n) for(LL i = 0; i < n; ++i)
#define FOR(i, a, n) for(LL i = a; i < n; ++i)
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()

const int INF = (int)1e9;
const LL INFL = (LL)1e15;
const int MOD = 1e9 + 7;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

//#define int long long

/*************** using variables ***************/
string s;
/**********************************************/

signed main(){
    while(getline(cin, s), s != "."){
        stack<char> st;
        st.push('.');
        auto itr = s.begin();
        bool flag = true;
        while(*itr != '.'){
            if(*itr == '['  || *itr == '(') st.push(*itr);
            if(*itr == ']'){
                if(st.top() != '['){
                    flag = false;
                    break;
                }else{
                    st.pop();
                }
            }
            if(*itr == ')'){
                if(st.top() != '('){
                    flag = false;
                    break;
                }else{
                    st.pop();
                }
            }
            ++itr;
        }
        cout << (flag && '.' == st.top() ? "yes":"no") << endl;
        s = "";
    }
}

