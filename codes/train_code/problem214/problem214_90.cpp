                #include<bits/stdc++.h>
            using namespace std;
            # define ll long long
            # define int long long  //comment it out when MLE
            # define endl "\n"
           // template <typename T>
            //using ordered_set = tree<T, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>;

            #define gok ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
            //# define m 163577857
            # define mo 1000000007
            # define pi acos(-1)
           # define fi first
            # define se second
            # define pb push_back
            # define pii pair<int,int>
            #define REP(i,n) for (int i = 1; i <= n; i++)
            const int mod =  1000000007;
            //const int K = 2;
            //typedef vector<vector<int> > matrix;
/*
          int add(int a, int b,int mod) {
                a%=mod;
                b%=mod;
                a += b;
                if (a >= mod) a -= mod;
                if(a<0)
                {
                    a += mod;
                    a %= mod;
                }
                return a;
            }

            int mul(ll a, int b,int mod) {
                a%=mod;
                b%=mod;
                a *= b;
                a += mod;
                return a % mod;
            }
            int po(int a,int b,int mod)
            {
                if(b==0)
                    return 1;
                if(b%2==0)
                    return po(mul(a,a,mod),b/2,mod);
                return mul(a,po(mul(a,a,mod),(b-1)/2,mod),mod);
            }


            ll fact[200003];
            ll inv[200003];

            void fact0()
            {
                int i,j;
                fact[0]=1;
                for(i=1;i<=200000;i++)
                {
                    fact[i]=i*fact[i-1]%mod;
                }
                inv[0]=1;
                inv[1]=1;
                ll p=mod;
                for (i=2; i<=200000; i++)
                    inv[i] = (p - (p/i) * inv[p%i] % p) % p;

                for(i=2;i<=200000;i++)
                {
                    inv[i]*=inv[i-1];
                    inv[i]%=mod;
                }
            }
            int help(int a,int b)
            {
               // cout<<a<<" "<<b<<endl;
                int an = fact[a];
                //cout<<an<<endl;
                an *= inv[b];
                an %= mod;
                an *= inv[a-b];
                an %= mod;
                return an;
            }
/*
          void random()
            {
              srand(time(0));
            for (int i = 0; i < n; i ++)
                perm[i] = i + 1;
            random_shuffle(perm, perm + n);
            }
int ncr(int a,int b)
{
    int tt = fact[a];
    tt %= mod;
    tt *= inv[a-b];
    tt %= mod;
    tt *= inv[b];
    tt %= mod;
    return tt;
}
*/
int n,k;
int a[100005],dp[100005];
int help(int id)
{
    if(id==n-1)
        return 0;
    if(dp[id]!=-1)
        return dp[id];
    int an=1e9;
    for(int i=1;i<=k;i++)
    {
        if(id+i>=n)
            break;
        an = min(an,help(id+i)+abs(a[id]-a[id+i]));
    }
    /*int op1=1e9,op2=1e9;
    if(id<n-2)
        op2 = help(id+2) + abs(a[id]-a[id+2]);
        op1 = help(id+1) + abs(a[id]-a[id+1]);*/
    return dp[id] = an;
}
signed main(){
	gok

cin>>n>>k;
for(int i=0;i<n;i++)
    cin>>a[i];
   memset(dp,-1,sizeof(dp));
    cout<<help(0);









  return 0;
}
