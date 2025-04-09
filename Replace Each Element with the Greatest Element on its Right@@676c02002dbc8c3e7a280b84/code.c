// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
            int max=0;
            for(int j=i+1;j<n;j++){
                max=arr[i+1];
                if(arr[j]>max){
                    max=arr[j];
                }
            }
            arr[i]=max;  
        }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("-1");    
}