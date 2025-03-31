// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int freq[n]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i]==arr[j]){
                freq[i]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",freq[i]);
    }
}