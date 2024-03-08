#include<bits/stdc++.h>
#define pb           push_back
#define pii          pair<int,int>
#define vi           vector<int>
#define vpii         vector<pair<int,int>>
#define gph          map<int, vector<int>>
#define mp           make_pair
#define FOR(i, n) for (int i = 0; i <  (int)(n); i++)
#define FOR1(i, n) for (int i = 1; i <= (int)(n); i++)
#define FORD0(i, n) for (int i = (int)n; i >= 0; i--)
#define FORD1(i, n) for (int i = (int)n; i >= 1; i--)
#define FORS(i, n) for(; i < (int)(n); i++)
#define debug(X) { cout << #X << " = " << (X) << endl; }
#define printArr(A,n) { cout << #A << " = "; FOR(i,n) cout << A[i] << ' '; cout << endl; }
using namespace std;
//#define int long long int
int lift[(int)1e5 + 10][20] = {0};
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int n;cin >> n;
    vi dis(n);
    FOR(i, n)cin >> dis[i];
    int j = 0;
    int l; cin >> l;
 //   cout << endl << endl;
    FOR(i, n){
       while(j < dis.size()- 1 && dis[j+1] <= dis[i] + l){
        j++;
       } 
       lift[i][0] = j;
//       cout << i << " " << j <<endl;
    }
    for(int i = 1; i <= 16; i++){
        FOR(j, n){
            lift[j][i] = lift[lift[j][i-1]][i-1];
        } 
    }
    //debug("pre done");
    int q;cin >> q;
    int i;
    FOR(xx, q){
        cin >> i >> j;
        if(j < i)swap(i, j);
        i--, j--;
        int ans = 0;
        int bit = 16;
        while(bit >= 0 && i < j){
           if(lift[i][bit] < j){
            i = lift[i][bit];
            ans += (1 << bit);
           } 
           bit--;
        }
        cout << ans + 1;
        cout << "\n";
    }
}


