#include <stdio.h>

int main() {
    int num=5,flag=1;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag=0;
            break;
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