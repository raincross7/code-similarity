#include<cstdio>
unsigned answer[101] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 3, 3, 3, 3, 8, 8, 11, 11, 11, 11, 14, 14, 32, 32, 35, 35, 35, 35, 42, 42, 42, 42, 49, 49, 49, 49, 49, 49, 75, 75, 86, 86, 86, 86, 86, 86, 123, 123, 131, 131, 131, 131, 148, 148, 153, 153, 170, 170, 170, 170, 170, 170, 227, 227, 227, 227, 227, 227, 250, 250, 323, 323, 324, 324, 324, 324, 354, 354, 354, 354, 384, 384, 384, 384, 384, 391, 491, 491, 529, 529, 529, 529, 529, 529, 543};

int main(){
    unsigned N;
    scanf("%u", &N);
    printf("%u\n", answer[N]);
    return 0;
}