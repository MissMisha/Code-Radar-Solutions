// Your code here.
#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    int arr[100], freq[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        freq[i]=-1;
    }
    for(int i=0;i<n;i++){
        count=1;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;

                freq[j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(freq[i]!=0){
            printf("%d",freq[i]);
        }
    }
}