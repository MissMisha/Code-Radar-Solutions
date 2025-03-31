// Your code here...
#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    
    for(int i=0;i<n;i++){
        int ind=(i+k)%n;
        arr2[ind]=arr[i];
        
    }
    for(int i=0;i<n;i++){
        printf("%d",arr2[i]);
    }
    
}