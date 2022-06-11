#include <stdio.h>
#define pa 9000000
#define pd 3600000

int main() {
    int n;
    long long income, ti, tf, incomeTax;
    printf("Your income of this year: ");
    scanf("%lld", &income);
    printf("Number of dependent: ");
    scanf("%d", &n);
    tf = 12*(pa + n*pd);
    if(income < tf) {
        ti = 0;
    } else {
        ti = income - tf;
    }
    printf("Tax-free income: %lld\n", tf);
    printf("Taxable income: %lld\n", ti);
    if(ti < 5000000) {
        incomeTax = (5*ti)/100;
    } else if(ti <= 10000000) {
        incomeTax = (10*(ti-5000000))/100 + (5000000*5/100);
    } else if(ti <= 18000000) {
        incomeTax = (10*(ti-10000000))/100 + (5000000*5/100) + (5000000*10/100);
    } else {
        incomeTax = (20*(ti-18000000)/100) + (5000000*5/100) + (5000000*10/100) + (8000000*15/100);
    }
    printf("Icome tax: %lld\n", incomeTax);
    return 0;
}