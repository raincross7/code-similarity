#include<cstdio>

int main(int argc, char const *argv[])
{
    int H, W;
    while(1){
        scanf("%d %d", &H, &W);
        if(H==0 && W==0) break;

        for(int i=0; i<H; i++){
            for(int j=0; j<W; j++){
                printf("#");
            }
            printf("\n");
        }
        
        printf("\n");
    }

    return 0;
}

