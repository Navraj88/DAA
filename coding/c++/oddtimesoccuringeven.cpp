//odd times occuring element in a given array
// xor(^)operator when used even times on same variable returns 0
// when used odd times returns same no
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,4,2,3,1,4};
    int a=0;
    for(int i=0;i<9;i++){
        a^=arr[i];
    }
    cout<<a;
    return 0;
}