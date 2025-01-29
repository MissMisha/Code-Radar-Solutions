#include <stdio.h>

bool welcome(int a,int b) {
   if(a>0 && b>0){
    printf("True");
   }
   else{
    printf("False");
   }
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    welcome(a,b);
    
    return 0;
}