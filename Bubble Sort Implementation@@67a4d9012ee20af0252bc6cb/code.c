// Your code here...
void sortArray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int n;
    int a[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    sortArray(arr,n);
}