#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int n;
   scanf("%d",&n);
    
   for(int i=1;i<=n;i++){
        if(i%2==0){
            for(int j=0;j<i;j++){
                printf("%d ",j%2);
            } 
        }
        else{
            for(int j=1;j<=i;j++){
                printf("%d ",j%2);
            }
                
        } 
             
        
         printf("\n"); 
    }  
    
   
    return 0;
}