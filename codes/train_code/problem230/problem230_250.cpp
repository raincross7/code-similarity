#include <iostream>
#include <algorithm> // next_permutation
#include <iomanip>
#include <cmath>
#include <vector>
#include <sstream>
#include <string>
#include <cstdio>
#include <stack>
#include <queue>
#include <list>
#include <numeric> //accumulate
#include <unordered_map> //???????????\??¢??°

using namespace std;

//???????????°??????TEST????????????????????¬???????????????????????????????????¢????????????
//#define TEST //*******************************************************************************************************************************************

//?????????????????¨??§?????\????????????????????????????????°?????????????¨???????????????????dout???????????????????????§???????????¬??????????????????????????????????????????
#ifdef TEST
    #define dout cout
#else
    stringstream dummy; //???????????°??????dout?????????????????????????????????
    #define dout dummy.str(""); dummy.clear(stringstream::goodbit); dummy //dummy?????????????????????????????????????????¨?????¢?????¢???????????????
    //???????????¨??????????????????goodbit?????????????????????????????¨???????????´????????????????????????????????¨?????°?????????????????§???????????????????????????????????? http://d.hatena.ne.jp/linden/20060427/p1
#endif


#define disp(A) dout << #A << " = " << (A) << endl
#define disP(A) dout << (A) << " "
#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)

#define dispAll(A,n) dout << #A << " = "; rep(j, 0, (n)) {disP(A[j]);} dout << endl









////////////////////////////////////////
//AIZU
//Convenient Location
//
//??????????????????
//
//WA??§??????????????????????????¢??§???????????????
//????????????input????????¬???????????????????????????
////////////////////////////////////////

const int INF = 1e9-1;

int main(void) {
    
    int N = 10; //????????°????????§??§???10
    int M; //?????°
    int a, b, c;
    
    unsigned long long d[N][N]; //0~9??????????????????
    unsigned long long sumTotalCost[N]; //sumTotalCost[i] = i????????§?????????????????????????????????????????¢?????????????????????????????????????°???????ans??¨??????
    
    
    while(1) {
        cin >> M;
        if( M== 0 ) break;
        
        //initialization
        rep(i,0,N) {
            rep(j,0,N) {
                d[i][j] = (i==j ? 0 : INF);
            }
        }
        
        rep(i,0,N) {
            sumTotalCost[i] = 0;
        }
        
        
        rep(i,0,M) {
            cin >> a >> b >> c; //??????a??????b?????§????????????t
            
            d[a][b] = d[b][a] = c;
        }
        
        //test display
        rep(i,0,N) {
            disP(i);
            dispAll(d[i], N);
        }
        dout << endl;
        
        //Warshall Floyd Algorithm
        rep(k,0,N) {
            rep(i,0,N) {
                rep(j,0,N) {
                    d[i][j] = min( d[i][j], d[i][k] + d[k][j] );
                }
            }
        }
        
        //test display
        rep(i,0,N) {
            disP(i);
            dispAll(d[i], N);
        }
        dout << endl;
        
        
        //??????????????????????????????????????????????±???????
        rep(i,0,N) {
            rep(j,0,N) {
                sumTotalCost[i] += ( d[i][j]==INF ? 0 : d[i][j] ); //INF???????????????INF??\????????°???????¶?????????????
            }
        }
        
        //test display
        dispAll(sumTotalCost, N);
        dout << endl;
        
        
        //????????????????????????????°???¨?????????????±???????
        int ans = INF;
        int ans_Origin = 0;
        rep(i,0,N) {
            if( ans > sumTotalCost[i] && sumTotalCost[i] != 0 ) { //???????????¨????????????i???sumTotal???0????????§???0?????????????????????
                ans = sumTotalCost[i];
                ans_Origin = i;
            }
        }
        
        disp(ans_Origin);
        dout << "??????????????¨??????????????????????????????????°???¨???????????????????????????????????????\n";
        disp(ans);
        dout << "??¨?????????\n";
        
        cout << ans_Origin << " " << ans << endl;
        
    }
    
    return 0;
}