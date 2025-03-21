// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max1=arr[0];
    int max2=arr[1];
    for(int i=0;i<n;i++){
    
      if(max1<arr[i]){
            max2=max1;
             max1=arr[i];
        }
        else if(max2<max1 && max2>arr[i]){
            max2=arr[i];
        }
    }
    if(max2!=max1 && n!=1){
        printf("%d",max2);
    }
    else{
        printf("-1");
    }
    
}