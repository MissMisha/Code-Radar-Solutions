#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char input;
    scanf("%c",&input);
    int ascii=char;
    if(ascii>=65 && ascii<=90){
        printf("Uppercase");
    }
    else if(ascii>=97 && ascii<=122){
        printf("Lowercase");
    }
    
    return 0;
}