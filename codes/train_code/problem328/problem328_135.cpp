#include <cstdio>
#include <cctype>
using namespace std;
int main(void){
    char ch;

    while(1){
        scanf("%c", &ch);
        if(isalpha(ch)){
            if(islower(ch)){
                printf("%c",toupper(ch));
            }
            if(isupper(ch)){
                printf("%c",tolower(ch));
            }
        }
        else printf("%c",ch);
        if(ch=='\n') break;
    }    
    return 0;
}

