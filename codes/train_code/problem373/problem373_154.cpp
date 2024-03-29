#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
  ll N,K;
  cin>>N>>K;
  //ボーナス最優先かポイント最優先、のほかに、塩梅があるはず
  //N=Kなら全とり
  //K=1ならポイント
  //K=2なら、2番目にポイント高いやつか、もし種類の違うのがあればそれを考慮して2番目に高い奴か。
  //K=3なら、3番目にポイント高い奴か、種類が2なのか3になるのか。DP？
  //1種類、2種類、3種類、ごとの最高点を更新とか。むりそう。
  //別種類でポイントが高いものをとるか、種類関係なくポイントを取るか、の2択か。
  //複合の場合どうするか･･･。
  //10万種類あって、種類しばりしたとして、10万Ck通りは無理。
  //逆算的に考える
  //何種類合って、何個とれるのか。10種合って8個だったら8種類の64点ボーナスが最大。
  //7種にすると15点減点。8位と7位の差が15かどうか確認
  //そもそも8種とる時点でどれだけロストしてるかは未知数か
  //基準がいる？として、ポイント高い順にとってみる
  //いれかえするとき、種類被りの判定結構大変･･･。
  //少なくともポイントが一番高いやつ1個の獲得は確実。
  //次とるやつはポイントか、ボーナス＋3で比較、でOKか。
  //そうなると、ボーナス有利のやつがあとからきいてきて既存順位のいれかえまでおきうる。。
  //mapで特徴づけ？ポイントソートしたい、二次元配列か。種類はbool配列か
  //種類ごとに、個数と全得点を累積和で用意するか。
  //とる、とらない、の二択？
  //二次元配列で、ポイントと種類とでソート。
  
  //とりあえず最大ポイントでとる
  //種類かぶりの最小をはずして、別種類のものをほかからとる。最大値評価
  //全種類になるまで実施して終了
  
  //mapで種類と個数を管理？
  //二次元配列でポイントと種類を管理？
  //入力時に何種類あるかをboolで管理？
  //もう使ってる種類はpriorityqueueから省きたい
  
  //指定個数分、最大ポイントからとる。
  //そのとき、何の種類をとったかも把握。個数も。map管理がいいかも
  //同じ種類のあまりものはすべて除外
  //それ以外のうち、その種類の中で値が最大ポイントのものだけpriority_queueにいれる
  //指定個数までもしくは全種類になるまで入れ替え。順次最大値評価してクリア。
  
  vector<vector<ll>> Z(N,vector<ll>(2,0));
  for(int i=0; i<N; i++){
    ll t,d;
    cin>>t>>d;
    Z[i][0]=t;
    Z[i][1]=d;
  }
  sort(Z.begin(), Z.end(), [](auto& x, auto& y){return x[1] > y[1];});
  unordered_map<int,int> mp;
  ll type=0, pnt=0, ans=0;
  for(int i=0; i<K; i++){
    int tmp;
    pnt+=Z[i][1];
    mp[Z[i][0]]++;
    if(mp[Z[i][0]]==1)
      type++;
  }
  ans=pnt+type*type;
  priority_queue<int> pq;
  for(int i=0; i<N; i++){
    if(mp[Z[i][0]]>0)
      continue;
    pq.push(Z[i][1]);
    mp[Z[i][0]]=1;
  }
  for(int i=K-1; i>=0; i--){
    if(mp[Z[i][0]]<=1)
      continue;
    if(pq.empty())
      break;
    pnt-=Z[i][1];
    pnt+=pq.top();
    pq.pop();
    mp[Z[i][0]]--;
    type++;
    ans=max(ans, pnt+type*type);
  }
  cout<<ans<<endl;
}
