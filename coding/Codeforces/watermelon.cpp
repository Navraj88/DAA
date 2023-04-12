#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x=t/2;
    for(x;x<t-2;x++){
        if(x%2==0 && (t-x)%2==0){
            break;
        }
    }
    if(x%2==0 && (t-x)%2==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}