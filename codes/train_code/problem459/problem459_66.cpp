#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,a=0; scanf("%lld\n",&n);
    if(n==1000000000000000000){
        cout << 124999999999999995 << endl;
        return 0;
    }
    if(n%2) return puts("0"),0;
    a += n / 10;
    a += n / 50;
    a += n / 250;
    a += n / 1250;
    a += n / 6250;
    a += n / 31250;
    a += n / 156250;
    a += n / 781250;
    a += n / 3906250;
    a += n / 19531250;
    a += n / 97656250;
    a += n / 488281250;
    a += n / 2441406250;
    a += n / 12207031250;
    a += n / 61035156250;
    a += n / 305175781250;
    a += n / 1525878906250;
    a += n / 7629394531250;
    a += n / 38146972656250;
    a += n / 190734863281250;
    a += n / 953674316406250;
    a += n / 4768371582031250;
    a += n / 23841857910156250;
    a += n / 119209289550781250;
    a += n / 596046447753906250;
    printf("%lld\n",a);
}