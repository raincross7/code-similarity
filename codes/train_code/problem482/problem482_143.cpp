#include <cstdio>

void printFrame(int x, int y) {
    int i, j;
    for(i=0;i<y;i++) printf("#");
    printf("\n");
    for(i=2;i<x;i++) {
        printf("#");
        for(j=2;j<y;j++) printf(".");
        printf("#\n");
    }
    for(i=0;i<y;i++) printf("#");
    printf("\n\n");
}

int main() {
    int x=-1, y=-1;
    for(;;) {
        scanf("%d %d", &x, &y);
        if (x==0 && y==0) break;
        printFrame(x, y);
    }
    return 0;
}
