#include <bits/stdc++.h>
using namespace std;


//defines...
#define ll long long
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define in insert
#define pi 2*acos(0.0)1
#define srt(s) sort(s.begin(),s.end())
#define all(x) x.begin(),x.end()

const ll mod=1e9+7;
const ll MX=2e5+5;

//code goes from here...



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
#endif

    boost
    //---------------------------------
    char a,b;
    cin >> a >> b;
    string s1="",s2="";
    int x,y;
    x=a-'0';
    y=b-'0';
    while(x--)
    {
        s1+=b;
    }
    while(y--)
    {
        s2+=a;
    }

     cout << min(s1,s2)<< endl;
    //---------------------------------
    
    return 0;
}
