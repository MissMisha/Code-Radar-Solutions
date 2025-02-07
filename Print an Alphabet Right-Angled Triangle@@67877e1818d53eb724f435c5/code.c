#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int c=1;
    for(int i=65;i<=65+n;i++){
        for(int j=65;j<=c;j++){
            printf("%c",j);
            c++;
        }
        printf("\n");
    }
    
    return 0;
}