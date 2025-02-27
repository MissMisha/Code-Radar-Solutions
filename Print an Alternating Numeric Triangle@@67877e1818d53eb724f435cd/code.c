#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int n;
   scanf("%d",&n);
    int c=1;
   for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++){
            if(c%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
            } 
            c++;  
    }  
    printf("\n");
   }
    return 0;
}