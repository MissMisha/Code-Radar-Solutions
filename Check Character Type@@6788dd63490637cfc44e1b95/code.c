#include <stdio.h>
#include <ctype.h>

int main() {
    char input;
    scanf("%c",&input);
    char ch=tolower(input);
    if(ch>='a' && ch<='z'){
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