// Your code here...
#include<stdio.h>
int main(){
    int n,peak=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            peak=arr[i];
           break;
        }
        if(i==n-1 && peak==0 && arr[i]>arr[i-1]){
            printf("%d",arr[i]);
        }
    }
    if(peak!=0){
    printf("%d",peak);
    }
    else{
        printf("-1");
    }
}
