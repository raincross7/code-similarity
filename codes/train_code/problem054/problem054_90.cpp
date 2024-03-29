#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define ctoi(c) c - '0'
#define tos(s) to_string(s)

typedef long long ll;


int main() {
    int a,b;
    cin >> a >> b;
    rep(i, 1010) {
        if (int(i*0.08) == a && int(i*0.1) == b) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
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