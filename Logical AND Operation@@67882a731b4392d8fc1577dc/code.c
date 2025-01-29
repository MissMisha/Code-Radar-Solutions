#include <stdio.h>

bool welcome(int a,int b) {
   if(a>0 && b>0){
    return True;
   }
   else{
    return False;
   }
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    bool resp=welcome(a,b);
    printf("%d", resp);
    return 0;
}