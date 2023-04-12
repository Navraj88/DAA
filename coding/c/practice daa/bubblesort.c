#include<stdio.h>
void swap(int *b,int *c){
    int temp=*b;
    *b=*c;
    *c=temp;
}
void bubblesort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
int main(){
    int arr[10]={12,56,14,45,71,8,10,6,22,88};
    bubblesort(arr,10);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}