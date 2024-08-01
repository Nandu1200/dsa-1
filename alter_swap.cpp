#include<iostream>
using namespace std;
void swapalter(int arr[], int n){
    for(int i=0; i<n-1; i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    
}
 int main(){
    int arr[]={4,8,1,6,9,7};
    int n=6;
    swapalter(arr,n);
    // print the modified array
    cout<<"modified array:";
    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
    cout<< endl;
    return 0;
 }