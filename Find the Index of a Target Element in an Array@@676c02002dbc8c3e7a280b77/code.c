// Your code here...
#include<stdio.h>
int main(){
    int n,target=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("%d",i);
            flag=1;
        }
    }
    if(flag==0){
        printf("-1");
    }

}