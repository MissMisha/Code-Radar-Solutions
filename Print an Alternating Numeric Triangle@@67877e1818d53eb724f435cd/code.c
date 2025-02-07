#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int n;
   scanf("%d",&n-1);

   for(int i=1;i<=n;i++){
    for(int j=n-i+1;j<=n;j++){
        printf("%d ",j);
    }
    printf("\n");
   }
    return 0;
}