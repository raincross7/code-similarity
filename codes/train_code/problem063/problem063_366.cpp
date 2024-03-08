#include <bits/stdc++.h>
using namespace std;
int c[1000005];

//n以下の整数について最小の素因数を求めた結果の配列を返す
//min_factor[i]はiを割り切る最小の数（iの素因数のうち最小のもの）
//min_factor[i] == iならiは素数（i=0, 1のときを除く）
vector<int> sieve(int n){
    //素数候補を管理する配列
    vector<int> min_factor(n+1);
    //2以上の数を一度素数候補に入れる
    for(int i = 0; i <= n; i++) min_factor[i] = i;
    //それぞれの数について最小の素因数を求める
    for(int i = 2; i*i <= n; i++){
        if(min_factor[i] == i){
            for(int j = 2; i*j <= n; j++){
                if(min_factor[i*j] > i){
                    min_factor[i*j] = i;
                }
            }
        }
    }
    return min_factor;
}

//配列min_factorを使ってmを素因数分解する
//配列ansにはmの素因数が小さい順に格納される
vector<int> factor(vector<int> &min_factor, int m){
    vector<int> ans;
    while(m > 1){
        ans.push_back(min_factor[m]);
        m /= min_factor[m];
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)cin >> a[i];
    sort(a,a+n);
    vector<int> min_factor = sieve(a[n-1]);
    int flag=0;
    for(int i=0;i<n;i++){
        vector<int> ans = factor(min_factor, a[i]);
        int pre=1;
        for(auto u:ans){
            if(u!=pre)c[u]++;
            if(c[u]==n){
                cout << "not coprime";
                return 0;
            }
            if(c[u]>1)flag++;
            pre=u;
        }
    }
    if(flag==0){
        cout << "pairwise coprime";
        return 0;
    }
    else{
        cout << "setwise coprime";
        return 0;
    }
}