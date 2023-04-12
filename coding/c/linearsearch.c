#include<stdio.h>
void linersearch(int arr[],int target,int n){
    int k=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            k=i;
            break;
        }
    }
    if(k==-1){
        printf("element not found");
    }
    else{
        printf("element found at index %d ",k);
    }
}
int main(){
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf(" enter elements of array \n");
    for(int i=0;i<n;i++){ //taking array input
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter element to search ");
    scanf("%d",&target);
    linersearch(arr,target,n);
    return 0;
}