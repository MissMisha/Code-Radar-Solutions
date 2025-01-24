#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double numb;
    scanf("%f",&numb);
    printf("You entered: %.4f",numb);
    return 0;
}