    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    //--<for debugging>
    #define whatis(x) cout << #x << " is " << x<<" ";
    #define whatisl(x) cout << #x << " is " << x<<"\n";
    #define parr(array,end)for(ll loop=0;loop<end;loop++)cout<<array[loop]<<" ";cout<<"\n";
    #define lline cout<<"\n";
    #define errorl(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args);cout<<"\n";}
    #define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args);cout<<"___";}
        
    void err(istream_iterator<string> it) {}
    template<typename T, typename... Args>
    void err(istream_iterator<string> it, T a, Args... args) {
        cout << *it << " = " << a <<" , ";
        err(++it, args...);
    }
    //--</for debugging> 
    #define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
    #define testcase ll tt; cin >> tt; while(tt--)
    #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
    #define pb push_back 
    #define vars ll h,i,j,k,d,l,p,q,r,x,y,a,b,c,v,var,n,m,z,s,ans,ind1,ind2,flag,limit1,limit2,limit3,mod;
    #define vll vector<ll>
    #define pll pair<ll,ll>
    #define sll set<ll>
    #define pint pair<int,int>
    const ll INF=1e9+7;
    const ll MOD=1e9+7;
    int main()
    {
        boost vars
        string str,temp;;
        cin>>str;
        reverse(str.begin(),str.end());
        n=str.length();
        for(i=0;i<n;i++)
        {
            temp=str.substr(i,5);
            reverse(temp.begin(),temp.end());
            //error(temp);
            if(temp=="dream"||temp=="erase"){i=i+4;continue;}
            temp=str.substr(i,6);
            reverse(temp.begin(),temp.end());
            //error(temp);
            if(temp=="eraser"){i=i+5;continue;}
            temp=str.substr(i,7);
            reverse(temp.begin(),temp.end());
            //errorl(temp);
            if(temp=="dreamer"){i=i+6;continue;}
            break;
        }
        if(i>=n)cout<<"YES";
        else cout<<"NO";
    }