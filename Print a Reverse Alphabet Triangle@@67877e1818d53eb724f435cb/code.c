// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=i+1;j>=1;j--){
           printf("%c ",j+64); 
        }
        printf("\n");
    }
}