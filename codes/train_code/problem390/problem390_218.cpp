#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int q;
    scanf("%d", &q);
    for(int i = 0; i < q; i++){
        long a,b;
        scanf("%ld %ld", &a, &b);
        if(a>b){
            swap(a,b);
        }         
        long n = a * b;
        long s = a;
        long t = b;
        bool bSquare = false;
               
        while(t - s >= 2){
            long u = (s + t) / 2;
            if(u * u > n){
                t = u;
            } else {
                s = u;
            }
        }
        
        if(s * s == n){
            bSquare = true;
        }
        
        long nAns = 0;
        if(!bSquare){
            if(s * (s + 1) >= n){
                nAns = 2 * (s - 1);
            } else {
                nAns = 2 * s - 1;
            }
        } else if(a == s){
            nAns = 2 * (s - 1);
        } else {
            nAns = 2 * (s - 1) - 1;
        }
        printf("%ld\n",nAns);
    }
    
    return 0;
}
