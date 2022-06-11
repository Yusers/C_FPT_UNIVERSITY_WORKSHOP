#include <stdio.h>

int main() {
    int x, sum = 0;
    printf("Enter x: ");
    scanf("%d", &x);
    do {
        if(x != 0) {
            sum += x;
        }
        x--;
    } while(x != 0);
    printf("sum of intergers: %d", sum);
    return 0;
}