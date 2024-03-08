#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define REP(i,s,n) for(int i=s;i<n;i++)
#define NUM 2520
#define INF (1LL<<50)
#define DEBUG 0
#define mp(a,b) make_pair(a,b)
#define SORT(V) sort(V.begin(),V.end())
#define PI (3.141592653589794)
#define TO_STRING(VariableName) # VariableName
#define LOG(x) if(DEBUG)cout<<TO_STRING(x)<<"="<<x<<" "<<endl;
#define LOG2(x,y) if(DEBUG)cout<<TO_STRING(x)<<"="<<x<<" "<<TO_STRING(y)<<"="<<y<<endl;
#define LOG3(x,y,z) if(DEBUG)cout<<TO_STRING(x)<<"="<<x<<" "<<TO_STRING(y)<<"="<<y<<" "<<TO_STRING(z)<<"="<<z<<endl;
#define LOG4(w,x,y,z) if(DEBUG)cout<<TO_STRING(w)<<"="<<w<<" "<<TO_STRING(x)<<"="<<x<<" "<<TO_STRING(y)<<"="<<y<<" "<<TO_STRING(z)<<"="<<z<<endl;

template<class T>bool chmax(T & a, const T & b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }


const string YES = "Yes";
const string NO = "No";

map<char,char> toS;
map<char,char> toT;

void func(std::string S, std::string T){

    REP(i,0,min(S.size(),T.size())){
        char s = S[i];
        char t = T[i];

        if(toS.count(t)==0){
            toS[t] = s;
        }
        else{
            if(toS[t] != s){
                cout<<"No"<<endl;
                return;
            }
        }
        if(toT.count(s)==0){
            toT[s] = t;
        }
        else{
            if(toT[s] != t){
                cout<<"No"<<endl;
                return;
            }
        }
    }

    cout<<"Yes"<<endl;
}

int main(){
    // cout << fixed << setprecision(5);

    std::string S;
    std::cin >> S;
    std::string T;
    std::cin >> T;
    func(S, T);
    return 0;
}
