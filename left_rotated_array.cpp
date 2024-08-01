#include<iostream>
using namespace std;
int leftrotate(int arr[], int n){
    int temp=arr[0]; //Store the value of the first element at temp
for(int i=1; i<n; i++){
    arr[i-1]=arr[i];

}
arr[n-1]=temp; // store the value of the temp at arr[n-1]

}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    
    leftrotate(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}