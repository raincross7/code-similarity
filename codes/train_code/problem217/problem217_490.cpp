#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define piii pair<int,pii>
#define pll pair<ll,ll>
#define plii pair<ll,pii>
#define vi vector<int>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define SORT(x) sort(x.begin(), x.end())
#define GSORT(x) sort(x.begin(), x.end(), greater<int>())
#define mx 100001
#define eps 0.00000000001
#define mod 1000000007
#define pi acos(-1)
#define inf 100000000
#define loop(i,b,n) for(int i=b;i<n;++i)
#define rev_loop(i,b,n) for(int i=b;i>=n;--i)
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fio;
    int n;
    cin>>n;
    string s1;
    cin>>s1;
    map<string,int> m1;
    int m = s1.size();
    char c = s1[m-1];
    m1[s1]++;
    bool chk = true;
    loop(i,1,n)
    {
        cin>>s1;
        m = s1.size();
        m1[s1]++;
        //cout<<m1[s1]<<" "<<s1[0]<<" "<<c<<endl;
         if(m1[s1]>1 || s1[0]!=c)
         {
             chk = false;
             //cout<<s1<<endl;
         }
         c = s1[m-1];

    }
    if(chk)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}

