#include <stdio.h>

// ???????????´??°?????????????????¢??°
void swap(int*, int*);

int main(){
    // tmp???swap??§?????????????????????????????§?¶???????OK
    int a, b, c;

    // ??\???
    scanf("%d %d %d", &a, &b, &c);

    // a???b????????§????????´????????????
    if(a > b){
        swap(&a, &b);
    }

    // a???c????????§????????´????????????(a???????°?????????????)
    if(a > c){
        swap(&a, &c);
    }

    // b???c????????§????????´????????????(b???2??????????°?????????????
    // ??¨???????????¨????????¶??????c?????????????????§????????????(?????§???)
    if(b > c){
        swap(&b, &c);
    }

    printf("%d %d %d\n", a, b, c);
    return 0;
}

void swap(int* x, int* y){
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}