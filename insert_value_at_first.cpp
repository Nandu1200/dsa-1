#include<iostream>
using namespace std;
void insertvalue(int arr[], int n, int element){
    // shift  element to the right side to make space for the new element
    for(int i=n-1; i>=0; i--){
        arr[i+1]=arr[i];
    }
    // insert the new element at the beginning

    arr[0]=element;
    // print the modified array
    for(int i=0; i<=n; i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int arr[]={2,5,8,7,3};
    int n=5;
    int element=1;
    insertvalue(arr,n,element);
    return 0;

}