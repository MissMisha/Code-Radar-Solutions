#include <stdio.h>

char* welcome(int numb) {
    printf("You entered: %f",numb);
}

int main() {
    int numb;
    
    printf("%d",welcome(numb));
    return 0;
}