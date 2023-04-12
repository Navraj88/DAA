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
    for(int i=1;i<n;i++){//insertion sort
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){ //checking elements to the left of current elements
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    printf("array after sorting\n"); 
    for(int i=0;i<n;i++){ 
        printf("%d ",arr[i]);
    }
    return 0;
}