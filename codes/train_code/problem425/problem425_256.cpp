#include <stdio.h>
int main(void) {
int h, w, i, j;
scanf("%d %d", &h, &w);
while( h != 0 && w != 0 ) {
for(i = 0; i < h; ++i ) {
for(j = 0; j < w; ++j ) {
putchar('#');
}
putchar('\n');
}
putchar('\n');
scanf("%d %d", &h, &w);
}
return 0;
}