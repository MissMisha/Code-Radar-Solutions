#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float r;
    scanf("%f",&r);
    float ar=3.14*r*r;
    printf("Area: %.2f",ar);
    return 0;
}