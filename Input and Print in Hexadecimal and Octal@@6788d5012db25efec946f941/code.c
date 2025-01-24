#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int numb=0;
    scanf("%d",&numb);
    printf("Hexadecimal: %X", numb);
    printf("Octal: %o", numb);
    return 0;
}