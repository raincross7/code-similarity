//Prime Number

#include<cstdio>
using namespace std;

int Isprime[1000000];
int prime[1000000];      //?´???°?????????????????????

//??¨??????????????????????????????????´???°?????????
void a_prime(){
    int n = 1000000;
    int p = 0;
    //??????????????§???????????????
    for(int i = 0; i < n; i++) Isprime[i] = 1;
    //0??¨1????´???°??§??????
    Isprime[0] = Isprime[1] = 0;
    for(int i = 2; i < n; i++){
        if(Isprime[i]) prime[p++] = i;
        for(int j = 2*i; j < n; j += i){
            Isprime[j] = 0;
        }
    }
    
    //?´???????????????£?????????
    for(int i = 1; i < n; i++) Isprime[i] += Isprime[i-1]; 
    
}


int main(void){
    int no;
    a_prime();
    while(scanf("%d", &no) != EOF){
        printf("%d\n", Isprime[no]);
    }
    
    return 0;
}