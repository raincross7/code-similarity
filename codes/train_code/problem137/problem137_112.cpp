#include <cstdio>
#include <cstring>
using namespace std;
int main(void){
    // Your code here!
    char str[1001];
    
    while(1){
        scanf("%s",str);
        if(str[0]=='0') break;
        int sum=0;
        for(int i=0; i<strlen(str); i++){
            sum+=(str[i]-'0');
        }
        
        printf("%d\n",sum);
    }
    return 0;
}

