#include<cstdio>
#include<cctype>

int main(){
    
    char ch;
    while(1){
        scanf("%c",&ch);
        if(ch=='\n') break;
        else if(islower(ch)) printf("%c",toupper(ch));
        else if(isupper(ch)) printf("%c",tolower(ch));
        else printf("%c",ch);
    }
    printf("\n");
    return 0;
}
