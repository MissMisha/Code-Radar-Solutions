#include <stdio.h>

bool welcome(&a,&b) {
   if(a>0 && b>0){
    return True;
   }
   else{
    return False;
   }
}

int main() {
    scanf("%d %d",&a,&b);
    char resp=welcome(a,b);
    printf("%c", resp);
    return 0;
}