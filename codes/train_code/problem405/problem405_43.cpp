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
#include <unordered_set>
#define rep(i,n) for(ll i = 0; i < n; i++)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define vll vector<vector<long long>>
#define vl vector<long long>
#define vi vector<int>
#define vii vector<vector<int>>
#define pb push_back
#define pf push_front
#define ld long double
#define Sort(a) sort(a.begin(),a.end())
#define cSort(a,cmp) sort(a.begin(),a.end(),cmp)
#define reSort(a) sort(a.rbegin(), a.rend())
static const ll llMAX = numeric_limits<long long>::max();
static const int intMAX = numeric_limits<int>::max();
static const ll  llMIN = numeric_limits<long long>::min();
static const int intMIN = numeric_limits<int>::min();
static const ll d_5 = 100000;
static const ll d9_7 = 1000000007;
static const ll d_9 = 1000000000;
static const double PI=3.14159265358979323846;
//<<std::setprecision(30)
template<class T>
void Printvector(std::vector<T> a){
  int size = a.size();
  rep(i,size){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
template<class T>
void Printvector(std::vector<std::vector<T>> a){
  int size = a.size();
  rep(i,size){
    int size2=a[i].size();
    rep(j,size2){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
}
ll digitpower(ll a,ll b){//aのb乗を計算
  if(b==1){
    return a;
  }else if(b==0){
    return 1;
  }
  if(b%2==1){
    ll tmp = digitpower(a,(b-1)/2);
    tmp%=d9_7;
    tmp*=tmp;
    tmp%=d9_7;
    tmp*=a;
    return (tmp)%d9_7;
  }else{
    ll tmp = digitpower(a,(b)/2);
    tmp%=d9_7;
    tmp*=tmp;
    tmp%=d9_7;
    return (tmp)%d9_7;
  }
}

unordered_map<ll,ll> prime_factor(int64_t n) {
  unordered_map<ll,ll> ret;
  for(int64_t i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}
template<class T>
vector<T> getaccum(vector<T> a){
  int size=a.size();
  vector<T> ans(size);
  ans[0]=a[0];
  for(int i=0;i<size-1;i++){
    ans[i+1]=ans[i]+a[i+1];
  }
  return ans;
}
struct datas{
  ld x;
  ld r;
  ld h;
};
bool cmp(const datas &a, const datas &b)
{
    return a.x < b.x;
}
int main(void){
  int n;
  cin>>n;
  vi a(n);
  rep(i,n)cin>>a[i];
  multiset<ll> nums;
  rep(i,n){
    nums.insert(a[i]);
  }
  //sort(a.begin(),a.end());
  int i=0;
  vector<pair<ll,ll>> ans;
  int cnt=0;
  multiset<ll> nums2;
  int minuscnt=0;
  for(auto i=nums.begin();i!=nums.end();){
    if(i==--(nums.end())){
      break;
    }
    if(*i<0){
      i++;
      minuscnt++;
      continue;
    }
    nums2.insert(*i);
    nums.erase(i++);
  }
  //cout<<"re";
  if(minuscnt==0){
    //modosu 
    
    auto itr2=nums2.begin();
    ll tmp=*itr2;
    nums2.erase(itr2);
    nums.insert(tmp);
  }
  for(auto i:nums2){
    //cout<<i;
    auto itr=nums.begin();
    ans.pb({*itr,i});
    ll tmp=*itr;
    nums.erase(itr);
    nums.insert(tmp-i);
  }
  //cout<<"t";
  while(nums.size()>1){
    ll maxn=*--nums.end();
    ll minn=*nums.begin();
   // cout<<minn<<endl;
    auto itr1=--nums.end();
    auto itr2=nums.begin();
    //if(minn>0)break;
    ans.pb({maxn,minn});
   // cout<<maxn<<" "<<minn<<endl;
    ll tmp=maxn-minn;
    nums.erase(itr1);
    nums.erase(itr2);
    nums.insert(tmp);
    cnt++;
  }

  cout<<*--nums.end()<<endl;
  rep(i,ans.size()){
    cout<<ans[i].first<<" "<<ans[i].second<<endl;
  }
  return 0;
}