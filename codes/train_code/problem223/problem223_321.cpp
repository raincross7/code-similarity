#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(ll i=0;i<n;i++)
#define all(v) v.begin(),v.end()

using vi = vector<int>; // intの1次元の型に vi という別名をつける
using vvi = vector<vi>; // intの2次元の型に vvi という別名をつける
using vvvi = vector<vvi>;
using ll = long long; //long longをllだけにした
using vll = vector<ll>;
using vvll = vector<vll>;
using vvvll =vector<vvll>;
using vb = vector<bool>;
using vvb = vector<vb>;
using mii = map<int,int>;

long long divup(long long a,long long b);
long long kaijou(long long i);
long long P(long long n,long long k);
long long C(long long n,long long k);
long long GCD(long long a,long long b);
long long LCM(long long a,long long b);
bool prime (long long N);
double distance(vector<long long>p,vector<long long>q,long long n);

void press(vector<long long> &v);
void ranking(vector<long long> &v);
void erase(vector<long long> &v,long long i);
void unique(vector<long long> &v);
void printv(vector<long long> v);

vector<ll> keta(ll x);

//端数繰りあがり割り算(検証済)
//a÷bの端数繰り上げ
//b!=0のデバグはしてないので分母に0を入れないように
//負数対応
long long divup(long long a,long long b){
    long long x=abs(a);
    long long y=abs(b);
    long long z = (x+y-1)/y;
    if(b*a<0) return -z;
    else return z;
}

//階乗
//検証済み
long long kaijou(long long i){
    if(i==0) return 1;
    long long j=1;
    for(long long k=1;k<=i;k++){
        j*=k;
    }
    return j;
}

//順列nPk(完成)
//n個の異なる要素から、取り出す順序を区別してk個取り出す場合の数
//n<kなら0を返す
//敢えて負数時のデバグはしてない
long long P(long long n,long long k){
    if(n<k) return 0;
    long long y=1;
    for(long long i=0;i<k;i++){
        y*=(n-i);
    }
    return y;
}
//組み合わせnCk(検証済み)
//P,kaijouと併用
long long C(long long n,long long k){
    if(n<k) return 0;
    return P(n,k)/kaijou(k);
}
//nHk
//区別しないn個の要素を、区別するk個のグループに分ける
//0個のグループがあっ
//て良い
//C必須

//最大公約数GCD,最小公倍数LCM
//LCMを使うときはGCDをセットで
//検証済み
long long GCD(long long a,long long b){
    if(a<b) swap(a,b);
    long long d=a%b;
    if(d==0){
        return b;
    }
    return GCD(b,d);
}
long long LCM(long long a,long long b){
    return (a/GCD(a,b))*b;
}

//素数判定
//素数ならばtrue、素数以外の整数にはfalse
//負数は全てfalse
//検証済み
bool prime (long long N){
    if(N==1){
        return false;
    }
    if(N<0) return false;
    long long p=sqrt(N);
    for(long long i=2;i<=p;i++){
        if(N%i==0){
            return false;
        }
    }
    return true;
}

//ユークリッド距離
//検証済み
//位置ベクトル1,位置ベクトル2,ベクトルの次元(2または3が一般的)
double distance(vector<long long>p,vector<long long>q,long long n){
    double x=0;
    for(long long i=0;i<n;i++){
        x+=pow((p.at(i)-q.at(i)),2);
    }
    return sqrt(x);
}


//配列圧縮(検証済)
//{1,36,1,3,8,-2,-92}を
//{2, 5,2,3,4, 1,  0}にする
void press(vector<long long> &v){
    long long n=v.size();
    vector<long long> w(n);
    map<long long,long long> m;
    for(auto &p:v){
        m[p]=0;
    }
    long long i=0;
    for(auto &p:m){
        p.second=i;
        i++;
    }
    for(long long i=0;i<n;i++){
        w.at(i)=m[v.at(i)];
    }
    v=w;
    return;
}

//配列のi番目の要素がj番目に小さいとき、j番目の数がiであるベクトルを返す関数
//配列の要素が全て異なるときにしか正常に動作しない
//配列の要素に同じものが含まれても見かけ上動作はするが意味のない値を戻し、
//エラーも起きないので注意
//検証済
//{2,4,1,6,0,3,8,9,5}を
//{4,2,0,5,1,8,3,6,7}にして返す
//"rank"という名前にするとSTLの関数(配列の次元を返す関数)になるので注意
void ranking(vector<long long> &v) {
    long long n=v.size();
    map<long long,long long> m;
    long long i;
    for(i=0;i<n;i++){
        m[v.at(i)]=i;
    }
    vector<long long> w(n);
    i=0;
    for(auto &p:m){
        v.at(i)=p.second;
        i++;
    }
    return;
}

//部分削除(未検証)
//ベクトルのi番目(i=0,1,2,...,n-1)の要素を削除し、
//以降の要素を全て前に1ずらして参照返し
//ベクトル長は1小さくなって返る
//i>n-1の時は変化しない
void erase(vector<long long> &v,long long i){
    long long n=v.size();
    if(i>n-1) return;
    for(long long j=i;j<n-1;j++){
        v.at(j)=v.at(j+1);
    }
    v.pop_back();
    return;
}

//重複削除(未完成)
//引数ベクトルに同一要素が複数あるとき、先頭を残し他は削除
//参照返し
//ベクトル長も変化する
//O(logn)くらい
void unique(vector<long long> &v){
    long long n=v.size();
    set<long long> s;
    long long i=0;
    while(i<n){
        if(s.count(v.at(i))){
            erase(v,i);
            n--;
        }else{
            s.insert(v.at(i));
            i++;
        }
    }
    return;
}

//ベクトルの出力(検証済)
//debug用にvectorの中身を出力する
void printv(vector<long long> v){
    cout<<"{ ";
    for(auto &p:v){
        cout<<p<<",";
    }
    cout<<"}"<<endl;
}


//10進法でn桁の整数xに対して、大きい方の位から、その位の1桁の数字を
//収納した長さnのベクトルを返す
//0に対しては{0}を返す
//検証済み
vector<ll> keta(ll x){
    if(x==0) return {0};
    ll n=log10(x)+1;//xの桁数
    vll w(n,0);
    for(ll i=0;i<n;i++){
        ll p;
        p=x%10;
        x=x/10;
        w[n-1-i]=p;
    }
    return w;
}



//////////////////////////////////////////////////////////////



int main(){
    ll n;
    cin>>n;
    vll s(n);
    rep(i,n){
        cin>>s[i];
    }
    ll L=0,R=0;//半開区間[L,R)を考える->s[L],s[L+1],...s[R-1]が範囲
    ll cnt=0;
    ll p=0;
    while(L<n){
        while(R<n){
            if((p^s[R])==p+s[R]){
                p ^= s[R];
                R++; 
            }
            else break;
        }
        
        cnt+=(R-L);
        
        if(L==R){
            p ^= s[R];
            R++;
            
        }
        p^=s[L];
        
        L++;

    }
    cout<<cnt<<endl;
}





