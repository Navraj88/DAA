#include<stdio.h>
int binarysearch(int nums[], int target,int low,int high){
        if(low>high){
            return -1;
        }
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            return binarysearch(nums,target,low,mid-1);
        }
        else{
            return binarysearch(nums,target,mid+1,high);
        }
}
int main(){
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    //input sorted array
    printf(" enter elements of array \n");
    for(int i=0;i<n;i++){ //taking array input
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter element to search");
    scanf("%d",&target);
    int x=binarysearch(arr,target,0,n-1); //calling binarysearch function
    if(x==-1){
        printf("element not found");
    }
    else{
        printf("element found at %d index",x);
    }
    return 0;
}

