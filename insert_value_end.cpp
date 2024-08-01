#include<iostream>
using namespace std;
void insert_element(int arr[], int n, int element){
    arr[n]=element;


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
  
}
int main(){
    int arr[]={3,5,6,7};
    int n=5;
    int element=1;
  insert_element(arr,n,element);
  return 0;
}