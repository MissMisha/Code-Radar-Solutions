#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,op,ans=0;
    scanf("%d %d %d",&a,&b,&op);
    switch(op){
        case '+':
        ans=a+b;

        case '-':
        ans=a-b;

        case '*':
        ans=a*b;

        case '/':
        ans=a/b;
    }
    printf("%d",ans);
    return 0;
}