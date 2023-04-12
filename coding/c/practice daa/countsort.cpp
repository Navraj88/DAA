#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
void sort(int a[],int n){
    int k=a[0];
    for(int i=1;i<n;i++){
        k=max(k,a[i]);
    }
    int s[k+1]={0};
    for(int i=0;i<n;i++){
        s[a[i]]++;
    }
    for(int i=1;i<=k;i++){
        s[i]+=s[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--s[a[i]]]=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=output[i];
    }
}
int main(){
    int a[]={1,1,2,7,5,3,4,9,8,6};
    sort(a,10);
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
