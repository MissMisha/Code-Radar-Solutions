#include <stdio.h>

int main() {
    int num=0,flag=1;
    for(int i=0;i<=num/2;i++){
        if(num%i==0){
            flag=0;
        }
    }
    if(flag==0){
       printf("Not Prime"); 
    }
    else{
        printf("Prime");
    }
    
    return 0;
}