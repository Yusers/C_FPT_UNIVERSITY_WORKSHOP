#include <stdio.h>
#include <ctype.h>

int main() {
    int nVowels = 0, nConsonants = 0, nOthers = 0;
    char ch;
    do {
        ch = getchar();
        ch = toupper(ch);
        if(ch >= 'A' && ch <= 'Z') {
            switch(ch) {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    nVowels++;
                    break;
                default: 
                    nConsonants++;
            }
        } else if(ch != 10) {
            nOthers++;
        }
    } while(ch != '\n');
    printf("nVowels: %d\nnConsonants: %d\nnOthers: %d", nVowels, nConsonants, nOthers);
    return 0;
}