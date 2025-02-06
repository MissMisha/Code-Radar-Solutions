#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=num;i++){
        for(int j=num;j>=i;j--){
            printf("*");
        }
    }
    return 0;
}