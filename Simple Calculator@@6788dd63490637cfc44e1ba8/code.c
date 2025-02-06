#include <stdio.h>

int main() {
    int a,b,ans=0;
    char op;
    scanf("%d %d",&a,&b);
    scanf(" %c",&op);
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
        if(b!=0){
            ans=a/b;
        }
        else{
            printf("error");
            break;
        }
        printf("%d",ans);
        break;
    }
    
    return 0;
}