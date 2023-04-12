#include<stdio.h>
int  partition(int a[],int l,int h){
    int pivot=a[h];
    int c=l-1;
    for(int i=l;i<h;i++){
        if(a[i]<pivot){
            c++;
            int temp=a[i];
            a[i]=a[c];
            a[c]=temp;
        }
    }
    c++;
    int temp=a[c];
    a[c]=a[h];
    a[h]=temp;
    return c;
}
void quicksort(int a[],int l,int h){
    if(l<h){
        int pivot=partition(a,l,h);
        quicksort(a,l,pivot-1);
        quicksort(a,pivot+1,h);
    }
}
int main() {
    int arr[10] = {12, 56, 14, 45, 71, 8, 10, 6, 22, 88};
    quicksort(arr, 0, 9);
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}