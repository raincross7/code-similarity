/*やったぜ。　投稿者：変態糞土方 (8月16日（水）07時14分22秒)

昨日の8月15日にいつもの浮浪者のおっさん（60歳）と先日メールくれた汚れ好きの土方のにいちゃん

（45歳）とわし（53歳）の3人で県北にある川の土手の下で盛りあったぜ。

今日は明日が休みなんでコンビニで酒とつまみを買ってから滅多に人が来ない所なんで、

そこでしこたま酒を飲んでからやりはじめたんや。

3人でちんぽ舐めあいながら地下足袋だけになり持って来たいちぢく浣腸を3本ずつ入れあった。

しばらくしたら、けつの穴がひくひくして来るし、糞が出口を求めて腹の中でぐるぐるしている。

浮浪者のおっさんにけつの穴をなめさせながら、兄ちゃんのけつの穴を舐めてたら、

先に兄ちゃんがわしの口に糞をドバーっと出して来た。

それと同時におっさんもわしも糞を出したんや。もう顔中、糞まみれや、

3人で出した糞を手で掬いながらお互いの体にぬりあったり、

糞まみれのちんぽを舐めあって小便で浣腸したりした。ああ～～たまらねえぜ。

しばらくやりまくってから又浣腸をしあうともう気が狂う程気持ちええんじゃ。

浮浪者のおっさんのけつの穴にわしのちんぽを突うずるっ込んでやると

けつの穴が糞と小便でずるずるして気持ちが良い。

にいちゃんもおっさんの口にちんぽ突っ込んで腰をつかって居る。

糞まみれのおっさんのちんぽを掻きながら、思い切り射精したんや。

それからは、もうめちゃくちゃにおっさんと兄ちゃんの糞ちんぽを舐めあい、

糞を塗りあい、二回も男汁を出した。もう一度やりたいぜ。

やはり大勢で糞まみれになると最高やで。こんな、変態親父と糞あそびしないか。

ああ～～早く糞まみれになろうぜ。

岡山の県北であえる奴なら最高や。わしは163*90*53,おっさんは165*75*60、や

糞まみれでやりたいやつ、至急、メールくれや。

土方姿のまま浣腸して、糞だらけでやろうや。*/
#include "bits/stdc++.h"
#define rep(i,n) for(int i = 0; i < n; i++)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define llMAX numeric_limits<long long>::max()
#define intMAX numeric_limits<int>::max()
#define llMIN numeric_limits<long long>::min()
#define intMIN numeric_limits<int>::min()
#define d_5 100000
#define d9_7 1000000007
#define vll vector<vector<long long>>
#define vl vector<long long>
#define vi vector<int>
#define vii vector<vector<int>>
#define pb push_back
#define pf push_front
#define ld long double
int main(void){
  int n,m;
  cin>>n>>m;
  vi a(m);
  rep(i,m){
    cin>>a[i];
  }
  vi numneed={intMAX,2,5,5,4,5,6,3,7,6};
  sort(a.begin(),a.end());
  vi dp=vi(n+1,intMIN);
  dp[0]=0;
  rep(i,n){
    int tmpmax=intMIN;
    rep(j,m){
      if((i+1)-numneed[a[j]]>=0){
        tmpmax=max(dp[i+1-numneed[a[j]]]+1,tmpmax);
      }
    }
    dp[i+1]=tmpmax;
  }
  vi finalans(dp[n],-1);
  int tmpn=n;
  rep(j,dp[n]){
  //cout<<"f "<<j<<" ";
    rep(i,m){
      if(tmpn-numneed[a[i]]>=0){
        if(dp[tmpn-numneed[a[i]]]==dp[tmpn]-1){
          finalans[j]=a[i];
        }
      }
    }
    tmpn-=numneed[finalans[j]];

  }
  rep(i,dp[n]){
    cout<<finalans[i];
  }
  cout<<endl;
  return 0;
}
