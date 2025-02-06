#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char instr;
    scanf("%c",&instr);

    switch(instr){
        case 'R':
        printf("Stop");

        case 'Y':
        printf("Slow Down");

        case 'G':
        printf("Go");

        default:
        printf("Invalid input");
    }
    
    return 0;
}