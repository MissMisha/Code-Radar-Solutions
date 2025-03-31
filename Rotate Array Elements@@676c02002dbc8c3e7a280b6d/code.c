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
    int arr[n];
    for(int i=0;i<n;i++){
        int ind=(i+k)%n;
        arr[ind]=arr[i];
    }
    
}