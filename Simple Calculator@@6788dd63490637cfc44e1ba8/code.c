#include <stdio.h>

int main() {
    int a,b,ans=0;
    char op;
    scanf("%d %d %c",&a,&b,&op);
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