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
        break;

        case 'Y':
        printf("Slow Down");
        break;

        case 'G':
        printf("Go");
        break;

        default:
        printf("Invalid input");
    }
    
    return 0;
}