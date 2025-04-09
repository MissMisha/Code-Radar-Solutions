// Your code here...
#include<stdio.h>

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<arr.size();i++){
            int max=0;
            for(int j=i+1;j<arr.size();j++){
                max=arr[i+1];
                if(arr[j]>max){
                    max=arr[j];
                }
            }
            arr[i]=max;  
        }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }    
}