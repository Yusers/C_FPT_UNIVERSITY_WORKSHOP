#include <stdio.h>

void printDivisors(int);
int inputUsers();
void printSumOfDivisors(int);

int main() {
	char c;
	int n, sum;
	do {
		n = inputUsers();
		printDivisors(n);
		printSumOfDivisors(n);
		if(n == 0) break;
	} while(n != 0);
	return 0;
}

void printSumOfDivisors(int N) {
	int S = 0, i;
	for(i = 1; i <= N/2; i++) {
		if(N%i == 0) {
			S+=i;
		}
	}
	printf("\nSum of Divisors: %d\n", S);
}

void printDivisors(int N) {
	int i;
	printf("Divisors is: ");
	for(i = 1; i <= N/2; i++) {
		if(N%i == 0) {
			printf("%d ", i);
		}
	}
}

int inputUsers() {
	int n;
	printf("\nEnter n: ");
	scanf("%d", &n);
	return n;
}
