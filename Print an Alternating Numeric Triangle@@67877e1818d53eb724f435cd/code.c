#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int n,c=0;
   scanf("%d",&n);

   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        printf("%d ",c++);
    }
    printf("\n");
   }
    return 0;
}