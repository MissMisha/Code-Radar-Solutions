#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        printf("num1");
    }
    else{
        printf("num2");
    }
    printf("%s", welcome());
    return 0;
}