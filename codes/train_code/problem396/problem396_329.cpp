#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>
#define ll long long int
#define pb push_back
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,n) for(int i=1;i<=(n);i++)
using namespace std;

int mx8[] = {0,0,1,-1,-1,1,-1,1};
int my8[] = {-1,1,0,0,-1,-1,1,1};
int mx4[] = {1,-1,0,0};
int my4[] = {0,0,-1,1};
const int MOD = 1000000007;

int main() {
    string s; cin >> s;
    int n = s.size();
    vector<int> al;
    REP(j,26){
        bool ok = false;
        rep(i,n){
            if(j+96==s[i]) ok = true;
        }
        if(!ok){
            cout << (char) (j + 96) << endl;
            return 0;
        }
    }
    cout << "None" << endl;

}


