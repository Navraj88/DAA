#include<stdio.h>
void swap(int *b,int *c){
    int temp=*b;
    *b=*c;
    *c=temp;
}
void sort(int a[]){
    for(int i=0;i<9;i++){
        int min=i;
        for(int j=i+1;j<10;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(&a[i],&a[min]);
        }
        
    }
}
int main(){
    int arr[10]={12,56,14,45,71,8,10,6,22,88};
    sort(arr);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}