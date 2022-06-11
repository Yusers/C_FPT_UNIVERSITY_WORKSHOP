#include <stdio.h>

int main() {
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    do {
        int t = x;
        x = y;
        y = t;
        printf("Now: x = %d, y = %d\n", x, y);
        printf("_____________Again_____________\nEnter x: ");
        scanf("%d", &x);
        printf("Enter y: ");
        scanf("%d", &y);
    } while(x != 0 && y != 0);
    return 0;
}