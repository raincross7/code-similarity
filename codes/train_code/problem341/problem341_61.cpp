  #include <ext/pb_ds/assoc_container.hpp>
  #include <bits/stdc++.h>
  using namespace std;
  using namespace __gnu_pbds;
  template <class c, class cmp = less<c> > using ordered_set = tree<c, null_type, cmp, rb_tree_tag, tree_order_statistics_node_update>;
  #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #define TRACE
  #ifdef TRACE
  #define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
  template <typename Arg1>
  void __f(const char* name, Arg1&& arg1){
    cerr << name << " : " << arg1 << std::endl;
  }
  template <typename Arg1, typename... Args>
  void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
  }
  #else
  #define trace(...) 
  #endif
  template<class T> ostream& operator<<(ostream &os, vector<T> V) {os << "[ "; for(auto v : V) os << v << " "; return os << "]";}
  template<class L, class R> ostream& operator<<(ostream &os, pair<L,R> P) {return os << "(" << P.first << "," << P.second << ")";}
  template <typename T,typename U>pair<T,U> operator+(const pair<T,U> & l,const std::pair<T,U> & r) { return {l.first+r.first,l.second+r.second};}
  typedef long long int ll;
  const ll mod =1e18;
  const int maxn = 300002;
  #define endl '\n'
  #define int ll
  #define ld long double
  #define all(x) (x).begin(),(x).end()


  int32_t main()
  { 
    IOS
   
    string s;
    cin>>s;
    int n = s.size();
    int k ;
    cin>>k;
    for(int i = 0;i<n;i+=k){
      cout<<s[i];
    }



    
    

    

    
    
    
  }