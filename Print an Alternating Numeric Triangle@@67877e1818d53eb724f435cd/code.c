#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int n;
   scanf("%d",&n);
    int c=1;
   for(int i=1;i<=n;i++){
    c++;
        for(int j=1;j<=i;j++){
            if(j%2==0){
                printf("0");
            }
            else{
                printf("1");
            }   
    }  
    printf("\n");
   }
    return 0;
}