#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        ch=tolower(ch);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        if(ch>='0' && ch<='9'){
            printf("Digit");
        }
        else{
            printf("Special Character");
        }
    }
    
    return 0;
}