// You code here...
int main(){
    int n;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
           printf("%c ",j+64); 
        }
        printf("\n");
    }
}