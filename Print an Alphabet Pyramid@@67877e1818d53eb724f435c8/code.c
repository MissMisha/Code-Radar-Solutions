#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf("%c ",65+i);
        }
    }
   
    return 0;
}