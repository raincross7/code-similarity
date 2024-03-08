#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
#include <numeric>
#include <iomanip>
#define fi first
#define se second
#define fcout(n) cout<<fixed<<setprecision((n))
#define cinl(str) getline(cin,(str))
using namespace std;
bool value(int y,int x,int R,int C){return 0<=y&&y<R&&0<=x&&x<C;}
typedef pair<int,int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
double pie=acos(-1);
int INF=1000000007;
int dx[4] = { 0,-1,0,1 };
int dy[4] = { -1,0,1,0 };


int main() {
	string s;
	int x=0;
	stack<int> st;
	while(true){
		cinl(s);
		if(s==".") return 0;
        while(st.size() !=0 ){
        	st.pop();
        }	
        x=0;
        for(int i=0;i<s.size();i++){
        	if(s[i]=='('){
        		st.push(1);
        	}
        	if(s[i]=='['){
        		st.push(2);
        	}
        	if(s[i]==')'){
        		if(st.size()==0){
        			x=1;
        			break;
        		}
        		if(st.top()==1){
        			st.pop();
        		}
        		else{
        			x=1;
        			break;
        		}
        	}
        	if(s[i]==']'){
        		if(st.size()==0){
        			x=1;
        			break;
        		}
        		if(st.top()==2){
        			st.pop();
        		}
        		else{
        			x=1;
        			break;
        		}
        	}
        }
        if(st.size()!=0) x=1;
        if(x==0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
	}
}