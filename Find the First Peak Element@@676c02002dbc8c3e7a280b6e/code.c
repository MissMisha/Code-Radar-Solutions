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
        if(arr[i]>arr[i-1] && arr[i]<arr[i+1]){
            peak=arr[i];
            printf("%d\n",peak);
        }
    }
    printf("%d",peak);
}
