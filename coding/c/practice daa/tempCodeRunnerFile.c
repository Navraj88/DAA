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