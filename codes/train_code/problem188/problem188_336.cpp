////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// [Tips]
// XCodeでのEOF入力はCtrl+D
// ¥はAlt+\
// ansは結構INTの範囲2,147,483,647を超えることがあるのでlong long使っておいたほうが良い
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////
//CODE FESTIVAL 2017 qual C2017/10/22 21:00:00 ~ 2017/10/22 23:00:00
////////////////////////////////////////

//#define debug //*******************************************************************************************************************************************
#ifdef debug
#include <chrono>
#endif

#include <iostream>
#include <algorithm> // next_permutation
#include <iomanip>
#include <cmath>
#include <vector>
#include <sstream>
#include <string>
#include <cstring> //memcpy
#include <cstdio>
#include <stack>
#include <queue>
#include <list>
#include <numeric> //accumulate
//#include <map>
//#include <unordered_map> //hash func.
#include <fstream> //ifstream, ofstream
#include <iterator> //insert_iterator::inserter
//#include <bitset>

//#define NDEBUG //If NDEBUG is defined before #include <cassert>, assert will be ignored. You had better define NDEBUG when u submit the code.
#include <cassert> //assert

using namespace std;


#define dout cout
//If u wanna output to a text file instead of standard output, plz define OUTPUTFILE.
//#define OUTPUTFILE "output.txt" //*******************************************************************************************************************************************
#ifdef OUTPUTFILE
#define dout outputfile
ofstream outputfile(OUTPUTFILE);
#define OutputFilePath "/Users/Nag/Documents/Prgm/Test/DerivedData/Test/Build/Products/Debug/output.txt"
#endif


#define din cin
//If u wanna input from a text file instead of standard input, plz define INPUTFROMTEXTFILEを.
//#define INPUTFILE "input.txt" //*******************************************************************************************************************************************
#ifdef INPUTFILE
#define din inputfile
ifstream inputfile(INPUTFILE);
#endif

#define scand(A) scanf("%d", &(A))
#define scans(A) scanf("%s", (A))
#define disp(A) dout << #A << " = " << setw(3) << (A) << endl
#define disP(A) dout << setw(3) << (A) << " "
#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define dispAll(A,n) dout << #A << " = "; rep(j, 0, (n)) {disP(A[j]);} dout << endl
//#define dispAll(A,n) cout << #A << " = "; rep(j, 0, (n)) {cout << setw(3) << A[j] << " ";} cout << endl

#define sign(x) ((x)>0)-((x)<0) //x<0: -1, x=0: 0, x>0: +1
#define p(i) ((i)/2)
#define l(i) ((i)*2)
#define r(i) ((i)*2+1)
#define sibling(i) (i^1) //the other sibling of i (ex. 16^1 = 17, 17^1 = 16)
#define isRightChild(i) (i&1) // ex. 16&1 = 0, 17&1 = 1
#define isLeftChild(i) (!(i&1)) // ex. 16&1 = 1, 17&1 = 0

int dx[] = {1,-1, 0, 0, 1, 1,-1,-1}; //右左上下、右上から時計回りに右下、左下、左上
int dy[] = {0, 0,-1, 1,-1, 1, 1,-1};

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long ull;

const int INF = 1e9;//(1<<31)-1;
const ll INF_LL = (ll)9e18-1LL; //Be careful for overflow.
const ull INF_ULL = (ull)1e19-1ULL;
const int NONE = -1;
const ll MOD = (ll)1e9+7; //大きい素数の代表といえばこの人、10億7さん

const int N_MAX = 2e5+10; //num of vertex or element
const int M_MAX = 1<<26; //num of edge
const int DATA_MAX = 1010;

int N;
string S;

int dp[M_MAX];
int a[N_MAX];

int main() {
    
    //cin, coutの高速化  ＊注意：cinを使うなら全部cinで、scanfを使うなら全部scanfで統一するように！
    cin.tie(0); //cinとcoutの同期を切る
    ios::sync_with_stdio(false); //iostreamとstdioの同期を切る
    
    //read input data
    din >> S;
    N = S.size();
    
    
    //------------------------------------------------------------------------------------------
#ifdef debug
    //start timer
    auto startTime = chrono::system_clock::now();
#endif
    //------------------------------------------------------------------------------------------
    

    //init
    a[0] = 0;
    rep(i,0,N) {
        a[i+1] = a[i] ^ (1<<(S[i] - 'a'));
    }
    rep(i,0,M_MAX) {
        dp[i] = INF;
    }
    
    
#ifdef debug
    dispAll(a, N+1);
    
    dout << "    54321098765432109876543210\n";
    dout << "    zyxwvutsrqponmlkjihgfedcba\n";
    rep(i,0,N+1) {
        disP(i);
        dout << static_cast<bitset<26> >(a[i]) << " " << S.substr(0,i) << endl;
    }
#endif
    
    
    //calc. dp[]
    dp[a[0]] = 0;
    dp[a[1]] = 1;
    
    int x;
    rep(i,2,N+1) {
        
        x = 0;
        dp[a[i]] = min( dp[a[i]], dp[a[i]^x]+1);
        
        x = 1;
        rep(j,0,26) {
            dp[a[i]] = min( dp[a[i]], dp[a[i]^x]+1);
            x *= 2;
        }
        
#ifdef debug
        dout << "----------\n";
        disp(i);
        rep(i,0,N+1) {
            disP(i); dout << setw(12) << S.substr(0,i) << " dp = " << setw(3) << (dp[a[i]]==INF?999:dp[a[i]]); dout << " " << static_cast<bitset<26> >(a[i]) << endl;
        }
#endif
    }
    
    
    
    
#ifdef debug
    dout << "======= OUTPUT ==========\n";
#endif
    dout << (dp[a[N]]==0?1:dp[a[N]]) << endl;
    
    
    
    //------------------------------------------------------------------------------------------
#ifdef debug
    //stop timer
    auto endTime = chrono::system_clock::now();
    auto dur = endTime - startTime;
    auto msec = chrono::duration_cast<chrono::milliseconds>(dur).count();
    dout << fixed << setprecision(4) << (double)msec/1000 << " sec \n";
#endif
    //------------------------------------------------------------------------------------------
    
#ifdef INPUTFILE
    inputfile.close();
#endif
    
#ifdef OUTPUTFILE
    outputfile.close();
    cout << "\"" << OutputFilePath << "\"" << endl;
#endif
    
    return 0;
}

