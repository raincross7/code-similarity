#include<bits/stdc++.h>
#define lln long long int
#define llu unsigned lln
#define sc(n) scanf("%d",&n);
#define scl(n) scanf("%lld",&n);
#define scd(n) scanf("%lf",&n);
#define pf(res) printf("%d\n",res);
#define pfl(res) printf("%lld\n",res);
#define pfd(res) printf("%lf\n",res);
#define pb(n) push_back(n);
#define maxii 200005
using namespace std;
typedef pair<int,int> pii;
typedef pair<lln,lln> pll;
vector<int> vi;
vector<lln> vl;
vector<pii> vii;
vector<pll> vll;


lln arr[maxii];
lln arr2[maxii];
//bool check[maxii];
bool check2[1000][1000];
//lln n,m;

int main()
{
   int n,k;
   cin>>n>>k;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   lln sum=0;
   sort(arr,arr+n);
   reverse(arr,arr+n);
   for(int i=0;i<n && i<k;i++)
   {
       sum+=arr[i];
   }
   cout<<sum;
}




