#include<stdio.h>
int main(){
    int n;
    printf("enter size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array \n");
    for(int i=0;i<n;i++){ //taking array input
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("array after sorting\n"); 
    for(int i=0;i<n;i++){ 
        printf("%d ",arr[i]);
    }
    return 0;
}