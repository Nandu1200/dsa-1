#include<iostream>
using namespace std;
int duplicate(int arr[], int n){
    int ans=0;
    //xor ing all array elements
    for(int i=0; i<n; i++){
        ans=ans^arr[i];
    }
    // xor [1, n-1]
    for(int i=1; i<n; i++){
        ans=ans^i;
        
    }
    cout<<ans<<endl;
    return ans;
}
int main(){
    int arr[]={1,2,3,4,3};
    int n=5;  
    duplicate(arr,n);
}