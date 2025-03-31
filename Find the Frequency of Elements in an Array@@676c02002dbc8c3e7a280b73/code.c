// Your code here...
#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int freq[100];
    for(int i=0;i<n;i++){
        freq[i]=-1;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;

                freq[j]=0;
            }
        }
        if(count!=0){
            freq[i]=count;
        }
    }
    for(int i=0;i<n;i++){
        if(freq[i]!=0){
            printf("%d %d\n",arr[i],freq[i]);
        }
    }
}