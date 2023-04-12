#include<stdio.h>
void insertsort(int a[],int n){
    for(int i=0;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
int main(){
    int arr[10]={12,56,14,45,71,8,10,6,22,88};
    insertsort(arr,10);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}