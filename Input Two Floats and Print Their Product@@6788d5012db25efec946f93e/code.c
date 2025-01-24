#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    scanf("%f%f",&a,&b);
    float prod=a*b;
    printf("%f",prod);
    return 0;
}