#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char charac;
    scanf("%c",&charac);
    printf("You entered: %c",charac);
    return 0;
}