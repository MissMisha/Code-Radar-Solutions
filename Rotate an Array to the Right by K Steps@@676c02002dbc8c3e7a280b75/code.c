// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n], k;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    int new[n],ind;
    for(int i=0;i<n;i++){
         ind=(i+k)%n;
        new[ind]=arr[i];
    }
    for(int i=0;i<n;i++){
        new[ind]=arr[i];
    }
}