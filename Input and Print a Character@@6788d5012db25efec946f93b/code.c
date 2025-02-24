#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char charac;
    scanf("%c",&charac);
    printf("You entered: %dd",charac);
    return 0;
}