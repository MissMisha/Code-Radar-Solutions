#include <stdio.h>

char* welcome(float numb) {
    printf("You entered: %f",numb);
}

int main() {
    int numb;
    printf("",numb);
    scanf("%f",&numb);
    welcome(numb);
    return 0;
}