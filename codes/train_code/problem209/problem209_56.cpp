#include <bits/stdc++.h> 
//#include <boost/multiprecision/cpp_int.hpp> 
//using namespace boost::multiprecision;
using namespace std;
#define ll long long 
#define mp make_pair
#define pb push_back
#define se second
#define fi first 
#define upp 1e18
#define mod 1000000007

vector<ll> v[500007];
bool vis[500007];
ll kar=0;
void dfs(ll node) {
    kar++;
    vis[node]=1;
    for(ll i=0;i<v[node].size();i++) {
        if(!vis[v[node][i]]) {
            dfs(v[node][i]);
        }
    }
}
void solve() {
    ll i, j, k, l, t, n, x, y, r,q,m,n1;
    cin>>n>>m;
    while(m--) {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);    
    }
    ll c=0;
    ll val=-1;
    for(i=1;i<=n;i++) {
        if(vis[i]==0) {
            kar=0;
            dfs(i);
            val=max(kar,val);
        }
    }
    cout<<val;
}




















int main() {
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMHBYYYWMMMM#BYYTTTYWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMB9O1==?????zzCC111>>;;;;;;;;;;;<?TMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM9Olll=l======??????????>>>>>>;;;;;;;;;:;?TMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMM9ttlllllllll=l=======?????????>>>>>>;;;;;;;;;;?TMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMBOttOtttttltlllllllll=======??????????>>>>>>>;;;;;;?TMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMBttwOtttttttttttttlllllllll========?????????>>>>>>;;;;;<TMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMBrwZrttttttttttttttttttlllllllllll======???????????>>>>>>;;?HMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMSw0trtrrtrtrttrtttttttttttttlllOllllll========????<<zz??>>>>>>ZMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMX0ttrtrOOttrttrttOOttttttttttttltwllllllllll========??wy?????>>>vZMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMM0ttrI+wV1rtttttttwZtttttttltttOwylOXOllllllllllll=l====1dkz???????vZdMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMSrrwrtwZCjttttttttwSttOlllltllllwtXOlZkOlllllllllllllll==z+dk===?????X2JMMMMMMMMMMMMM
//  MMMMMMMMMMMMMBrtwwtrw0<jttttttttOXllOttltllttllOZwHOtXkyltlllllllllllllll<+XZ======?dk?JMMMMMMMMMMMM
//  MMMMMMMMMMMMStwdZtwXC<+ttttttOOOd6ltZlltllllttllStWWOOHWytttttltltOllltllz:zHllll===zX=?dMMMMMMMMMMM
//  MMMMMMMMMMBrwdKOtwW3;;zrttttwZwXRlldOllltltlltttwlXvktdXWytltttttttOttlttl<<dklllllllZ===dMMMMMMMMMM
//  MMMMMMMMM8tQM#ttwW3;;;1trttwSwfUOlORltllltlllllldtX>dktDOWOtlttltttOOttltO<;+WOllllllXlllzMMMMMMMMMM
//  MMMMMMMM9OdM#Ottd$;;;;;<?1z0OKjRltd0llltOllllllldZX>?WOw_WWOtttttttttOttI<;;<dkttttllllllldMMMMMMMMM
//  MMMMMMM9wMMMSttwS<;;;;>;;;J<j>(I<?U111zltllllllld0X>~dkwl(WkttlttlOOwWk<;;:;;zHttttttwOllllMMMMMMMMM
//  MMMMMMBdMMM8tttdI+zttttttdSXt~dlzXwlllzzOzzzzzlldkW<~?kOk~?sx++++jdHmH6+++<;;jdZtttttdkOtlldMMMMMMMM
//  MMMMM#dMMM#tttw0+tttttttdKdf((RsdfRllllldZllltlldWK~~_W0w_~OWOlOdgg9ZtOWOtttz+wktttttdpktttwMMMMMMMM
//  MMMMMWMMMMSlttdIttttttOdWHH>~(IzWDRll=llzRlllzlldk$>++dkd<~_XkdgH9tttttdktttt+OkrttrtdfpkttOMMMMMMMM
//  MMMMNWMMM#Zttlk=tttttOXWWd$_.(IdW1R=llll=SlllzOldK<_._(kd6+-(MM9lltttttrWktttztWZttrwXppWttrMMMMMMMM
//  MMMMNMMMM#lltwDzttllOXyW0X:..(OXk<Rl=ll=lwOlllOld3<``.(Rd>~?CdklllltttttXdXttzOWktrwwWpfpkrtMMMMMMMM
//  MMMMMMMMM@ltldIzlttOXyW$w$```(OyD(Rl==llldZ=llIlw;~```-Xd:~~~~UkylltttAyHdgSrzObRtOXwpfppWrrMMMMMMMM
//  MMMMMMMMM@llldtlllldVyW+d>```.wZ$ wl==lI=wRl=ll=w<```` dd_..~~(RZXOQdggHH9ZwrzwHWrdXXppfppkrMMMMMMMM
//  MMMMMMMMM#llldlltlwyyyD(S-...,Wk] zI=l=llzWzl=l=P~```` jZ``...~zQkH@MBUtrZtrtldHRdSdpfpffpkwMMMMMMMM
//  MMMMNMMMMNZllXtllldVyW3(Mf=<ONMHP~(k===l=zdk=lld3```...(C````..(M96lttttrrtrrtdHWHXpfpppfpRwMMMMMMMM
//  MMMMMMMMMMNzzWZllzyyyy(W@`  =~MWK6 jz=lzlzvRz=lZ`.I+JgkWm&-. `..(ZltlttttrtttrWWHppfppfpppSdMMMMMMMM
//  MMMMMMMMMMMkAWRllzVyyS_(b    .MNHU-(Uz=lI={XkzO>.dVT7<TMHMNHHx-.(kwZyltttrtrrdHHpfppfpffpp0dMMMMMMMM
//  MMMMMMMMMMMMKyWzOzyyyk.`<!  hdWMH]``(S==t=l(kX2 ?_`    WMMHH#HH+.XwkwOttttrwrZ~(HfpfpppfpWwXMMMMMMMM
//  MMMMMMMMMMMMMHWROOyyyW;` `. (WVM#b```(0=zzz wX!```  a.dM#NM@N(4WhXkXkWtttttwd3O_(HpffpfpfWwSMMMMMMMM
//  MMMMMMMMMMMMNZvWzXXyyXP```-_ ?o+?!````.4=Z=`(:````  HpbNNMHHH (C=XXyWZWttrdwf:(>.dfppffppSXSMMMMMMMM
//  MMMMMMMMMMMMMRzuHzXyZXH.``````````````` ?zz ``````` ZKvTHHbWt `` XZyyHZWOdSZ<::~`(fpfpfffXp0WMMMMMMM
//  MMMMMMMMMMMMMKzyyHvyZZW____.`````````````.I_```````` ?nJzX7^````.WXWyyHyWKZ<:::_`Jffpfpfpfp0WMMMMMMM
//  MMMMMMMMMMMMM@zZyZWwWyXo-_~(~ ```````````` `````````````` _`````.WXkyyVWmWc::<~ .HffppfffffkXMMMMMMM
//  MMMMMMMMMMMMMKzZZZZXkUXr~....```````....```````````` ...  ````..JXWWyyW83vXx~..WfffVfWVffffkdMMMMMMM
//  MMMMMMMMMMMMMRzZZZZZZZZb````````````<````````````./<~._<_.____`(WfdyW3<:~~(XWkVVVVVVVHVVVVV0dMMMMMMM
//  MMMMMMMMMMMMMSzZZZZZZZWX-```````````````````````````.......~~._j9jX=_~~_(XZyVHHkyyyyWHyyykykOMMMMMMM
//  MMMMMMMMMMMMMSzuuuuuZXWZW,```````````````````````````````.``..(3<! ...JWyyXWyyyWHkyyWHyyyHyklMMMMMMM
//  MMMMMMMMMMMMNXzuuuXXuXSuuXh,```````` .... ```````````````````_~ .JWyyyyZyy0HyyZyyZyZXWZZZWHZIdMMMMMM
//  MMMMMMMMMMMMNwtuuuXkuXXuuuuXh,``````(:::~<?71(,``````````````.(UMNUkZZZZZZZHZZ0ZZZZZWWZZZWNXIdMMMMMM
//  MMMMMMMMMMMMNKOzuzXkuXuuuuuXuXW, ```` _~~~:~~(}```````````.(YC;::<kCfZZZZXO#ZZVZZZZZMZZuuMMNXzMMMMMM
//  MMMMMMMMMMMMHKOzzuXkzdzzzzuXXzuuU&.``````````````````` .JY>::::;;J=:dZuZuZd#uuruuuud#uuuXMMMNXdMMMMM
//  MMMMMMMMMMMMMNOvzzXkvMRzzzzXKzuzzzXh, `````````````..JC<;:;;:;;+7<:~(HHuXIdNuuzuuuXMSuuuWMMMMROMMMMM
//  MMMMMMMMMMMMMNvvvrdkvM#vzzzzHzzzzzuzzUG. ``` ...JdY<:;:;:::;;+v<~~~:(HpHmzMNXZzuzzd#zzzdMMMMMMRdMMMM
//  MMMMMMMMMMMMMNwrrvdRrMNwvvvvdRvvvzwkzzzzXWWHY=~~O+::::::::<+<~~~~~~~dppppWMMkZzzzwM#zzdMMMMMMMMNMMMM
//  MMMMMMMMMMMMMM#rrrwRrMMbOrrOZNkrvvvXwvvvvvwX;.~._W_:::::(?!~~~~~~~~(HpppppppHWdvwM#XwdMMMMMMMMMMNMMM
//  MMMMMMMMMMMMMMNyrrrRrWMMmzOrzdNyrrrZNvrwQWWfb....(r~~_J>_.....~.~~-dpfpffpfpppWHHMNdMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMNrtrStdMMMNxzrzMNmrrrdNWfVfffP._-.(~_J!............JpfpffpfpfffpppWNppppHMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMNOtXtdMMMMMNxzZMMNmgHyVVVVVW%..?/(.,(x-..........(HfffpffpffpffWHHffpffppfVyyWMMMMMM