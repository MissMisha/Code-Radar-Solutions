#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int r;
    scanf("%d",&r);
    int ar=3.14*r*r;
    printf("Area: %d",ar);
    return 0;
}