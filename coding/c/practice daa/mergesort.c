#include<stdio.h>

void merge(int a[], int l, int mid, int h) {
    int arr[h-l+1];
    int i = l;
    int j = mid+1;
    int x = 0;
    while(i <= mid && j <= h) {
        if(a[i] <= a[j]) {
            arr[x] = a[i];
            i++;
        } else {
            arr[x] = a[j];
            j++;
        }
        x++;
    }
    while(i <= mid) {
        arr[x] = a[i];
        i++;
        x++;
    }
    while(j <= h) {
        arr[x] = a[j];
        j++;
        x++;
    }
    for(int i = 0, j = l; j <= h; i++, j++) {
        a[j] = arr[i];
    }
}

void mergesort(int a[], int l, int h) {
    if(l >= h) {
        return;
    }
    int mid = l + (h-l)/2;
    mergesort(a, l, mid);
    mergesort(a, mid+1, h);
    merge(a, l, mid, h);
}

int main() {
    int arr[10] = {12, 56, 14, 45, 71, 8, 10, 6, 22, 88};
    mergesort(arr, 0, 9);
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
