#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1<<17; // = 131072
const ll INF= 0;

/*dat???????????????N?????????*/

class RMQ{
public:
  ll n;
  vector<ll> dat;

  //?????????
  RMQ(){
    dat.resize(2*N-1);
    n=N;
    for(int i=0;i<n;i++) dat[i]=INF;
  }
  
  //k???????????????a????????´
  void update(int k,ll a){
    k+=n-1;
    dat[k]=a;
    while(k>0){
      k=(k-1)/2;
      dat[k]=min(dat[k*2+1],dat[k*2+2]);
    }
  }
  
  //[a,b)???????°????????±??????? query(a,b,0,0,n)
  ll query(int a,int b,int k=0,int l=0,int r=N){
    if(r<=a||b<=l)return INF;
    if(a<=l&&r<=b)return dat[k];
    ll vl=query(a,b,k*2+1,l,(l+r)/2);
    ll vr=query(a,b,k*2+2,(l+r)/2,r);
    return min(vl,vr);
  }
};


/*
  i???????????§????????¨???????????????????????´????????§?????§??????
 */
int main(){
  int n;
  cin>>n;
  vector<int> A(n),Idx(n);
  for(int i=0;i<n;i++)cin>>A[i],Idx[i] = A[i];
  sort(Idx.begin(),Idx.end());

  ll ans = INF;
  RMQ rmq;
  for(int i=0;i<n;i++){
    int idx = lower_bound(Idx.begin(),Idx.end(),A[i]) - Idx.begin();
    ll val = rmq.query(0,idx);
    rmq.update(idx,val-1);
    ans = min(ans,val-1);
  }
  cout<<-ans<<endl;
  return 0;
}