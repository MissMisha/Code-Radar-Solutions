#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char grade;
    scanf("%c",&grade);
    switch(grade){
        case 'A':
        printf("Excellent");

        case 'B':
        printf("Good");

        case 'C':
        printf("Average");

        case 'D':
        printf("Below Average");

        case 'F':
        printf("Fail");
    }
   
    return 0;
}