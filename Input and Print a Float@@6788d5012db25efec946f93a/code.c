#include <stdio.h>

char* welcome(int numb) {
    printf("You entered: %d",numb);
}

int main() {
    int numb;
    printf("enter a numb");
    scanf("%d",&numb);
    printf("%d",welcome(numb));
    return 0;
}