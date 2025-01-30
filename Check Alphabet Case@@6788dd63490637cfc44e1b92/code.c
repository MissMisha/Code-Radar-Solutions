#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    int ascii=ch;
    if(ascii>=65 && ascii<=90){
        printf("Uppercase");
    }
    else if(ascii>=97 && ascii<=122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    
    return 0;
}