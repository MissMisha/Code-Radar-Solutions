#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=65;i<=65+n;i++){
        int c=1;
        while(c<=n){
        for(int j=65;j<=c+65;j++){
            printf("%c",j);
        }
        c++;
        }
        printf("\n");
    }
    
    return 0;
}