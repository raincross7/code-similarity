#include <iostream>

#include<vector>

#include<string>

#include<algorithm>

#include<cmath>

#include<cstdlib>

#include<utility> 

#include<cstdio> 

#define vii vector< pair<int,int> >

#define vi vector<int>

#define INF 1000000007

#define ff first

#define ss second

#define lli long long int

#define ulli unsigned long long int

using namespace std;

int main() {

 ios_base::sync_with_stdio(false);

    cin.tie(NULL);

  string s,t;

  cin>>s>>t;

  int ans=t.size();

  int ss=s.size();

  int tt=t.size();

  for(int i=0; i<=ss-tt; i++){

    int cnt=0,k=0;

    for(int j=0; j<tt; j++){

        if(s[i+j]!=t[j])

        cnt++;

    }

    ans=min(ans,cnt);

  }

  cout<<ans<<endl;

}