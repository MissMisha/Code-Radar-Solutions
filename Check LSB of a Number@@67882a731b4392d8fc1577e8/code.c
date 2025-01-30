#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int lsb= a & (-a);
    printf("%d", lsb);
    return 0;
}