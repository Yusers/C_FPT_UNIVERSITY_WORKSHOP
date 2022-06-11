#include <stdio.h>

int main() {
    char c1, c2;
    int d;
    printf("input c1: ");
    scanf("%c", &c1);
    printf("input c2: ");
    fflush(stdin);
    scanf("%c", &c2);
    if(c1 > c2) {
        char t = c1;
        c1 = c2;
        c2 = t;
    }
    d = c2 - c1;
    printf("d = %d\n", d);
    for(d = c1; d <= c2; d++) {
        printf("%c, %d, %o, %X\n", d, d, d, d);
    }
    return 0;
}