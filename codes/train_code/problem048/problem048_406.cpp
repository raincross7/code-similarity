#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <deque>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define ctoi(c) c - '0'
#define tos(s) to_string(s)

typedef long long ll;


int main() {
    ll n, k;
    cin >> n >> k;
    ll a[n];
    rep(i, n) {
        cin >> a[i];
    }
    rep(j, min(k,42ll)) {
        vector<ll> b(n,0ll);
        rep(i, n) {
            ll l = max(0ll, i - a[i]);
            b[l]++;
            if (i+a[i]+1 < n) b[i+a[i]+1]--;
        }
        for (int i=1; i<n; i++) b[i]+=b[i-1];
        rep(i,n) a[i]=b[i];
    }

    if (k > 41) {
        for (auto m: a) {
            cout << n << " ";
        }
    } else {
        for (auto m: a) {
            cout << m << " ";
        }
    }
    cout << endl;

    return 0;
}

/*
ACACACACACACACACACACACACACACACACACACACACACACACACACACACACACACACACACACACACACACACAC                                                                              
                                   ******,  .,, .,, ,,,    ****.**              
                                   ** . .,,,,,,,,,,,,,,,,,,,,,. .,*             
                                   **,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.            
                                .,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.        
                                .,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.        
                    ****      ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,      
              ***************,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,    
         ********************,,,,,,,,,,,,,,@@@,,,,,,,,,,,/@@@,,,,,,,,,,,,,,,    
        ******************,,,,,,,,,,,,,,,,,,(,,.         ,,,,,,,,,,,,,,,,,,,    
       ********************,,,,,,,,,,,*,,,,,.     %&&&     .,,,,*,,,,,,,,,,,,.  
       ***,,,,,,,,,,,,,,*,,,,,,,,,,,,,,,,,,,,               ,,,,,,,,,,,,,,,,,   
       ,,,,,,,,,,,,,,,,,,,**,,,,,,,,,,.......      ##(     ........,,,,,,,,,,.  
     .,,,,,,,,,,,,,,,,,,**,,,,,,,,,,..............    ..............,,,,,,,,    
    .,,,,,,,,,,,,,,,,,,,**,,,,,,,,,.................................,,,,,,,,,   
   ,,,,,,,,,,,,,,,,,,,,***,,,,,,,....................................,,,,,,,,,  
   ,,,,,,,,,,,,,,,,,,,,**,,,,,,,,.....................................,,,,,,,   
   ,,,,,,,,,,,,,,,,,,,,,**,,,,,,,,....................................,,,,,,,   
   ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.....................................,,,,,     
   ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,...................................,.,,,,,     
    ,,,,,,,,,,,,,,,,,,,,,,,,,,,,.....................................,,,        
     ,,,,,,,,,,,,,,,,,,,,,,,,,,,,....................................,,,        
      ,,,,,,,,,,,,,,,,,,,,,,,,,,,,...................................,          
       ..,,,,,,,,,,,,,,,,,,,,,,,,,,.................................,           
       .........**.....       ,,,,,..............................               
        .......*......                  ****,**,       ,..****                  
        .......*,....                   .......        ......                   
          .......*....                   .....          .....                   
                                         ......          .....                  
*/