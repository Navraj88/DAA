#include<stdio.h>
    int main(){
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf(" enter elements of array \n");
    for(int i=0;i<n;i++){ //taking array input
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){    //sorting inputted arrray
        int minindex=i;
        for(int j=i+1;j<n;j++){
                if(arr[j]<arr[minindex]){
                    minindex=j;
                }
        }
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
    for(int i=0;i<n;i++){ //taking array input
        printf("%d ",arr[i]);
    }
    return 0;
}