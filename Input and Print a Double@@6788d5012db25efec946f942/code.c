#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double numb;
    scanf("%lf",&numb);
    printf("You entered: %.4lf",numb);
    return 0;
}