#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <regex>
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pl4 = pair<ll,ll>;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vvs = vector<vs>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vpii = vector<pii>;
using vvpii = vector<vpii>;
using vpl4 = vector<pl4>;
using vvpl4 = vector<vpl4>;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pob pop_back()
#define sz size()
#define be begin()
#define en end()
#define asn assign
#define emp empty()
#define ft front()
#define bk back()
#define clr clear()
#define ins insert
#define era erase
#define res resize

#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define rFOR(i,a,b) for(int i=(b);i>=(a);i--)
#define SORT(a) sort((a).be,(a).en)
#define rSORT(a) sort((a).rbegin(),(a).rend())
#define UNIQUE(a) (a).erase(unique((a).be,(a).en),(a).en)
#define PREVP(a) prev_permutation((a).be,(a).en)
#define NEXTP(a) next_permutation((a).be,(a).en)
#define BINS(a,b) binary_search((a).be,(a).en,(b))
#define LOWB(a,b) (lower_bound((a).be,(a).en,(b))-(a).be)
#define UPB(a,b) (upper_bound((a).be,(a).en,(b))-(a).be)
#define CNT(a,b) count((a).be,(a).en,b)
#define SUM(a) accumulate((a).be,(a).en,0)
#define REV(a) reverse((a).be,(a).en)
#define REGS(a,b) regex_search((a),regex(b))
#define REGM(a,b) regex_match((a),regex(b))
#define yn(a) cout <<((a)?"yes":"no")<<endl;
#define Yn(a) cout <<((a)?"Yes":"No")<<endl;
#define YN(a) cout <<((a)?"YES":"NO")<<endl;
#define say(a) cout <<(a);
#define sal(a) cout <<(a)<<endl;
#define sak cout <<endl;
#define dbg(a) cout <<(#a)<<": "<<(a)<<endl;
#define a2l(a) ((ll)(a-97))
#define A2l(a) ((ll)(a-65))
#define l2a(a) ((char)(a+97))
#define l2A(a) ((char)(a+65))
#define DigN2(a) ((llabs(a)==0)?(1):((ll)(log2(double(llabs(a))))+1))
#define DigN10(a) ((llabs(a)==0)?(1):((ll)(log10(double(llabs(a))))+1))
#define Dig2(a,b) (((a)>>(b))&1)
#define Pow2(a) (1<<(a))

#define int ll

const ll MOD = 1e9+7;
const string alp = "abcdefghijklmnopqrstuvwxyz";
const string ALP = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

ll gcd(ll a, ll b){if(b==0)return a;return gcd(b,a%b);}
ll lcm(ll a, ll b){return a/gcd(a,b)*b;}
ll min(ll a, ll b){if(a>=b) return b;if(a<b) return a;}
ll max(ll a, ll b){if(a>=b) return a;if(a<b) return b;}

ll salv(vll v){
    say("{");
    FOR(i,0,v.sz-1){
        say(v[i]);
        if(i!=v.sz-1) say(",");
    }
    sal("}")
}

ll DigS10(ll n){
    ll m=0;
    FOR(i,0,DigN10(n)-1){
        m+=(ll)((llabs(n)%(ll)(pow(10.0,(double)(i+1))))/(ll)(pow(10.0,(double)i)));
    }
    return m;
}

ll isP(ll n){
    if(n<=1) return 0;
    FOR(i,2,(ll)sqrt(n)){
        if(n%i==0) return 0;
    }
    return 1;
}

vll FactM(1,1);
vll FactMI(1,1);

ll PowM(ll a,ll b){
    ll ans=1,x=(a%MOD);
    FOR(i,0,DigN2(b)-1){
        if(Dig2(b,i)==1) ans=(ans*x)%MOD;
        if(i!=(DigN2(b)-1)) x=(x*x)%MOD;
    }
    return ans;
}

void CFactM(ll n){
    FOR(i,FactM.sz,n){
        FactM.pb((FactM[i-1]*(i%MOD))%MOD);
    }
    return;
}

void CFactMI(ll n){
    CFactM(n);
    if(FactMI.sz<(n+1)) FactMI.res(n+1,-1);
    if(FactMI[n]==-1) FactMI[n]=PowM(FactM[n],MOD-2);
    rFOR(i,1,n-1){
        if(FactMI[i]!=-1) break;
        FactMI[i]=((FactMI[i+1]*((i+1)%MOD))%MOD);
    }
    return;
}

ll Comb(ll n,ll k){
    if((n<0)||(k<0)) return 0;
    if(n<k) return 0;
    if(n+1>FactMI.sz) CFactMI(n);
    return ((((FactMI[k]*FactMI[n-k])%MOD)*FactM[n])%MOD);
}

signed main() {

    ll n;
    cin >>n;
    vvll num(n+1);
    ll aa;
    ll yaba;
    FOR(i,0,n){
        cin >>aa;
        num[aa].pb(i);
        if(num[aa].sz==2) yaba=aa;
    }
    ll p1,p2,p3;
    p1=num[yaba][0];
    p3=n-num[yaba][1];
    p2=n-p1-p3-1;

    ll cntt=0;
    FOR(k,1,n+1){
        cntt=0;
        cntt=(cntt+Comb(p1+p2+p3,k))%MOD;
        cntt=(cntt+Comb(p1+p2+p3,k-2))%MOD;
        cntt=(cntt+(Comb(p1+p2+p3,k-1)*2))%MOD;
        cntt=(cntt-Comb(p1+p3,k-1)%MOD);
        sal((cntt+MOD)%MOD);
    }
    
}