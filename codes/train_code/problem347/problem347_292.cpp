#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
  //最小本数をマックスまで取る。
  //同じ本数の場合は数字が大きいものだけ。
  //priority_queueで1つずつ出して出力っぽい。桁数的に。配列でもいいけど
  //ぴったりとれるか判定が難しい･･･。
  //1つの数字をマッチに戻して、最小本数以外で満たす組み合わせがあるか都度確認か
  //より少ない本数のものを最大とって、それ以降の探索
  //だめなら放流して次の数、とか
  //あまり数、
  //3,7とか。あまり1,4,7で7で判定
  //4,6,7とか。余り1,5,9,13で67判定、あまり2,6はんてい,あまり3、7判定
  //ぴったりとれる組み合わせがわからぬ
  //ひらめかないな
  //457で、57でとりうる組み合わせ。5,7,10,12,14,15くらい用意するとか
  //数字がわかったところでそれがどんな組み合わせかわからねえ
  //0,0 1,0 0,1 1,1 2,0 0,2
  //あまりを出す？1とか2とか。3とか。
  //2,5,7だったときに0,1,1になるか。5をとるべきが判定不能
  //4,5,7 0,1,3になるもし余りが1だったら5、3なら7をとる。
  //4,6,7で0,2,3。４ふえたときにずれるからだめ。
  //ひらめかないなあ
  //ぴったりとる、が鬼門。
  //はじめにひくか。
  //使用本数出して、最小以外のものの組み合わせをある程度出す。
  //1個選ぶ場合、2個選ぶ場合。最大2個までかな。
  //3,5,6,7とか。14がきたら、5ひいて3の倍数。16がきたら、7ひいて３のばいすう
  //11がきて、65をとるか74をとるか迫られたとき、つむな。かならず最小をとればいいわけでもなさそうだ
  //最小使用本数の倍数にあるときは、それを並べるのが正解
  //そうじゃないとき。
  //13で4,6,7は、67をとる。しかし444+1で3桁まで視野にはいってしまう
  //444+1で出来ない４けた
  //44+5でできない3けた
  //4+9でできない2けた
  //13で67ができたみたいな？
  //14のときは？
  //4442
  //446で完
  //11のとき
  //443でできない
  //47でできた。しかし56が答えだったら終了
  //使える本数で最大組み合わせをだしておくべきか
  //4=4,5=0,6=6,7=7,8=44,9/4=2で2桁、みたいなことか
  //13/4=3,445,
  //15/4=3,447,456とか。この判定どうする
  //何桁なのか定まる必要がある。
  //4,6,7において、9=0 10=2 11=2 12=3 13=2 14=3
  //13の特殊性･･･。
  //4=1,8=2,12=3,16=4･･･としておけば、4+7no11=2,DP的に桁数だせそう
  //9通り*10^4ならすべて検査できそう
  //4,6,7なら、まず4の倍数。次に6+4の倍数。次に7+4の倍数、次に6+6+4の倍数、、、
  //法則違うな。全部やるか。4,6,7, 4+[4,6,7], 6+[4,6,7], 7+[4,6,7];
  //D[4]=1,D[6]=1,D[7]=1が初期として。。。どう展開させるのか。
  //D[10]=D[6]+1;
  //D[4n]=D[4(n-1)]+1;
  //D[i]=D[i-n]+1; nは入りうるマッチ数。0<=i<=10000でうめられるかも
  //桁数とったら。数字が何かを探す。
  //D[N-A]=D[N]-1になっているようなもののうち、Aの最も数字の大きい値をとる、でいける。
  
  ll N,M,A;
  cin>>N>>M;
  vector<int> D(N+100,-1000000),Z(0,0);
  D[0]=0;
  int set[10]={0,2,5,5,4,5,6,3,7,6};
  unordered_map<int,int> MtoP;
  for(int i=0; i<M; i++){
    int A;
    cin>>A;
    MtoP[set[A]]=max(MtoP[set[A]],A);
    Z.push_back(set[A]);
  }
  sort(Z.begin(), Z.end());
  Z.erase(unique(Z.begin(), Z.end()), Z.end());
  int x=Z.size();
  for(int i=0; i<x; i++)
    D[Z[i]]=1;
  for(int i=0; i<=N; i++){
    for(int j=0; j<x; j++){
      if(i-Z[j]<0)
        continue;
      D[i]=max(D[i],D[i-Z[j]]+1);
    }
  }
  //Zの順番を、数字が大きい順に並べ替えたい
  vector<vector<int>> Y(x,vector<int>(2,0));
  for(int i=0; i<x; i++){
    Y[i][0]=Z[i];
    Y[i][1]=MtoP[Z[i]];
  }
  sort(Y.begin(), Y.end(), [](auto& h, auto&k){return h[1] > k[1];});
  while(N>0){
    for(int j=0; j<x; j++){
      if(N-Y[j][0]<0)
        continue;
      if(D[N]==D[N-Y[j][0]]+1){
        N-=Y[j][0];
        cout<<Y[j][1];
        break;
      }
    }
  }
  cout<<endl;
}
