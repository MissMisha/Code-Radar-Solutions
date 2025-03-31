// Your code here...
#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    
    for(int i=0;i<n;i++){
        int ind=(i+k)%n;
        arr[ind]=arr[i];
        printf("%d to %d\n",arr[i],arr[ind]);
    }
    for(int i=0;i<n;i++){
        //printf("%d",arr[i]);
    }
    
}