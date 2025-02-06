#include <stdio.h>

int main() {
    int a,b,op,ans=0;
    scanf("%d %d %d",&a,&b,&op);
    switch(op){
        case '+':
        ans=a+b;
        printf("%d",ans);
        break;

        case '-':
        ans=a-b;
        printf("%d",ans);
        break;

        case '*':
        ans=a*b;
        printf("%d",ans);
        break;

        case '/':
        ans=a/b;
        printf("%d",ans);
        break;
    }
    
    return 0;
}