#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;
typedef     vector<int> vi;
typedef     vector<long long> vl;
typedef     pair<int, int>pi;
typedef     pair<long long, long long>pl;
#define F   first
#define S   second
#define pb  push_back
#define     all(x)      x.begin() , x.end()
#define mp  make_pair
#define       FOR(i,a,b) for(i=a;i<=b;i++)
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)
int main()
{

  int t;
  t = 1;
  //cin >> t;
  while (t--)
  {
    int n,i,c=0;
    cin>>n;
    string s;
    cin>>s;
    s+=(s[n-1]+1);
    for(i=0;i<s.size()-1;i++)
    {
       if(s[i]!=s[i+1])
       {
        c++;
       }
    }

   cout<<c<<endl;
  }
}