#include<vector>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#include<queue>
#include <sstream>
#include <set>
#include<stack>

const long long MOD = 1000000007;
using namespace std;
typedef long long llong;

//int isalpha(char ch): ch がアルファベットなら true を返す
//int isdigit(char ch): ch が数字なら true を返す
//int islower(char ch): ch が小文字なら true を返す
//int isupper(char ch): ch が大文字なら true を返す
//int tolower(char ch): ch の小文字を返す
//int toupper(char ch): ch の大文字を返す

//string型
//size()	文字数を返す
//Insert()	（指定した場所に）文字・文字列を挿入する
//erase()	（指定した場所の）文字・文字列を削除する
//clear()	すべての文字を削除する
//substr()	文字列の（指定した）部分文字列を返す
//replace()	（指定した）部分文字列を新しい文字列に置換する
//c_str()変換
//文字列の比較は、<=や==などを使え
//replace関数を使い、簡単に文字列を置換
//リバース関数：reverse(str.begin(), str.end());
//map<type, type> dict;で宣言
//グラフ理論用変数
//vector<vector<llong> > graph(N);

//ソート
//降順sort(v.begin(), v.end(), std::greater<Type>());

//大文字から小文字へんかん
//w[i] = w[i]-'A'+'a';

//vector
//assignメソッド　引数：サイズ、値
//与えられたサイズと値でvectorを初期化する

//queueクラス
//find()次に取り出す値の表示をする。
//pop()値を取り出す。戻り値はなし
//push()キューに値をプッシュする

//priority_queueクラス

//切り上げ
//ceil
//floor

int main(){
    llong N;
    cin >> N;
    string S;
    cin >> S;
    llong ans=0;
    vector<llong> R_CNT(N+1, 0);
    vector<llong> G_CNT(N+1, 0);
    vector<llong> B_CNT(N+1, 0);
    vector<llong> R_Table(N, 0);
    vector<llong> G_Table(N, 0);
    vector<llong> B_Table(N, 0);

    for(int i=0; i<N; i++){
        if(S[i]=='R'){
            R_Table[i] = 1;
            continue;
        }
        if(S[i]=='G'){
            G_Table[i] = 1;
            continue;
        }
        if(S[i]=='B'){
            B_Table[i] = 1;
            continue;
        }  
    }
    for(int i=0; i<N; i++){
        R_CNT[i+1] = R_CNT[i]+R_Table[i];
        G_CNT[i+1] = G_CNT[i]+G_Table[i];
        B_CNT[i+1] = B_CNT[i]+B_Table[i];
    }
    for(int i=0; i<N-2; i++){
        for(int j=i+1; j<N-1; j++){
            if(S[i]=='R' && S[j]=='G'){
                ans = ans + B_CNT[N]-B_CNT[j];
                if((j+j-i)<N&&S[j+j-i]=='B'){
                    ans = ans - 1;
                }
            }
            if(S[i]=='G' && S[j]=='R'){
                ans = ans + B_CNT[N]-B_CNT[j];
                if((j+j-i)<N&&S[j+j-i]=='B'){
                    ans = ans - 1;
                }
            }
            if(S[i]=='R' && S[j]=='B'){
                ans = ans + G_CNT[N]-G_CNT[j];
                if((j+j-i)<N&&S[j+j-i]=='G'){
                    ans = ans - 1;
                }
            }
            if(S[i]=='B' && S[j]=='R'){
                ans = ans + G_CNT[N]-G_CNT[j];
                if((j+j-i)<N&&S[j+j-i]=='G'){
                    ans = ans - 1;
                }
            }
            if(S[i]=='B' && S[j]=='G'){
                ans = ans + R_CNT[N]-R_CNT[j];
                if((j+j-i)<N&&S[j+j-i]=='R'){
                    ans = ans - 1;
                }
            }
            if(S[i]=='G' && S[j]=='B'){
                ans = ans + R_CNT[N]-R_CNT[j];
                if((j+j-i)<N&&S[j+j-i]=='R'){
                    ans = ans - 1;
                }
            }
        }

    }
    cout << ans << endl;
    return 0;
}