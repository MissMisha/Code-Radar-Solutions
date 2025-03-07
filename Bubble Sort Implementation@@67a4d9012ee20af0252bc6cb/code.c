// Your code here...
bubbleSort(int *arr[],int n){
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
           if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i+1]=arr[i];
            arr[i]=temp;
           }
        }
    }

}
printArray(int *arr[]){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
}